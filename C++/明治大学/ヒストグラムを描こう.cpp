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
    int n1,n2,n3,n4,n5;cin>>n1>>n2>>n3>>n4>>n5;
    for(int i=0;i<n1;i++){
        cout<<"*";
    }
    cout<<"\n";
    for(int j=0;j<n2;j++){
        cout<<"*";
    }
    for(int i=0;i<n3;i++){
        cout<<"*";
    }
    cout<<"\n";
    for(int i=0;i<n4;i++){
        cout<<"*";
    }
    cout<<"\n";
    for(int i=0;i<n5;i++){
        cout<<"*";
    }
    cout<<"\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(0);   
    
    solve();
}
