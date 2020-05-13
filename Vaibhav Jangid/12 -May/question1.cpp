//find number of special integers

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,a,b,c,count=0;
	cout<<"Enter A : ";
	cin>>a;
	cout<<"\nEnter B : ";
	cin>>b;
	cout<<"\nEnter C : ";
	cin>>c;
	for (i=1;i<=a;i++)
	{
		if(i%b==0 && i%c==0)
		{
			count++;
		}
	}
	cout<<"Total special integer is : "<<count<<endl;
}
