#include <iostream>
#include <cstddef>
using namespace std;	
class Node
{
    public:
        int data;
        Node *next;
        Node(int d){
            data = d;
            next = NULL;
        }
};
class Solution{
    public:        
    Node *start;
    Node* insert(Node *head,int data){
        Node *newPtr;
        //kinda looking like java but can work here also
        //in order to dynamically allocate memory address
        newPtr = new Node(data);
        newPtr->data = data;
        newPtr->next = NULL;
        if(head == NULL){
            head = start = newPtr;
        }
        else{
            while(head->next != NULL){
                head = head->next;
            }
            head->next = newPtr;
        }
        head = start;
        return head;
    }

    void display(Node *head){
        Node *start=head;
        while(start){
            cout<<start->data<<" ";
            start=start->next;
        }
    }
};
int main(){
	Node* head = NULL;
  	Solution mylist;
    int T,data;
    cin >> T;
    while(T-->0){
        cin >> data;
        head=mylist.insert(head,data);
    }	
	mylist.display(head);
		
}