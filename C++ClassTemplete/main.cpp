#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;


template <typename T>
class AddElements
{
    private:
    T var1;
    T var2;
  public:
  AddElements()
  {
      
  }  
    AddElements(T var1 )
  {
      this->var1=var1;
  } 
  T add( T var2)
  {
     
      return (var1+var2);
  }
  
  ~AddElements()
  {
      
  }
};
template <>
class AddElements<string>
{
    private:
    string var1;
    string var2;
    
      public:
  AddElements()
  {
      
  }  
    AddElements(string var1)
  {
     this->var1=var1; 
  } 
  string concatenate( string var2)
  {
      
      return (var1+var2);
  }
  
  ~AddElements()
  {
      
  }
};

int main () {
  int n,i;
  cin >> n;
  for(i=0;i<n;i++) {
    string type;
    cin >> type;
    if(type=="float") {
        double element1,element2;
        cin >> element1 >> element2;
        AddElements<double> myfloat (element1);
        cout << myfloat.add(element2) << endl;
    }
    else if(type == "int") {
        int element1, element2;
        cin >> element1 >> element2;
        AddElements<int> myint (element1);
        cout << myint.add(element2) << endl;
    }
    else if(type == "string") {
        string element1, element2;
        cin >> element1 >> element2;
        AddElements<string> mystring (element1);
        cout << mystring.concatenate(element2) << endl;
    }
  }
  return 0;
}

