#include <bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode *lptr, *rptr;
};

ListNode* create(int val){
    ListNode* node = new ListNode();
    node->val = val;
    node->lptr = NULL;
    node->rptr = NULL;
    return node;
}

void insertAtBeginning(ListNode* &root, ListNode* &tail){
    int val;
    cout << "Enter the value to be inserted: ";
    cin >> val;

    if(root == NULL){
        root = create(val);
        tail = root;
        return;
    }

    ListNode* temp = create(val);
    root->lptr = temp;
    temp->rptr = root;
    root = temp;
}

void insertAtEnd(ListNode* &root, ListNode* &tail){
    int val;
    cout << "Enter the value to be inserted: ";
    cin >> val;

    if(root == NULL){
        root = create(val);
        tail = root;
        return;
    }
    if(tail == NULL){
        tail = create(val);
        root->rptr = tail;
        tail->lptr = root;
        return;
    }
    ListNode* temp = create(val);
    tail->rptr = temp;
    temp->lptr = tail;
    tail = temp;
}

void insertAtPosition(ListNode* &root){
    int val, pos;
    cout << "Enter the value to be inserted: ";
    cin >> val;
    cout << "Enter the position: ";
    cin >> pos;

    ListNode* trav = root;
    ListNode* temp = create(val);

    for(int i=1; i<pos; i++){
        trav = trav->rptr;
    }

    temp->lptr = trav->lptr;
    temp->rptr = trav;
    trav->lptr->rptr = temp;
    trav->lptr = temp;
}   

void deleteAtBeginning(ListNode* &root, ListNode* &tail){
    if(root == NULL) return;
    if(root->rptr == NULL){
        delete(root);
        root = NULL;
        tail = NULL;
        return;
    }
    ListNode* temp = root;
    root = root->rptr;
    root->lptr = NULL;
    delete(temp);
}

void deleteAtEnd(ListNode* &root, ListNode* &tail){
    if(tail == NULL) return;
    if(tail->lptr == NULL){
        delete(tail);
        root = NULL;
        tail = NULL;
        return;
    }
    ListNode* temp = tail;
    tail = tail->lptr;
    tail->rptr = NULL;
    delete(temp);
}

void deleteAtPosition(ListNode* &root, ListNode* &tail){
    int pos;
    cout << "Enter the position: ";
    cin >> pos;

    if(root == NULL) return;

    if(root->rptr == NULL){
        delete(root);
        root = NULL;
        tail = NULL;
        return;
    }

    if(pos == 1){
        deleteAtBeginning(root, tail);
        return;
    }

    ListNode* trav = root;
    for(int i=1; i<pos && trav!=NULL; i++){
        trav = trav->rptr;
    }

    if(trav == NULL) {
        cout << "Invalid position!" << endl;
        return;
    }

    if(trav == tail){
        deleteAtEnd(root, tail);
        return;
    }

    trav->lptr->rptr = trav->rptr;
    trav->rptr->lptr = trav->lptr;

    delete(trav);
}

void display(ListNode* &root){
    ListNode* trav = root;
    while(trav != NULL){
        cout << trav->val << " ";
        trav = trav->rptr;
    }
    cout << endl;
}

int main(){
    int choice;
    ListNode* root = NULL;
    ListNode* tail = NULL;

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
                insertAtBeginning(root, tail);
                break;
            case 2:
                insertAtEnd(root, tail);
                break;
            case 3:
                insertAtPosition(root);
                break;
            case 4:
                deleteAtBeginning(root, tail);
                break;
            case 5:
                deleteAtEnd(root, tail);
                break;
            case 6:
                deleteAtPosition(root, tail);
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