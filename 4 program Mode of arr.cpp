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
				int number = arr[5]; //Assign the array to blank int variable 
				int mode = number; //Giving number to mode to display as result 
				int count = 1;//for occurance count
				int countMode = 1; // initialize the calculation with 1

				for (int i=0; i<5; i++)
				{
      if (arr[i] == number) 
      { // count is for calculating occurrences of the current number
         ++count;
      }
      else
      { // now this is for a  different number
            if (count > countMode) 
            {
                  countMode = count; // mode is the most repeated value
                  mode = number;
            }
           count = 1; // reset count for taking new number
           number = arr[i];
  					}
					}

						cout << "The Mode of our array is : " << mode << endl;
}
};
int main()
{
	array A ;
	A.in();
	A.mode();
}
