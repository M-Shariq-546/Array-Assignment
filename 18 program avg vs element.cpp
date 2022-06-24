#include<iostream>
using namespace std;
class Array{
    private:
        int arr[10];
        int n;
        int Total;
        float avg;
        float c;
        public:
            void in()
            {
                cout<<"Enter the size of the array : ";
                cin>>n;
                cout<<"Enter the elements of array : ";
                for(int i=0 ; i<n ; i++)
                {
                    cin>>arr[i];
                }
            }
            void Average()
            {
                for(int i=0; i<n ; i++)
                {
                    Totatl = Total + arr[i];
                }
                avg = (float)Total / n;
                c = arr[0];
                for(int i=0 ; i<n ; i++)
                {
                    if(arr[i] < c)
                    { 
                        c = arr[i];
                    }
                }
                cout<<"The Element is less than the average is : "<<c<<endl;
            }
};
int main()
{
    Array A;
    A.in();
    A.Average();
    return 0;
}