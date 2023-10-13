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
        int m,f,r;cin>>m>>f>>r;
        if(m==-1&&r==-1&&f==-1){
            break;
        }
        if(m==-1||f==-1){
            cout<<"F"<<"\n";
        }else if(m+f>=80){
            cout<<"A"<<"\n";
        }else if(m+f>=65){
            cout<<"B"<<"\n";
        }else if(m+f>=50){
            cout<<"C"<<"\n";
        }else if(m+f>=30){
            if(r>=50){
                cout<<"C"<<"\n";
            }else{
                cout<<"D"<<"\n";
            }
        }
        else{
            cout<<"F"<<"\n";
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(0);   
    
    solve();
}
