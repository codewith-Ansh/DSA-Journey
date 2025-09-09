#include <bits/stdc++.h>
using namespace std;
#define SIZE 5

int arr[SIZE];
int front = -1;
int rear = -1;

void enqueue(int value){
    if(front == -1 && rear == -1){
        front = rear = 0;
        arr[rear] = value;
        return;
    }
    if(rear == SIZE - 1){
        cout << "Queue Overflow!" << endl;
        return;
    }

    arr[++rear] = value;
}

void dequeue(){
    if(front == -1 || front > rear){
        cout << "Queue Underflow!" << endl;
        return;
    }
    if(front == rear){
        front = rear = -1;
        return;
    }
    front++;
}

void display(){
    if(front == -1 || front > rear){
        cout << "Queue Underflow!" << endl;
        return;
    }
    for(int i = front; i <= rear; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int choice, value;

    while(true){
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Display" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice){
            case 1:
                cout << "Enter the value to be enqueued: ";
                cin >> value;
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                cout << "Invalid choice!" << endl;
        }
    }
}