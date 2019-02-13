#include <iostream>
#include <string>
#include <vector>
using namespace std;
void copy(vector<int>& first, vector<int>& second) { 
    for (auto x : first) {
        second.push_back(x); 
		}
    first.clear();
}
int main() 
{
    vector<int> first = { 1,2,3,4 }, second = { 1,2,3,4,5,6,7,0 };
    copy(first, second);
  
    for (auto i : second) {
        cout << i << " "; 
    }
    return 0;
}
