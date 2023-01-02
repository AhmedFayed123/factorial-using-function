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
cin >>num;
cout<<fact(num);	
}
