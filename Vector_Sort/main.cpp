#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int temp,SIZE;
int main() {
    vector<int>Vec;
    cin>>SIZE;
        for(int i=0 ; i< SIZE;i++)
        {
            cin>>temp;
            Vec.push_back(temp);   
        }
    std::sort(Vec.begin(),Vec.end());

        for(int i=0 ; i< SIZE;i++)
        {
        cout<<Vec[i]<<" ";  
        }
    return 0;
}

