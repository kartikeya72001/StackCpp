#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *top=NULL;
void Push(int x)
{
    node *temp=new node;
    temp->data=x;
    temp->next=top;
    top=temp;
}
void Pop()
{
    node *temp=top;
    if(top==NULL) return;
    top=temp->next;
    delete temp;
}
void Print()
{
    node *temp=top;
    if(temp==NULL)
        return;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    Push(5);
    Push(5);
    Push(4);
    Push(9);
    Push(8);
    Print();
    Pop();
    Print();
    return 0;
}
