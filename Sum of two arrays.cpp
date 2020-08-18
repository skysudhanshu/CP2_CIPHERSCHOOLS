#include<iostream>
using namespace std;
int num(int *n,int size)
{
	int number=0;
	
	for(int i=0;i<size;i++)
	{
		number=number*10+n[i];
	}
	cout<<number<<endl;
	return number;
}

int sumOfTwoArrays(int *a,int *b,int size_a,int size_b)
{
    return num(a,size_a)+num(b,size_b);
}
int main()
{
	int size_a;
    int size_b,i;
    cout<<"Enter Size Of Array A: ";
    cin>>size_a;
    int a[size_a];
    cout<<"Enter Size Of Array B: ";
    cin>>size_b;
    int b[size_b];
    cout<<"Enter Array A: ";
    for(i=0;i<size_a;i++)
    {
    	cin>>a[i];
	}
    cout<<"Enter Array B: ";
    for(i=0;i<size_b;i++)
    {
    	cin>>b[i];
	}

    cout<<"Numbers Are:"<<endl;
	cout<<"Sum Of Two Arrays Is:"<<sumOfTwoArrays(a,b,size_a,size_b);
}
