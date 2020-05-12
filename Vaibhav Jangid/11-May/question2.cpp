#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[]={9,17};
	vector<int>ar;
	int n;
	cout<<"Enter length of array : ";
	cin>>n;
	int x,i;
	for(i=0;i<n;i++)
	{
		cout<<"Enter element : ";
		cin>>x;
		ar.push_back(x);
	}
	sort(ar.begin(),ar.end());
	x = ar[0]^ar[1];
	int m;
	for(int i=2;i<ar.size();i++)
	{
		x = min(x,ar[i]^ar[i+1]);
	}
	cout<<"Minimum xor value = "<<x;
	
}
