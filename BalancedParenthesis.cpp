// You are given a string of brackets i.e. '{', '}' , '(' , ')', '[' , ']' . You have to check whether the sequence of parenthesis is balanced or not.
// For example, "(())", "(())()" are balanced and "())(", "(()))" are not.
//
// Input Format
// A string of '(' , ')' , '{' , '}' and '[' , ']' .
//
// Constraints
// 1<=|S|<=10^5
//
// Output Format
// Print "Yes" if the brackets are balanced and "No" if not balanced.
//
// Sample Input
// (())
// Sample Output
// Yes
// Explanation
// (()) is a balanced string.
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
    //cout<<"Enter Expression"<<endl;
    cin>>s;
    if(Balanced(s))
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}
