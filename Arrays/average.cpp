#include<iostream>
using namespace std;
double average(int arr[],int n)
{
    int sum = 0;
    for(int i=0;i<=n;i++)
    {
        sum += arr[i];
    }
    return sum/double(n);
}
int main()
{
    int i,n;
    cout<<"enter the number of element ";
    cin>>n;
    cout<<"enter the elements "; 
    int arr[n];
    for(i=0;i<=n;i++)
    {
        cin>>arr[i];
    }
    cout<<average(arr,n);
}