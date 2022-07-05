//Program Taking value randomly and then Insert the value at start
#include<iostream>
using namespace std;
void insertAtBeg(int A[] , int s ,int val)
{	
	if(A[0] != 0)
	{
		A[0] = val;
		cout<<A[0]<<endl;
	}
	for(int i=0 ; i<s; i++)
	{
		cout<<A[i]<<endl;
	}
}
int main()
{
	int a[100];
	int size;
	cout<<"Enter the size : ";
	cin>>size;
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
	}
	insertAtBeg(a , size , 546);

	return 0;
}
