#include <bits/stdc++.h>
using namespace std;
#define SIZE 5

int arr[SIZE];
int top = -1;

void push(int x){
    if(top == SIZE - 1){
        cout << "Stack Overflow" << endl;
        return;
    }
    arr[++top] = x;
}

void pop(){
    if(top == -1){
        cout << "Stack Underflow" << endl;
        return;
    }
    arr[top--] = NULL;
}

void peek(){
    if(top == -1){
        cout << "Stack Underflow" << endl;
        return;
    }
    cout << arr[top] << endl;
}

bool isEmpty(){
    if(top == -1){
        return true;
    }
    return false;
}

void display(){
    if(top == -1){
        cout << "Stack Underflow" << endl;
        return;
    }
    for(int i = top; i >= 0; i--){
        cout << arr[i] << " ";
    }

    cout << endl;
}
int main(){
    int choice;

    do{
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Peek" << endl;
        cout << "4. isEmpty" << endl;
        cout << "5. Display" << endl;
        cout << "6. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice){
            case 1:
                int x;
                cout << "Enter the element to be pushed: ";
                cin >> x;
                push(x);
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                if(!isEmpty()){
                    cout << "Stack is not empty" << endl;
                }
                else{
                    cout << "Stack is empty" << endl;
                }
                break;
            case 5:
                display();
                break;
            case 6:
                cout << "Exiting..." << endl;
                return 0;
            default:
                cout << "Invalid choice" << endl;
        }
    }while(choice != 6);
    return 0;
}