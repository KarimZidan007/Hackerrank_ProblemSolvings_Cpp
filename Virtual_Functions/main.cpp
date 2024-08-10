#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#include <string>

class Person {
  public:  
  Person()
  {
      
  }
 int age;
 string name;   
    virtual void getdata()
    {
        
    }
    virtual void putdata()
    {
        
    }
    ~Person()
    {
        
    }
};
class Professor : public Person
{
     public:
    int publications;
    int cur_id;
   
    static int professor_id;
    Professor()
    {
        professor_id++;
        cur_id=professor_id;
    }
    void getdata()
    {
        
       cin>>name;
        cin>>age;
        cin>>publications;
    }
    void putdata()
    {
        cout<<name<<" "<<age<<" "<<publications<<" "<<cur_id<<endl;
    }
    ~Professor()
    {
        
    }
    
};

class Student :public Person
{
public:
int marks[6];
int cur_id;
int marks_sum;
static int student_id;

Student()
{
  student_id++;  
  cur_id=student_id;
}
void getdata()
{
cin>>name;
cin>>age;


for(int i =0 ; i <6 ; i++)
{
    cin>>marks[i];
    marks_sum+=marks[i];
}
}
void putdata()
{
    cout<<name<<" "<<age<<" "<<marks_sum<<" "<<cur_id<<endl;
}
~Student()
{
    
}
};

 int Student::student_id =0;
int Professor::professor_id=0;

int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}

