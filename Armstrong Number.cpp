#include<bits/stdc++.h> 
using namespace std;
int numOfDigits(int n)
{
	
	if(n==0)
	return 0;
	else
	return 1+numOfDigits(n/10);
}
bool isArmstrong(int n)
{
	int nod=numOfDigits(n);
	//cout<<nod<<endl;
	int res=0,n1=n;
	while(n!=0)
	{
		res=res+pow(n%10,nod);
		n=n/10;
	}
	
	return (n1==res);
}
int main()
{
	int n;
	cin>>n;
	cout<<isArmstrong(n);
}
