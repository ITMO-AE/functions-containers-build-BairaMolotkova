#include<iostream>
using namespace std;
void fractal(int a)
{int i,q;
	q=1;
	if (a<1) 
		cout << "1";
		for (int i=1;i<a+1;i++)
		 q=q*i;
		 if (a>0) cout << q;
		 }
 int main(){
	int s;
	cin >> s;
	fractal(s);
	return 0;}


