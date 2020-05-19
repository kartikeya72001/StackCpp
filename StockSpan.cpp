#include<iostream>
#include<vector>
#include<stack>
using namespace std;
void StockSpan(vector<int> arr, int n)
{
	stack<int> s;
	int counter=0;
	vector<int> ans(n,1);
	//s.push(arr[0]);
	for(int i=0;i<n;i++)
	{
		while(!(s.empty()) and arr[s.top()]<=arr[i])
		{
			int idx = s.top();
			s.pop();
			ans[i]+=ans[idx];
		}
		s.push(i);
	}
	for(int i=0;i<n;i++)
	{
		cout<<ans[i]<<" ";
	}
	cout<<"END";
	return;
}
int main()
{
	int n;
	cin>>n;
	vector<int> arr(n);
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	StockSpan(arr,n);
	return 0;
}
