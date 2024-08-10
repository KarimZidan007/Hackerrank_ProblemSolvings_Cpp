#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Matrix
{
private:


public:
vector<vector<int>>a; 

Matrix()
{
    
}


Matrix  operator+( Matrix & obj2)   
{
Matrix result;
    
 vector<int>temp;
 for(unsigned int i=0 ; i <obj2.a.size() ; i++)
 {
     for(unsigned int x=0 ;x <obj2.a[0].size() ; x++)
     {
         int number=(a[i][x]+obj2.a[i][x]);
         temp.push_back(number);
     }
     result.a.push_back(temp);
     temp.clear();
 }
        
 return result;   
}
    
~Matrix()
{
    
}    
};
int main () {
   int cases,k;
   cin >> cases;
   for(k=0;k<cases;k++) {
      Matrix x;
      Matrix y;
      Matrix result;
      int n,m,i,j;
      cin >> n >> m;
      for(i=0;i<n;i++) {
         vector<int> b;
         int num;
         for(j=0;j<m;j++) {
            cin >> num;
            b.push_back(num);
         }
         x.a.push_back(b);
      }
      for(i=0;i<n;i++) {
         vector<int> b;
         int num;
         for(j=0;j<m;j++) {
            cin >> num;
            b.push_back(num);
         }
         y.a.push_back(b);
      }
      result = x+y;
      for(i=0;i<n;i++) {
         for(j=0;j<m;j++) {
            cout << result.a[i][j] << " ";
         }
         cout << endl;
      }
   }  
   return 0;
}

