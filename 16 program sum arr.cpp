#include<iostream>
#include<time.h>
using namespace std;
class array{
	private:
		int arr[10];
		int i;
		int Total = 0;
		int n;
		public:
			void in()
			{
				cout<<"Enter the size of the array : ";
				cin>>n;
				cout<<"Enter the elements of the array : "<<endl;
				for(int i=0 ;i<n; i++)
				{
					cout<<"No. "<<(i+1)<<" : ";
					cin>>arr[i];
				}
			}
			void sum()
			{
				for(i = 0 ; i<n ; i++)
				{
				Total = Total + arr[i];	
				}
				cout<<"The sum of the array is : "<<Total;
				
			}				
};
int main()
{
	array A ;
	A.in();
	A.sum();
	return 0;
}
