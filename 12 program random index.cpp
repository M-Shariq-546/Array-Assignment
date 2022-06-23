#include<iostream>
#include<time.h>
using namespace std;
class array{
	private:
		int arr[10];
		int rIndex;
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
			void randIndex()
			{
				srand(time(NULL));
				
				rIndex = rand() % n;
				
				cout<<"The Random index is : "<<arr[rIndex];
				
			}				
};
int main()
{
	array A ;
	A.in();
	A.randIndex();
	return 0;
}