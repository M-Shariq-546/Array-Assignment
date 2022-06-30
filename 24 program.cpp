#include<iostream>
using namespace std;
int mphToKph(int m)
{
    float k;
    k = m * 1.6093;
    cout<<"The speed converted to kph is  : "<<k<<endl;
}
int main()
{
    int mph;
    cout<<"Enter the speed in mph : ";
    cin>>mph;
    mphToKph(mph);
    return 0;
}