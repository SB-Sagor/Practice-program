#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,k;
    cin>>n>>k;
    while(k--){
        if(n%10!=0){
            n--;
        }else{
            n/=10;
        }
    }
    cout<<n<<endl;
    return 0;
}