//GCD of number from range A to B

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,i,ans;
	cout<<"Enter A : ";
	cin>>a;
	cout<<"\nEnter B : ";
	cin>>b;
	if(a==b)
	{
		ans = a;
	}
	else
	{
		ans = 1;
	}
	cout<<"GCD of number in range from A to B : "<<ans<<endl;
}
