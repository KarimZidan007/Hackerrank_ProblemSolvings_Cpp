#include <sstream>
#include <vector>
#include <iostream>

using namespace std;
unsigned int temp_index;
string temp_string;
int value;
char ch;
vector<int> parseInts(string str) {
vector<int> TEMP_VEC;
stringstream ss(str);

while(ss>>value)
{
    TEMP_VEC.push_back(value);   
    ss>>ch;  
}
return TEMP_VEC;

}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}

