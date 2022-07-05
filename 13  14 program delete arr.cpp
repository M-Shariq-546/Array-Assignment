//Program Taking value randomly and then Insert the value at start
#include<iostream>
using namespace std;
void DeleteAtPos(int A[] , int s , int pos)
{	
	if(A[pos] != 0)
	{
		A[pos] = 0;
	for(int i=0 ; i<s; i++)
	{
		cout<<A[i]<<endl;
	}
	cout<<"The value at index "<<pos<<" deleted successfully."<<endl;
	}
}
int main()
{
	int a[100];
	const int size = 10;
	for(int i=0 ;i<size ; i++)
	{
		a[i] = 0;
	}
	for(int i=0 ; i<size ; i++)
	{
		a[0]  = 5;
		a[1] = 6;
		a[2] = 546;
		a[3] = 7;
		a[4] = 8;
		a[5] = 9;
		a[6] = 10;
	}
	DeleteAtPos(a , size , 2);
	return 0;
}
