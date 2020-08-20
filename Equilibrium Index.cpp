#include<iostream>
using namespace std;
int equilibrium(int *arr, int size)
{
	int i, j; 
    int leftsum, rightsum; 
    for (i = 0; i < size; ++i)  
    {      
        leftsum = 0;  
        for (j = 0; j < i; j++) 
            leftsum += arr[j]; 
  
        rightsum = 0;  
        for (j = i + 1; j < size; j++) 
            rightsum += arr[j]; 
  
        if (leftsum == rightsum) 
            return i; 
    } 
  
    return -1; 
}

int main()
{
  int a[] = {-7, 1, 5, 2, -4, 3, 0};
  int size = sizeof(a)/sizeof(a[0]);
  cout<<equilibrium(a,size);
}
