// A - Team

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
    int n;
    cin>>n;
    int a,b,c;
    int count=0;
    while(n--){
        cin>>a>>b>>c;
        if((a==1&&b==1)||(b==1&&c==1)||(a==1&&c==1)||(a==1&&b==1&&c==1))
            count++;
        // else break;
        // else count=0;
    }
    cout<<count;


}

int main(){
    // int t;
    // cin >> t;
    // while(t--){
        solve();
    // }
    return 0;
}