#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int digit;
    int reversedArray[5];
    int count=0;

    while(n>0){
        digit = n%10;
        reversedArray[count] = digit;
        n /= 10;
        count++;
    }
    for(int i=0; i<count; i++){
        cout<<reversedArray[i];
    }
    return 0;
}