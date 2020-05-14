//find number of special integers

#include<bits/stdc++.h>
using namespace std;
int lcm(int a, int b) 
{ 
    int ma = max(a, b); 
    int mi = min(a, b); 
    for (int i = ma; ; i += ma) { 
        if (i % mi == 0) 
            return i; 
    } 
}

int main()
{
	int i,a,b,c,ans;
	cout<<"Enter A : ";
	cin>>a;
	cout<<"\nEnter B : ";
	cin>>b;
	cout<<"\nEnter C : ";
	cin>>c;
	ans = a/lcm(b,c);
	cout<<"Total special integer is : "<<ans<<endl;
}
