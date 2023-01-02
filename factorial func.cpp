#include<iostream>
using namespace std;
int fact(int n)
{
	int fac=1;
		for(int i=1;i<=n;i++){
		fac=fac*i;
	}
	return fac;

}
int main()

{
int num;
cout<<"enter number to get the factorial : ";	
cin >>num;
cout<<"factorial = "<<fact(num);	
}
