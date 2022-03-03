// A- Elephant

#include <iostream>
 
using namespace std;
 
int main()
{
    int x;
    cin>>x;
    int var=x/5;
    if(x%5>0){
        var++;
    }
    cout<<var<<endl;
    
 
    return 0;
}