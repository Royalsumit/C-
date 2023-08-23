#include<iostream>
using namespace std;
int distinctelements(int arr[],int n)
{
    int count = 0;
    bool is_distinct = true;
    for(int i=0;i<n;i++)
    {
        is_distinct = true;
        for(int j = i-1;j>=0;j--)
        {
            if(arr[i] == arr[j])
            is_distinct =false;
            break;
    }
    if(is_distinct==true)
    count++;
}
return count;
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
    cout<<"the number of distinct elements are "<<distinctelements(arr,n);
}