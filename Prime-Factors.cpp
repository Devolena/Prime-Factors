#include<bits/stdc++.h>
#define ll long long
#define pn(x) cout<<x<<endl;
#define ps(x) cout<<x<<" ";
#define n() cout<<endl;
#define inp(x) cin>>x;
#define pa(a,n) for(ll i=0;i<n;i++)cout<<a[i]<<" ";
#define ll long long
using namespace std;

void factor(ll n){
	while(n%2==0){
		cout<<"2 ";
		n /= 2;
	}
	while(n%3==0){
		cout<<"3 ";
		n /= 3;
	}
	for(ll i=6;i<sqrt(n);i += 6){
		
		while(n % ( i - 1 ) == 0 ){
			cout<<i-1<<" ";
			n /= ( i - 1 );
		}
		while(n % ( i + 1 ) == 0 ){
			cout<<i+1<<" ";
			n /= ( i + 1 );
		}
	}
	if(n > 1){
		cout<<n<<endl;
	}
	return;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll t;
	while(t--){
		ll n;
		inp(n);
		factor(n);
	}
	return 0;
}
