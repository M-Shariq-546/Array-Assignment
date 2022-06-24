#include<iostream>
using namespace std;
class Array{
    private:
        int arr[10];
        int n;
        int even = 0;
        int odd = 0;
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
            void evenDedect()
            {
                for(int i=0 ; i<n ; i++)
                {
                    if(arr[i] % 2 == 0)
                    {
                        even++;
                    }
                    else{
                        odd++;
                    }
                }
                cout<<"The Total number of Odd Numbers are : "<<odd<<"\n";
                cout<<"The Total number of Even Numbers are : "<<even<<"\n";
            }
                
            
};
int main()
{
    Array A;
    A.in();
    A.evenDedect();
    return 0;
}