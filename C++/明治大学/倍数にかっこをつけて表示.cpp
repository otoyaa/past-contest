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

int mdc(int a,int b){
    return a/gcd(a,b)*b;
}

void solve(){
    int a,b;cin>>a>>b;
    int ans=mdc(a,b);
    for(int i=1;i<=a*b;i++){
        if(i%a==0){
            cout<<"("<<i<<")"<<" ";
        }else if(i%b==0){
            cout<<"{"<<i<<"}"<<" ";
        }else if(i==ans){ // to do
            cout<<"["<<i<<"]"<<" ";
        }else if(i%a!=0&&i%b!=0){
            cout<<i<<" ";
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(0);   
    
    solve();
}
