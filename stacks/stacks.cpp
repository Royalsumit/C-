#include<iostream>
using namespace std;
class stack
{
  public:
  int top;
  int *arr;
  int size;
  stack(int size)
  {
    this -> size = size;
    arr = new int[size];
    top = -1;
  }
  void push(int element)
  {
    if (size - top > 1)
    {
      top++;
      arr[top] = element;
    }
  }
  void pop()
  {
    if(top>=0)
    {
      top--;
    }
    else
    {
      cout<<"stack Underflow";
    }
  }
  int peek()
  {
    if(top>=0 && top<size)
    {
      return arr[top];
    }
    else
    {
      return -1;
    }
  }
  bool isempty()
  {
      if(top == -1)
      {
        return 1;
      }
      else
      {
        return 0;
      }
  }
};
int main()
{
  stack st(5);
  st.push(4);
  st.push(5);
  st.push(6);
  st.push(7);
  st.push(9);
  st.pop();
  cout<<st.peek()<<endl;
  cout<<st.isempty();
  return 0;
}