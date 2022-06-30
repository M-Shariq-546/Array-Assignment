#include<iostream>
using namespace std;
void KelToCel(float k)
{
    const float no = 273.14;
    float cel ;
    cel = k - no;
    cout<<"The Temperatur in celcius is : "<<cel<<endl;
}
int main()
{
    float kel;
    cout<<"Enter the Temperature in Kelvin : ";
    cin>>kel;
    KelToCel(kel);
    return 0;
}