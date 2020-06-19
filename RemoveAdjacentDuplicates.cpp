#include <iostream>
#include <bits/stdc++.h>
#include <stack>
using namespace std;

string removeDuplicates(string S) {
        stack<char> s;
        s.push(S[0]);
        for(int i=1;i<S.length();i++)
        {
            if(s.empty() || s.top()!=S[i])
            {
                s.push(S[i]);
            }
            else if(!s.empty() && s.top()==S[i])
            {
                s.pop();
            }
        }
        string str;
        while(!s.empty())
        {
            str += s.top();
            s.pop();
        }
        reverse(str.begin(), str.end());
        return str;
    }

int main(int argc, char const *argv[]) {
    string s = "abbaca";
    //cin>>s;

    cout<<removeDuplicates(s);
    return 0;
}
