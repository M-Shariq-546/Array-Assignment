#include<iostream>
using namespace std;
class array{
	private:
		int arr[6];
		int num;
		int i;
		public:
			void in()
			{
				cout<<"Enter the elements of the array : "<<endl;
				for(i=0 ;i< 5; i++)
				{
					cin>>arr[i];
				}
			}
			void insertArr()
			{
				cout<<"Enter the Number to insert in array : ";
				cin>>num;
				arr[0] = num;
				for(i=0 ; i<6 ; i++)
				{
					cout<<arr[i]<<"\t";
				}
			}
};
int main()
{
	array A ;
	A.in();
	A.insertArr();
	return 0;
}