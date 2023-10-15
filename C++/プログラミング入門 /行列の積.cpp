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
    int n,m,l;cin>>n>>m>>l;
    vector<vector<int>> A(n,vector<int> (m)); // matriz a n*m
    vector<vector<int>> B(m,vector<int> (l)); // matriz b m*l
    vector<vector<ll>> C(n,vector<ll> (l,0)); // matriz resposta
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){ // nada demais apenas lendo os valores de A
            cin>>A[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<l;j++){ // nada demais apenas lendo os valores de B
            cin>>B[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<l;j++){
            for(int k=0;k<m;k++){ // coluna
                C[i][j]+=A[i][k]*B[k][j];
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<l;j++){
            cout<<C[i][j]<<(j==l-1?"\n":" ");
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(0);   
    
    solve();
}
