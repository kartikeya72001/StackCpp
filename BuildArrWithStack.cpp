#include <iostream>
#include <stack>
#include <vector>
using namespace std;

vector<string> buildArray(vector<int>& t, int n) {
    int j=0; vector<string>v;
    for(int i=1;i<=n;i++){
        if(t[j]==i)
        {
            v.push_back("Push");
            j++;
            if(j==t.size())
            break;
        }
        else{
            v.push_back("Push");
            v.push_back("Pop");
        }
    }
    return v;
}

int main(int argc, char const *argv[]) {
    int n = 3;
    vector<int> target = {1,3};
    vector<string> ans = buildArray(target,n);
    for(auto word:ans)
    {
        cout<<word<<" ";
    }
    return 0;
}
/*
Given an array target and an integer n. In each iteration, you will read a number from  list = {1,2,3..., n}.

Build the target array using the following operations:

Push: Read a new element from the beginning list, and push it in the array.
Pop: delete the last element of the array.
If the target array is already built, stop reading more elements.
You are guaranteed that the target array is strictly increasing, only containing numbers between 1 to n inclusive.

Return the operations to build the target array.

You are guaranteed that the answer is unique.



Example 1:

Input: target = [1,3], n = 3
Output: ["Push","Push","Pop","Push"]
Explanation:
Read number 1 and automatically push in the array -> [1]
Read number 2 and automatically push in the array then Pop it -> [1]
Read number 3 and automatically push in the array -> [1,3]
*/
