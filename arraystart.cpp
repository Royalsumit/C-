#include<iostream>
using namespace std;
bool is_array_sorted(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++);
        if(arr[i]<arr[i+1])
        return true;
        else
        return false;
}
int main()
{
    int i;
    int n;
    int arr[n];
    for(i=0;i<n;i++);
    cin>>arr[i];
    n = sizeof(arr)/sizeof(arr[1]);
 if (is_array_sorted(arr,n) == true)
 {
    cout<<"array is sorted";

 }
 else{
    cout<<"array is not saorted";
 }
}
