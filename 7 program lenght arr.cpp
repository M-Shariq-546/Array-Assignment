#include<iostream>
using namespace std;
class array{
	private:
		int arr[10];
		
		public:
			void in()
			{
				cout<<"Enter the elements of the array : "<<endl;
				for(int i=0 ;i< 10; i++)
				{
					cin>>arr[i];
				}
			}
			void arrlenght()
			{
				int sizearr = sizeof(arr)/sizeof(arr[0]);
				cout<<"The Lenght of array is : "<<sizearr;
			}
};
int main()
{
	array A ;
	A.in();
	A.arrlenght();
return 0;
}