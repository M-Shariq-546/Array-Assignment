#include<iostream>
#include<strings.h>
using namespace std;
class Array
{
	private:
		string arr[10];
		public:
			void in()
			{
				 for(int i=0 ; i<10; i++)
				{
					cout<<"Enter the element NO. "<<(i + 1) <<" : ";
					cin>>arr[i];
				}
			}
			void out()
			{
				cout<<"The Output is :"<<endl;
				cout<<endl;
				for(int j=0 ; j<10; j++)
				{
					cout<<j<<"\t";
				}
					for(int i=0 ; i<10; i++)
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