#include<iostream>
using namespace std;
class array{
	private:
		int Arr[];
		int size;
		int num;
		int i;
		int mid;
		public:
			void in()
			{
				cout<<"Enter the size of the array : ";
				cin>>size;
				cout<<"Enter the elements of the array : "<<endl;
				for(i=0 ;i<size; i++)
				{
					cin>>arr[i];
				}
			}
			void insertArr()
			{
				cout<<"Enter the Number to insert in array : ";
				cin>>num;
				if(size == 1 |size == 3 |size == 5 |size == 7 |size == 9 )
				{
					mid = (size + 1) / 2;
				}
				else
				{
					mid = size / 2;
				}
				arr[mid] = num;
				for(i=0 ; i<(size+1) ; i++)
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