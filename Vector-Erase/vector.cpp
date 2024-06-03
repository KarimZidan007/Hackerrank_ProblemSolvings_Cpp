#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

unsigned int vec_size = 0;
unsigned int element = 0;
unsigned int position = 0;
unsigned int start_pos = 0;
unsigned int end_pos = 0;

int main() {
    // Input vector size
    cin >> vec_size;
    vector<int> vec1;

    // Input vector elements
    for (unsigned int i = 0; i < vec_size; i++) {
        cin >> element;
        vec1.push_back(element);
    }

    // Remove element at a specified position
    cin >> position;
    if ((0 <= position) && (vec_size > position)) {
        vec1.erase(vec1.begin() + position - 1);
    }

    // Remove elements in a specified interval
    else {
        cerr << "error invalid position" << endl;
    }
    cin >> start_pos;
    cin >> end_pos;
    if ((start_pos > 0) && (start_pos <= end_pos) && (end_pos <= vec1.size())) {
        vec1.erase(vec1.begin() + start_pos - 1, vec1.begin() + end_pos - 1);
    }

    else {
         cerr << "invalid intervals" << endl;
    }

    // Output the size of the modified vector
    cout << vec1.size() << endl;

    // Output the modified vector elements
    for (int i = 0; i < vec1.size(); i++) {
        cout << vec1[i] << " ";
    }

    return 0;
}
