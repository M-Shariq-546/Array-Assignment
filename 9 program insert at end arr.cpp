//Program Taking value randomly and then Insert the value at start
#include<iostream>
using namespace std;
void insertAtEnd(int A[] , int s ,int val)
{	
	if(A[s] == 0)
	{
		A[s-1] = val;
		for(int i=0 ; i<s; i++)
		{
			cout<<A[i]<<endl;
		}	
	}
}
int main()
{
	int a[100];
	const int size = 5;
	for(int i=0 ;i<size ; i++)
	{
		a[i] = 0;
	}
	for(int i=0 ; i<size ; i++)
	{
		a[0] = 5;
		a[2] = 7;
		a[4] = 7;
		a[5] = 9;
		a[size - 1] = 8;
	}
	insertAtEnd(a , size , 546);
	return 0;
}
