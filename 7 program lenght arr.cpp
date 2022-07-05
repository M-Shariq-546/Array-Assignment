//Program Taking value randomly and then Insert the value at start
#include<iostream>
using namespace std;
int count =0;
void getLenght(int A[] , int s )
{	
	for(int i=0 ; i<s; i++)
	{
		if(A[i] != 0)
		{
			count++;
		}
	}
	cout<<"The Lenght of the array is : "<<count<<endl;
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
		cin>>a[i];
	}
	getLenght(a , size);
	return 0;
}
