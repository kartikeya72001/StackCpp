#include<iostream>
using namespace std;
int arr[100];
int top= -1;
void Push(int data)
{
    if(top==99)
    {
        cout<<"Stack OverFlow\n";
        return;
    }
    arr[++top]=data;
}
void Pop()
{
    if(top==-1) return;
    top--;
}
void Top()
{
    cout<<arr[top]<<endl;
}
void Empty()
{
    if(top==-1)
    {
        cout<<"Stack Empty";
    }
    else
        cout<<"Not Empty"<<endl;
    return;
}
void Print()
{
    for(int i=0;i<=top;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    Push(5);
    Push(6);
    Push(4);
    Print();
    Top();
    Push(9);
    Print();
    Pop();
    Print();
    Empty();
    Push(7);
    Print();
    return 0;
}
