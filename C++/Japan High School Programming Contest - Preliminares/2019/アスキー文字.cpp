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
    char ans=char(n);
    if(isupper(ans)){
        cout<<1<<"\n";
    }
    if(islower(ans)){
        cout<<2<<"\n";
    }
    if(!isupper(ans)&&!islower(ans)){
        cout<<0<<"\n";
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(0);   
    
    solve();
}
