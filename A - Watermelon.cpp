//Watermelon

#include<iostream>
using namespace std;
 
void solve(){
    int w;
    cin>>w;
 
    if(w%2 == 0 && w!=2){
        cout << "YES" << endl;
    }
    else cout << "NO" <<endl;
}
 
int main(){
    solve();
 
    return 0;
 
}