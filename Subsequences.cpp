#include <iostream>
#include <cstring>
using namespace std;

int count = 0;


void subseq(string input,string op)
{
    if(input.length()==0)
    {
        cout<<op<<" ";
        count++;
        return;
    }
    char ch=input[0];
    string inp=input.substr(1);
    subseq(inp,op);
    subseq(inp,op+ch);
    return;
}

int main(){

    string input;
    cin>>input;
    string output;
    subseq(input," ");
    cout<<endl;
    cout<<count<<endl;
    return 0;
}
