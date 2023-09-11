#include<iostream>
using namespace std;
void binary_decimal (string str)
{
    int result = 0;
    int base = 1;
    int size = str.length();
    for(int i=size-1;i>=0;i--)
    {
        result= result +((int)(str[i]-'0')*base);
        base = base*2;
    }
    cout<<result;

}
int main()
{
    string str;
    cin>>str;
    binary_decimal(str);
}