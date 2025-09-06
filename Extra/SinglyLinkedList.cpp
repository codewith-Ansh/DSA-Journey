#include <bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode *next;
};

ListNode* create(int val){
    ListNode* node = new ListNode();
    node->val = val;
    node->next = NULL;

    return node;
}

void insertAtBeginning(ListNode* &root){
    int val;
    cout << "Enter the value to be inserted: ";
    cin >> val;

    ListNode* node = create(val);
    node->next = root;
    root = node;
}

void insertAtEnd(ListNode* &root){
    int val;
    cout << "Enter the value to be inserted: ";
    cin >> val;

    ListNode* trav = root;

    while(trav->next != NULL){
        trav = trav->next;
    }

    trav->next = create(val);
}

void insertAtPosition(ListNode* &root){
    int val, pos;
    cout << "Enter the value: ";
    cin >> val;
    cout << "Enter the position: ";
    cin >> pos;

    ListNode* trav = root;
    ListNode* prev = root;

    for(int i=1; i<pos; i++){
        prev = trav;
        trav = trav->next;
    }

    ListNode* temp = create(val);
    prev->next = temp;
    temp->next = trav;
}

void deleteAtBeginning(ListNode* &root){
    ListNode* temp = root;
    root = root->next;
    delete(temp);
}

void deleteAtEnd(ListNode* &root){
    ListNode* trav = root;
    ListNode* prev = root;

    while(trav->next != NULL){
        prev = trav;
        trav = trav->next;
    }

    prev->next = NULL;
    delete(trav);
}

void deleteAtPosition(ListNode* &root){
    int pos;
    cout << "Enter the position: ";
    cin >> pos;

    ListNode* trav = root;
    ListNode* prev = root;

    for(int i=1; i<pos; i++){
        prev = trav;
        trav = trav->next;
    }
    prev->next = trav->next;
    delete(trav);
}

void display(ListNode* root){
    ListNode* trav = root;

    while(trav != NULL){
        cout << trav->val << " ";
        trav = trav->next;
    }
    cout << endl;
}
int main(){
    int choice;
    ListNode* root = NULL;

    cout << "1. Insert at the beginning" << endl;
    cout << "2. Insert at the end" << endl;
    cout << "3. Insert at a given position" << endl;
    cout << "4. Delete from the beginning" << endl;
    cout << "5. Delete from the end" << endl;
    cout << "6. Delete from a given position" << endl;
    cout << "7. Display the list" << endl;
    cout << "8. Exit" << endl;

    do{
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice){
            case 1:
                insertAtBeginning(root);
                break;
            case 2:
                insertAtEnd(root);
                break;
            case 3:
                insertAtPosition(root);
                break;
            case 4:
                deleteAtBeginning(root);
                break;
            case 5:
                deleteAtEnd(root);
                break;
            case 6:
                deleteAtPosition(root);
                break;
            case 7:
                display(root);
                break;
            case 8:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice" << endl;
        }
    }while(choice != 8);

    return 0;
}