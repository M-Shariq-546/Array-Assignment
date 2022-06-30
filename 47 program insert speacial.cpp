#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    for(int i=0 ; i<5 ; i++)
    {
        cout<<"The element "<<(i+1)<<" of the array is : ";
        cin>>arr[i];
    }
    int a ;
    int pos;
    cout<<"Enter the Number to replace : ";
    cin>>a;
    cout<<"Enter the position where to insert : ";
    cin>>pos;
    cout<<"The array Before insertion. "<<endl;
    for(int i=0 ; i<5 ; i++)
    {
        cout<<arr[i];
    }
    arr[pos-1] = a;
    cout<<"The array After insertion. "<<endl;
    for(int i=0 ; i<5 ; i++)
    {
        cout<<arr[i];
    }
    return 0;
}