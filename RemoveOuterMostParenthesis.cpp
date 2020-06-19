#include <iostream>
#include <stack>
using namespace std;

string removeOuterParentheses(string S) {
        int i,l,ln;
        string ss;
        l=0;
        ln=S.size();
        for(i=0;i<ln;i++)
        {
            if(S[i]=='(')
            {
                l++;
            }
            if(l>1)
                ss+=S[i];
            if(S[i]==')')
                l--;

        }
        return ss;
    }

int main(int argc, char const *argv[]) {
    string s;
    cin>>s;
    cout<<"New String is "<<removeOuterParentheses(s);
    return 0;
}
