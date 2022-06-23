#include<iostream>
using namespace std;
class array{
	private:
		int arr[20];
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
			void midValue()
			{
				cout<<"The middle element of the array is : "<<arr[(n)/2];
			}
};
int main()
{
	array A ;
	A.in();
	A.midValue();
	return 0;
}