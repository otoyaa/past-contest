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

    while(1){
        int h,w;cin>>h>>w;
        if(h==0&&w==0){
            break;
        }
        for(int i=0;i<h;i++){
            for(int j=0;j<w;j++){
                if(i==0||j==0||i+1==h||j+1==w){
                    cout<<"#";
                }else{
                    cout<<".";
                }
            }
        cout<<"\n";
        }
        cout<<"\n";
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(0);   
    
    solve();
}
