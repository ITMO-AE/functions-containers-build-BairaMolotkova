#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool IsPalindrom(string s) {
int a;
a=s.length();     
    for (int i = 0; i < a/2; i++) {
        if (s[i] != s[a - i - 1])  return false ;
    }
    return true;
}
vector<string> PalindromFilter(vector<string> words,  int minLength)
{vector<string> output;
	vector<string>::iterator it;
 for (it = words.begin(); it != words.end(); it++){
        if (((*it).size() >= (unsigned)minLength) && IsPalindrom(*it))
            output.push_back(*it);
    }
 return output;
}
int main() 
{
    vector<string> words = { "sdfslk","dsksd","kddk","dd",";lwjlerjlwer" };
    int minLength = 3;
    int sh = 0;
    string a = "";
    for (string i : PalindromFilter(words, minLength)) {
        sh++;
        if (sh > 1) { a = ", "; }
        cout << a << i;
    }
    return 0;
}
