#include<iostream>
#include<time.h>
using namespace std;
class array{
	private:
		int arr[10];
		int i;
		int Total = 0;
		float avg;
		int n;
		public:
			void in()
			{
				cout<<"Enter the size of the array : ";
				cin>>n;
				cout<<"Enter the elements of the array : "<<endl;
				for(int i=0 ;i<n; i++)
				{
					cin>>arr[i];
				}
			}
			void Average()
			{
				for(i = 0 ; i<n ; i++)
				{
				Total = Total + arr[i];	
				}
				avg = (float)Total / n;
				cout<<"The Average of the array is : "<<avg;
				
			}				
};
int main()
{
	array A ;
	A.in();
	A.Average();
	return 0;
}