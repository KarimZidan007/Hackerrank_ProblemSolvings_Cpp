#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

unsigned int querey_number=0;
int main() {
    set<int>s;
    cin>>querey_number;
    for(int i=0 ;i < querey_number ; i++)
    {
      int querey_type=0;
      int integerr=0;
      cin>>querey_type;
      cin>>integerr;  
        switch(querey_type)
        {
            case 1 : 
                    s.insert(integerr); 
                    break;
            case 2 :
                    s.erase(integerr);
                    break;
            case 3 : 
                    (s.find(integerr)!=s.end()) ? cout<<"Yes\n":cout<<"No\n";
                    break;
            default : break;
        }
    }
    return 0;
}




