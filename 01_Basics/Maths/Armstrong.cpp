#include <bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin >> num;

    int temp = num;
    int remainder = 0;
    int sum = 0;
    int size = 0;
    
    while(num > 0){
        size++;
        num /= 10;
    }

    num = temp;
    while(num > 0){
        remainder = num % 10;
        sum += pow(remainder, size);
        num /= 10;
    }

    if(sum == temp){
        cout << "Armstrong number" << endl;
    }
    else{
        cout << "Not an Armstrong number" << endl;
    }
    return 0;
}
