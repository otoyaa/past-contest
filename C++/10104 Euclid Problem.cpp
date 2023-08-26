#include <bits/stdc++.h>
using namespace std;

int ext_gdc(int a, int b, int& x, int& y){
    // & significa que os valores de x e y
    // irão ser alterados ao decorrer da função
    if (b==0){x=1;y=0;return a;}
    int x1,y1;
    int d=ext_gdc(b,a%b,x1,y1);
    x=y1;
    y=x1-y1*(a/b);
    return d;
}

int main(){
    int a,b,c,d;cin>>a>>b;
    int x,y;
    int res=ext_gdc(a,b,x,y);

    cout<<x<<" "<<y<<" "<<res<<"\n";

    return 0;
}
