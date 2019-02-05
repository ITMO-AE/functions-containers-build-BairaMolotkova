#include<iostream>
#include<string>
using namespace std;
bool IsPalindrom(string s) {
int a;
a=s.length();     
    for (int i = 0; i < a/2; i++) {
        if (s[i] != s[a - i - 1])  return false ;
    }
    return true;
}
 int main(){
	string s1;
	cin >> s1;
	if(IsPalindrom(s1)) cout << "Yes" ;else cout << "No";
	return 0;}

