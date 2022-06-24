#include<iostream>
using namespace std;
class Array
{
    private:
        int arr[10];
        int arr1[10];
        int n;
        int n1;
        int i;
        public:
            void in()
            {
                cout<<"Enter the size of First array: ";
                cin>>n;
                for(int i=0 ; i<n ; i++)
                {
                    cout<<"Enter the element no. "<<(i+1)<<" of the 1st array : ";
                    cin>>arr[i];
                }
                cout<<"Enter the size of Second array: ";
                cin>>n1;
                for(int i=0 ; i<n1 ; i++)
                {
                    cout<<"Enter the element no. "<<(i+1)<<" of the 2nd array : ";
                    cin>>arr1[i];
                }
            }
            void sizecmp()
            {
                if(n == n1)
                {
                    cout<<"Both arrays are same in size .";
                }
                else{
                    cout<<"Bthe arrays are not same in size .";
                }
            }
};

int main()
{
    Array A;
    A.in();
    A.sizecmp();
    return 0;
}