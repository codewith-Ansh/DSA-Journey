#include <bits/stdc++.h>
using namespace std;

// parametrized way
// void sumOfn(int i, int sum){
//     if(i==0){
//         cout<<sum;
//         return;
//     }   
//     sumOfn(i-1, sum+i);
// }

// functional recursion
int sumOfn(int n){
    if(n == 0)
        return 0;
    return n + sumOfn(n-1);
}

// factorial 
int factOfn(int n){
    if(n == 1)
        return 1;
    return n * factOfn(n-1);
}
int main(){
    int i;
    int n = 0;

    cin>>i;
    int sum = sumOfn(i);
    int fact = factOfn(i);
    cout << sum << endl << fact << endl;

    return 0;
}