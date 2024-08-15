#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <set>
#include <cassert>
using namespace std;

struct Node{
   Node* next;
   Node* prev;
   int value;
   int key;
   Node(Node* p, Node* n, int k, int val):prev(p),next(n),key(k),value(val){};
   Node(int k, int val):prev(NULL),next(NULL),key(k),value(val){};
};

class Cache{
   
   protected: 
   map<int,Node*> mp; //map the key to the node in the linked list
   int cp;  //capacity
   Node* tail; // double linked list tail pointer
   Node* head; // double linked list head pointer
   virtual void set(int, int) = 0; //set function
   virtual int get(int) = 0; //get function

};


class LRUCache : public Cache
{
public:
int get(int key)
{
 int retval =1 ;
    
    
    if(mp.end() != mp.find(key))
       {
        if(mp[key] == head)
        {
            return head->value;
        }
        else if(mp[key]==tail)
        {
            auto temp_node =tail;
            (tail->prev)->next=nullptr;
            tail=tail->prev;
            temp_node->next=head;
            head->prev=temp_node;
            head=temp_node;
            retval = head->value;
        }
        else {
                
                (mp[key]->next)->prev=mp[key]->prev;
                (mp[key]->prev)->next=mp[key]->next;
                mp[key]->next=head;
                head->prev=mp[key];
                head=mp[key]; 
                retval = head->value;         
        }

    }
    else if (mp.end() == mp.find(key)) {


        retval= -1;
    }

  return retval;  
} 


bool if_map_full()
{
    if(cp==mp.size())
    {
        return true;
    }
    return false;
} 
bool if_map_empty()
{
    if(0==mp.size())
    {
        return true;
    }
    return false;
}  
void set_tail()
{
    auto temp_header =head;
    while(temp_header->next != nullptr)
    {
        temp_header=temp_header->next;
    }
    tail=temp_header; 
}
    
public:
LRUCache(int capacity)
{
cp=capacity;
} 

void set(int key, int value) 
{
    if(mp.end() != mp.find(key)) // if key exist
    {
        
        if(mp[key] == head)
        {
            head->value=value;    
        }
        else if(mp[key] == tail)
        {
            mp[key]->value=value;
            tail=mp[key]->prev;
            tail->next=nullptr;
            mp[key]->next=head;
            head->prev=mp[key];
            head=mp[key];
        }
        else {
            mp[key]->value=value;
            mp[key]->next->prev=mp[key]->prev;
            mp[key]->prev->next=mp[key]->next;
            mp[key]->next=head;
            head->prev=mp[key];
            head=mp[key];
        }

    }
   
    else if(mp.end() == mp.find(key))// key does not exist (create new nodes)
    {
        
      if(true==if_map_full())
        {
           mp.erase(tail->key);
           auto temp =tail;
           (tail->prev)->next=nullptr;
           tail=temp->prev;
           delete temp;
           auto temp_node = new Node(nullptr,head,key,value);
           temp_node->value=value;
           head->prev=temp_node;
           head=temp_node;
           mp.insert({key,head});
           
        }
        // map not full
        else if(false == if_map_full())
        {

            if(false == if_map_empty())
            {
                    
                auto temp_node = new Node(nullptr,head,key,value);
                mp.insert({key,temp_node});
                head->prev=temp_node;
                head=temp_node;
                temp_node->value=value;  
              
            }
            else if(true == if_map_empty())
            {
                
                head = new Node(nullptr,nullptr,key,value);
                tail=head;    
                head->value=value;
                mp.insert({key,head});

            }

        }
             
   }  
    
} 

~LRUCache()
{
    
}    
    
};

int main() {
   int n, capacity,i;
   cin >> n >> capacity;
   LRUCache l(capacity);
   for(i=0;i<n;i++) {
      string command;
      cin >> command;
      if(command == "get") {
         int key;
         cin >> key;
         cout << l.get(key) << endl;
      } 
      else if(command == "set") {
         int key, value;
         cin >> key >> value;
         l.set(key,value);
      }
   }
   return 0;
}

