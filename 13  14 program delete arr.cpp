#include<iostream>
using namespace std;
class array{
	private:
		int arr[10];
		int n;
		int pos;
		public:
			void in()
			{
				cout<<"Enter the Size of the array : ";
				cin>>n;
				cout<<"Enter the elements of the array : "<<endl;
				for(int i=0 ;i< n; i++)
				{
					cout<<"No . "<<(i+1)<<" : ";
					cin>>arr[i];
				}
			}
			void delArr()
				{
					cout<<"Enter the postion to delete : ";
					cin>>pos;
					for(int i=pos; i<n; i++)
					{
						arr[i-1] = arr[i];
					}
					n = n - 1;
					cout<<"The array after deletion is : ";
					for(int i =0 ; i<n ; i++)
					{
						cout<<arr[i]<<endl;
					}
				}		
};
int main()
{
	array A ;
	A.in();
	A.delArr();
}
