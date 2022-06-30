#include<iostream>
using namespace std;
void sumdigits(int num)
{
    int m0 , m_5, m , m1 , m2 , m3 , sum = 0;
    m0 = num / 1000;//In case of three digits number this will be 0
    m_5 = num % 1000;
    m = m_5 / 100;
    m1 = num % 100;
    m2 = m1 / 10;
    m3 = m1 % 10; 
    sum = m0 + m + m2 + m3; 
    cout<<"The Sum of digits are : "<<sum<<endl;
}
int main()
{
    int n;
    cout<<"Enter the number of 3 digits : ";
    cin>>n;
    sumdigits(n);
    return 0;
}