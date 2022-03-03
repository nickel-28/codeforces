// A - Plus One on the Subset

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define PI 3.1415926535897932384626

void solve(){
    int n;
    cin>>n;
    int a[n],i,ct=0;
    for(i=0; i<n; i++){
        cin>>a[i];
    }
    // cout<<*min_element(a,a+n);
    sort(a,a+n);
    int min=a[0];
    int max=a[n-1];
    // cout<<a[0]<<"\n";
    // cout<<a[n-1]<<"\n";
    
    // while(a[i]<max){
    //     i++;
    //     a[i]+=1;
    //     ct++;
    // }
    // for(i=0; i<n; i++){
        // if(a[i]!=max){
        //     a[i]++;
        //     ct++;
        // }
        // else break;
        
    // }
    cout<<max-min<<endl;
    
    
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
