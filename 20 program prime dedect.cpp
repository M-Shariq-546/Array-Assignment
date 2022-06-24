#include<iostream>
using namespace std;
class Array{
    private:
        int arr[10];
        int n;
        int prime = 0;
        int others = 0;
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
            void primeDedect()
            {
                for(int i=0 ; i<n ; i++)
                {
                    if(arr[i] % 2 == 1)
                    {
                        prime++;
                    }
                    else{
                        others++;
                    }
                }
                cout<<"The Total number of other Numbers are : "<<others<<"\n";
                cout<<"The Total number of Prime Numbers are : "<<prime<<"\n";
            }
                
            
};
int main()
{
    Array A;
    A.in();
    A.primeDedect();
    return 0;
}