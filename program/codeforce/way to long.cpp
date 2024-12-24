#include<iostream>
using namespace std;
int main(){
    int sum=0,i;
    int n;
    cin>>n;
    string arr[n];  
for(i=0;i<n;i++){
    cin>>arr[i];
}
for(i=0;i<n;i++){
     if(arr[i].length()<=10){
    cout<<arr[i]<<endl;
}
else {
    cout<<arr[i][0];
   cout<<arr[i].length()-2;
   cout<<arr[i][arr[i].length()-1]<<endl;
}
}
 
return 0;
}