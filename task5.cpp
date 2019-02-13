
#include <iostream>
#include <vector>
using namespace std;
vector<int> Reversed(const vector<int>& v) {
    int size = v.size();
    vector<int> c = v;
    for (auto i : v) { 
        c[size - 1] = i; 
        size--;
    }
    return c; 
}
int main() 
{vector<int> nambers = { 5,4,3,1,2 };
    for (auto i : Reversed(nambers)) {
        cout << i << " ";}
    return 0;
}
