// A - Petya and Strings

#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define ll long long
#define si(x) scanf("%d", &x)
#define sl(x) scanf("%lld", &x)
#define ss(x) scanf("%s", x)
#define pi(x) printf("%d\n", x)
#define pl(x) printf("%lld\n", x)
#define ps(x) printf("%s\n", x)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
#define PI 3.1415926535897932384626
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;

void solve(){
    string s1,s2;
    cin>>s1>>s2;
    for(int i=0; i<s1.length(); i++)
    {
        if(s1[i]>=65 && s1[i]<=90){
            s1[i]+=32;
        }
    }
    for(int i=0; i<s2.length(); i++)
    {
        if(s2[i]>=65 && s2[i]<=90){
            s2[i]+=32;
        }
    }
    // cout<<s1<<" "<<s2;
    if(s1>s2) cout<<"1"<<endl;
    else if(s1<s2) cout<<"-1"<<endl;
    else cout<<"0"<<endl;



}

int main(){
    // int t;
    // cin >> t;
    // while(t--){
        solve();
    // }
    return 0;
}