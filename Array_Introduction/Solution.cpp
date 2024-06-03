#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

unsigned short Array_Length;

int main() {
cin>>Array_Length;
unsigned int Array[Array_Length];
    for(unsigned short start=0 ; start<Array_Length ;start++ )
    {
        cin>>Array[start];


    }
    for(int i = Array_Length-1 ; i>=0 ;i-- )
    {
         cout<<Array[i]<<" ";
    }
    return 0;
}

