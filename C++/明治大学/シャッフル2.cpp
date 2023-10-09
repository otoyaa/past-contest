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
    int a,b,c;cin>>a>>b>>c;
    int& aa=a,bb=b,cc=c; // criando uma referencia para cada valor a,b,c
    // usar o swap com os valores a,b por exemplo, não funciona corretamente
    for(int i=0;i<4;i++){
        int n;read(n);
        if(n==1){
            swap(aa,bb);
        }else if(n==2){
            swap(bb,cc);
        }else if(n==3){
            swap(cc,aa);
        }
    }
    cout<<aa<<" "<<bb<<" "<<cc<<"\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(0);   
    
    solve();
}
