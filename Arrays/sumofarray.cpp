#include<iostream>
using namespace std;
int add(int arr[],int n)
{
    int ans = 0;
    for(int i = 0;i<=n;i++)
    {
        ans +=arr[i];
    }
    return ans;
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
    cout<<add(arr,n);
}