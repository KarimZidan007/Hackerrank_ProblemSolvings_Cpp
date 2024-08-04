#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
unsigned int n; // array one size
unsigned int q; //number of queries
unsigned int size;

cin>>n>>q;

vector<vector<int>>VEC(n);

for (unsigned int x =0 ; x <n ;x++)
{
    cin>>size;
    for(unsigned int y=0 ; y <size ;y++)
    {
        unsigned int temp;
        cin>>temp;
        VEC[x].push_back(temp);
    }
    size=0;
}
for (unsigned int i =0 ; i <q ;i++)
{
    unsigned int x;
    unsigned int y;
    cin>>x;
    cin>>y;
    cout<<VEC[x][y]<<"\n";
}
    return 0;
}

