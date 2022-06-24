#include<iostream>
using namespace std;
class array{
	private:
		int arr[10];
		int size;
		int position;
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
					cout<<"No. "<<(i+1)<<" ";
					cin>>arr[i];
				}
			}
			void insertArr()
			{
				cout<<"Enter Position No. (1 - 9): ";
				cin>>position;
				if(position > 10)
				{
					cout<<"Out of range . "<<endl;
					cout<<"Please insert from 1 - 9"<<endl;
				}
				else{
				cout<<"Enter the Number to insert in array : ";
				cin>>num;
				--position; //To provide the position user wants 
				for(int i = size ; i>= position ; i--)
				{
					arr[i+1] = arr[i];
				}
				arr[position] = num; // position will be the index and num will be placed at that place 
				cout<<"The new array after insertion is : ";
				for(int i=0 ; i<(size + 1); i++) // the size of array will be incremented by 1 automatically
				{
					cout<<arr[i]<<"\t";
				}
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
