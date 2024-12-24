#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long n;
    cin>>n;
    long long original=n;
    double sum=0;
  while(n--){
	int p;
	cin>>p;
	sum+=p;
  }
  double average=sum/original;
  cout<<fixed<<setprecision(6)<<average<<endl;

}

