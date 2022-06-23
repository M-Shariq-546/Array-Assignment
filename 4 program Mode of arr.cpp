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
			void mode()
			{
				int number = arr[5];
				int mode = number;
				int count = 1;
				int countMode = 1;

				for (int i=0; i<5; i++)
				{
      if (arr[i] == number) 
      { // count occurrences of the current number
         ++count;
      }
      else
      { // now this is a different number
            if (count > countMode) 
            {
                  countMode = count; // mode is the biggest ocurrences
                  mode = number;
            }
           count = 1; // reset count for the new number
           number = arr[i];
  					}
					}

						cout << "The Mode of the array is : " << mode << endl;
}
};
int main()
{
	array A ;
	A.in();
	A.mode();
}