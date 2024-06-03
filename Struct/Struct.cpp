#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct Student
{
    unsigned int age;
    string first_name ;
    string last_name ;
    unsigned int standart;
};

int main() {
    Student st;
    
    cin >> st.age >> st.first_name >> st.last_name >> st.standart;
    cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standart;
    
    return 0;
}
