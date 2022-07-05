//Program Taking value randomly and then Insert the value at start
#include<iostream>
using namespace std;
void insertAtPos(int A[] , int s , int pos ,int val)
{	
	if(A[pos/2] == 0)
	{
		A[pos/2] = val;
	for(int i=0 ; i<s; i++)
	{
		cout<<A[i]<<endl;
	}
	}
}
int main()
{
	int a[100];
	const int size = 30;
	for(int i=0 ;i<size ; i++)
	{
		a[i] = 0;
	}
	for(int i=0 ; i<size ; i++)
	{
		a[5]  = 5;
		a[10] = 6;
		a[16] = 7;
		a[20] = 8;
		a[25] = 9;
		a[29] = 10;
	}
	insertAtPos(a , size , 7 , 546);
	return 0;
}
