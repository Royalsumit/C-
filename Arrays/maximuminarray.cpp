#include<iostream>
using namespace std;
int maximum(int arr[], int n)
{
    int count = 0;
    int max = 0;
    for(int i = 0; i<=n;i++)
    {
        if(arr[i]>=arr[i+1])
        {
            max = arr[i];
        }
        else
        {
            count++;
        }
    }
    return max;
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
    cout<<"max is "<<maximum(arr,n);
}