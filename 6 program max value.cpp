#include<iostream>
using namespace std;
class array{
	private:
		int arr[10];
		int max;
		public:
			void in()
			{
				cout<<"Enter the elements of the array : "<<endl;
				for(int i=0 ;i< 10; i++)
				{
					cin>>arr[i];
				}
			}
			void maxi()
			{
				max = arr[0];
				for(int i=0 ; i<10 ; i++)
				{
					if(arr[i] > max)
					{
						max = arr[i];
					}
				}
				cout<<"The largest value of array is : "<<max;
			}
};
int main()
{
	array A ;
	A.in();
	A.maxi();
}