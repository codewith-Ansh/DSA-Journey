#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int digit;
    int revNumber = 0;
    while(n>0){
        digit = n%10;
        revNumber = (revNumber*10) + digit;
        n /= 10;
    }
    cout<<revNumber<<endl;
}