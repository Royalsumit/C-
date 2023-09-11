/*#include<iostream>
using namespace std;
int main()
{
    int a[] = {1,2,3,4};
    int *p = a;
    cout << p << " " << *p << "\n";
    p++;
    cout << p << " " << *p << "\n";
    p--;
    cout << p << " " << *p << "\n";
    p += 2;
    cout << p << " " << *p << "\n";
    p -= 2;
    cout << p << " " << *p << "\n";
    auto p2 = p; 
    p += 3;
    cout << p << " " << *p << "\n";
    cout << p - p2;
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int arr[3][2] = {{10,20},{30,40},{50,60}};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<arr[i][j]<<" ";
        }
    }
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<vector<int>> vec(n,vector<int>(n,0));
    vector<vector<int>> ans(n,vector<int>(n,0));

    for(int i = 0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            int t;
            cin>>t;
            vec[i][j] = t;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i = 0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            ans[i][j] = vec[j][i];
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}
#include<iostream>
using namespace std;
int main()
{
    string str;
    cout<<"Enter string to  reverse  ";
    getline(cin,str);
    for(char i =str.length();i>=0;i--)
    {
        cout<<str[i];
    }
}
#include<iostream>
using namespace std;
int main()
{

    string str;
    cout<<"Enter string to check the palindrome  ";
    getline(cin,str);
    int start = 0;
    int end = str.length()-1;
    while(start <= end)
    {
        if(str[start] != str[end])
        {
            cout<<"No it is not a palindrome";
            return 0;
        }
        else
        {
            start++;
            end--;
        }
    }
    cout<<"Yes it is a palindrome";
    return 0;
}*/
