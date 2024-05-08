#include <iostream>
#include <string>
using namespace std;

string a ;
string b;

int main() {

    cin>>a>>b;
    cout<<a.length()<<" "<<b.length()<<endl<<a+b<<endl;
    char temp_x=a[0];
    a[0]=b[0];
    b[0]=temp_x;
    cout<<a<<" "<<b;

    return 0;
}
