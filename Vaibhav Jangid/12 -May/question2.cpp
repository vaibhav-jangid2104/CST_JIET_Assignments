//GCD of two numbers

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,i,gcd,len;
	cout<<"Enter A : ";
	cin>>a;
	cout<<"\nEnter B : ";
	cin>>b;
	if(a<=b)
	{
		len = a;
	}
	else
	{
		len=b;
	}
	if (a==1 && b==1)
	{
		gcd=1;
	}
	else
	{
		for(i=len;i>=1;i--)
		{
				if(a%i==0 && b%i==0)
				{
					gcd=i;
					break;
				}
		}
	}
	cout<<"GCD of given number is : "<<gcd<<endl;
}
