#include<iostream>
#include<cstring>
using namespace std;
void doesExist(char a)
{
    string ans = "true";
    string nans = "false";
    if(a == 'e' | a == 'E')
        cout<<ans;
    else    
        cout<<nans;
}
int main()
{
    char s;
    cout<<"Enter the character : ";
    cin>>s;
    doesExist(s);
    return 0;
}