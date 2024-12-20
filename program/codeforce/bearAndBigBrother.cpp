#include<bits/stdc++.h>
using namespace std;
int main()
{

    int bear,bob;

    cin>> bear>>bob;
    int count=0;
    while(bear<=bob)
    {
        bear=bear*3;
        bob=bob*2;
        count++;

    }
    cout<<count<<endl;

}
