#include<iostream>
#include<strings.h>
using namespace std;
class Array
{
	private:
		int arr[5];
		public:
			void in()
			{
				 for(int i=0 ; i<5; i++)
				{
					cout<<"Enter the element NO. "<<(i + 1) <<" : ";
					cin>>arr[i];
				}
			}
			void copy(int narr[5])
			{
				narr[5] = arr[5];
				cout<<"The Original array is : ";
				for(int i = 0 ; i<5 ; i++)
				{
					cout<<narr[i]<<"\t";
				}
				
				
			}
			void out()
			{
				cout<<"The Output is :"<<endl;
				cout<<endl;
				for(int i = (5-1); i>=0 ; i--)
				cout<<arr[i]<<"\t";
				}
};
int main()
{
	Array A;
	A.in();
	A.out();
	return 0;
}