#include<iostream>
using namespace std;
class array{
	private:
		int arr[10];
		
		public:
			void in()
			{
				cout<<"Enter the elements of the array : "<<endl;
				for(int i=0 ;i< 10; i++)
				{
					cin>>arr[i];
				}
			}
			void arrlenght()
			{
				int sizearr = sizeof(arr)/sizeof(arr[0]);
				/*sizeof(arr) = it indicate the whole size of the string 
				such that integer takes 4 bytes so the total indices will be multiplied with 4 so 
				the total size of array will be obtained .
				And the sizeof(arr[0]) indicate the size of array with respect to only one index such that 4 is multiplied with 1
				So the divisin of both sizes will gives us the lenght of the array
				*/
				cout<<"The Lenght of array is : "<<sizearr;
			}
};
int main()
{
	array A ;
	A.in();
	A.arrlenght();
return 0;
}
