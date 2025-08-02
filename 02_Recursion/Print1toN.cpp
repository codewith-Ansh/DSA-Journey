#include <bits/stdc++.h>
using namespace std;

void printName(int i, int n){
    if(i>n){
        return;
    }
    cout<<i<<endl;
    printName(++i, n);
} 

int main(){
    int n;
    cin>>n;

    printName(1,n);
    return 0;
}