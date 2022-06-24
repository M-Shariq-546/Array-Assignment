#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//Global Function having boolean characteristics                                                                                                                                                        
bool sequcmp(int arr[] , int arr1[] ,int n ,int n1)
{
    if(n != n1)
    {
        return false;
    }
   sort(arr , arr+n);
   sort(arr1 , arr1+n1);
   for(int i =0; i<n; i++)
   {
       if(arr[i] != arr1[i])
       {
           return false;
       }
       else{
           return true;
       }
   } 
}
int main()
{
         int n , n1 ;      //variables for the sizes of both array
         int arr[10];
         int arr1[10];
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
        //Passing the values.
    if(sequcmp(arr ,arr1 ,n , n1))
    {
        cout<<"Both are equal.";
    }
    else{
        cout<<"Both are not equal.";
    }
    return 0;
}