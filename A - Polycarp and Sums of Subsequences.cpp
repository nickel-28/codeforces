// A - Polycarp and Sums of Subsequences

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define PI 3.1415926535897932384626

void solve(){
    int a[7];
    for(int i=0; i<7; i++){
        cin>>a[i];
    }
    cout<<a[0]<<" "<<a[1]<<" "<<a[6]-a[0]-a[1]<<"\n";
    
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int t;
	cin >> t;
	while(t--){
	    solve();
	}
	return 0;
}
