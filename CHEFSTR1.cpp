#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll ans=0;
		ll n;
		cin>>n;
		ll a[n];
		for(ll i=0;i<n;i++)
		{
			cin>>a[i];
		}


		ll j=0;
		for(ll i=1;i<n;i++)
		{
			ans=ans+abs(a[i]-a[j])-1;
            
			j++;
		}

		cout<<ans<<endl;


	}
	return 0;
}
