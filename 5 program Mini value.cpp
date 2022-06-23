#include<iostream>
using namespace std;
class array{
	private:
		int arr[10];
		int min;
		public:
			void in()
			{
				cout<<"Enter the elements of the array : "<<endl;
				for(int i=0 ;i< 10; i++)
				{
					cin>>arr[i];
				}
			}
			void mini()
			{
				min = arr[0];
				for(int i =0; i<10 ; i++)
				{
						if(arr[i] < min)
						{
							min = arr[i];
						}
				}
				cout<<"The Smallest value of the array is : "<<min;
			}

};
int main()
{
	array A ;
	A.in();
	A.mini();
}