#include <bits/stdc++.h>
#define FAST ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define F frist
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for(int i=a;i<b;i++)
#define ll long long
int MOD =1000000007;
//int niz[200005];
using namespace std;

bool comp(string a,string b){
	//poredjenje stringa po velicini primarno a leksikografski sekundarno
	if(a.size()==b.size())return a<b;
	else return (a.size()<b.size());
}

void solve(){

}

int main(){
	FAST;
	ll t;cin>>t;
	while(t--)solve();
	return 0;
}


