#include <bits/stdc++.h>
#define read(x) cin>>x
#define vi vector<int>
#define l(i,s,n) for (int i=int(s);i<int(n);i++)
#define pb push_back
#define f first
#define s second
#define no cout<<"NO"<<"\n"
#define yes cout<<"YES"<<"\n"
#define pii pair<int,int>
typedef long long ll;
using namespace std;

void solve(){
    int n;read(n);
    vi v(n);
    int MIN=2000000,MAX=-2000000;
    ll sum=0;
    for(int i=0;i<n;i++){
        read(v[i]);
        MIN=min(MIN,v[i]);
        MAX=max(MAX,v[i]);
        sum+=v[i];
    }
    cout<<MIN<<" "<<MAX<<" "<<sum<<"\n";

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(0);   
    
    solve();
}
