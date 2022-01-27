#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,k,r = -50010,i,j,g=0,h;
    cin>>n>>k;

    int v[n];
    for(i=0; i<n; i++){
        cin>>v[i];
        if(i>0&&i<k)g+=(v[i]-v[i-1]);
    }
    if(g>r)r=g;
    g-=(v[1]-v[0]);
    for(i=1; i<(n-k);i++,g-=(v[i]-v[i-1])){
        g+=(v[i+k-1]-v[i+k-2]);
        if(g>r)r=g;
    }
    cout << r << "\n";
}