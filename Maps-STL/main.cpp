#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
map<string,int>Mappy;
unsigned int N_Queries;
unsigned int Query_type;
cin>>N_Queries;
for(auto i =0; i < N_Queries ;++i)
{
    cin>>Query_type;
    if(1==Query_type)
    {
        string Student_name;
        unsigned int degree;
        unsigned int Previous_degree;
        cin>>Student_name;
        cin>>degree;
        if(Mappy.find(Student_name)!=Mappy.end())
        {
           Previous_degree =Mappy.find(Student_name)->second;
           Mappy[Student_name]=(degree+Previous_degree); 
        }
        else {
            Mappy[Student_name]=degree;
        }
        
    }
    else if (2==Query_type) {
        string Student_name;
        cin>>Student_name;
        Mappy.erase(Student_name);
    
    }
    else if (3==Query_type){
        string Student_name;
        cin>>Student_name;
        cout<<Mappy[Student_name]<<endl;
    }
    else {
    
    }
}

 
    return 0;
}




