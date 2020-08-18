#include<iostream>
using namespace std;
int binaryToDecimal(int n)
{
	int pwr=1;
	int dec=0;
	int res=0;
	while(n!=0)
	{
		dec=(n%10)*pwr;
		pwr=pwr*2;
		res=res+dec;
		n=n/10;
	}
	return res;
}
int main()
{
	int n;
	cin >> n;
	cout << binaryToDecimal(n);
	
}
