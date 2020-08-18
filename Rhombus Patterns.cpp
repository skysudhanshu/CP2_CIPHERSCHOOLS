#include<iostream>
using namespace std;

void printSolid(int n)
{
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n-i;j++)
		{
			cout<<" ";
		}
		for(int k=1;k<=n;k++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}
void printHollow(int n)
{
int i,j;
for (i=1;i<=n;i++) 
    { 
        for (j=1; j<=n-i;j++) 
            cout<<" "; 
        if (i==1 || i==n)
		{
            for (j=1;j<=n;j++) 
                cout<<"*"; 
        }
        else
        {
            for (j=1;j<=n;j++) 
            {
                if (j==1 || j==n) 
                    cout<<"*";   
                else
                    cout<<" "; 
            }
        }
        cout<<endl; 
    } 
}

int main()
{
	int n;
	cin>>n;
	printSolid(n);
	printHollow(n);
}
