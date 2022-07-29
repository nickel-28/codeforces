// B- Xenia and Ringroad

#include<bits/stdc++.h>
using namespace std;
 
#define pi 3.14159265358979323846
#define sq(a) (a)*(a)
#define REP(i,a,b) for (int i = a; i < b; i++)
#define endl "\n"
#define ll long long int
#define pb push_back
#define all(v) v.begin(),v.end()
#define mp make_pair
#define fi first
#define se second
#define fo(i,n) for(int i=0;i<n;i++)
#define fo1(i,n) for(int i=1;i<=n;i++)
// unsigned long long int ar[100000000];
// int *ar=new int[1000000000];
 
const int M = 1000000007;
int H[26];
 
// int fib(int n){
// 	if(n==0) return 0;
// 	else if(n==1) return 1;
// 	else return (fib(n-2)+fib(n-1))%M;
 
// }
 
 
void ans() {
    int n,m;
    cin>>n>>m;
    int loc = 1;
    ll ans = 0;
    for(int i=0; i<m; i++){
        int now; cin>>now;
        if(now>=loc){
            ans+=now-loc;
        }
        else{
            ans+=n-(loc-now);
        }
        loc = now;
    }
    cout<<ans<<endl;
    
    
    
 
    	
}
 
 
int main() {
    // int t;
    // cin>> t;
    // int ct=0;
 
    // while(t--){
        // google competition=====>
        // ct++;
        // cout<<"Case #"<<ct<<": ";
		ans();
 
    // }b
    return 0;
}