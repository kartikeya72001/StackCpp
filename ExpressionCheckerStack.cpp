#include<iostream>
#include<stack>
#include<string>
using namespace std;
bool Pair(char start, char close)
{
    if(start=='(' && close==')')
        return true;
    if(start=='[' && close ==']')
        return true;
    if(start=='{' && close=='}')
        return true;
}
bool Balanced(string s)
{
    stack<char> S;
    for(int i=0;i<int(s.length());i++)
    {
        if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            S.push(s[i]);
        else if(s[i]==')' || s[i]=='}' || s[i]==']')
        {
            if(S.empty() || !Pair(S.top(),s[i]))
                return false;
            else
                S.pop();
        }
    }
    return S.empty()? true:false;
}
int main()
{
    string s;
    cout<<"Enter Expression"<<endl;
    cin>>s;
    if(Balanced(s))
        cout<<"Balanced"<<endl;
    else
        cout<<"Unbalanced"<<endl;
    return 0;
}
