#include <bits/stdc++.h>
using namespace std;

// void printName(int i, int n){
//     if(i>n){
//         return;
//     }
//     printName(i+1, n);
//     cout<<i<<endl;
// }

// N to i
void printName(int i, int n){
    if(i<n){
        return;
    }
    cout<<i<<endl;
    printName(i-1, n);
} 

int main(){
    int n;
    cin>>n;

    printName(15,n);
    return 0;
}