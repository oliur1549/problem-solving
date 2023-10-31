
/*
#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include<stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop 

using namespace std;

struct Node *createLinkedList(int arr[], int size);
int searchLinkedList(struct Node *head, int value);
void reverseLinkedList(struct Node *head);
void insertTheStart(struct Node *head, int value);
void insertTheEnd(struct Node *head, int value);
void PrintLinkedList(struct Node *head);
struct Node *Delete(struct Node *head, int data);

struct Node{
	int data;
	struct Node* next;
};



int main() {
	
	int arr[] = {5, 10, 15, 4, 6 , 9};
	struct Node *head;
	head = createLinkedList(arr, 6);
	struct Node *newHead = head;
	
	while(head != NULL){
		cout << head->data << " -> ";
		head = head->next;
	}
	cout << "NULL\n";
	
	
	//cout << searchLinkedList(head, 10);
	
	struct Node *headNew = Delete(newHead, 15);
	PrintLinkedList(headNew);
	
	//insertTheStart(newHead, 100);
	
	//insertTheEnd(newHead, 200);
	
	//reverseLinkedList(newHead);
	
	return 0;
}

struct Node *Delete(struct Node *head, int data){
	struct Node *dummyHead = (struct Node*)malloc(sizeof(struct Node));
	dummyHead->next = head;
	struct Node *temp = dummyHead;
	while(temp->next != NULL){
		if(temp->next->data == data){
			temp->next = temp->next->next;
			break;
		}
		else{
			temp = temp->next;
		}
	}
	PrintLinkedList(dummyHead->next);
	return dummyHead->next;
}

void insertTheStart(struct Node *head, int value){
	struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
	temp->data = value;
	temp->next = head;
	
	struct Node *newHead = temp;
	PrintLinkedList(newHead);
}
void insertTheEnd(struct Node *head, int value){
	struct Node *current = head;
	while(current->next != NULL){
		current = current->next;
	}
	
	struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
	temp->data = value;
	temp->next = NULL;
	
	current->next = temp;
	PrintLinkedList(head);
}

void reverseLinkedList(struct Node *head){
	struct Node *prev = NULL, *current = head, *next = NULL;
	
	while(current != NULL){
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	head = prev;
	PrintLinkedList(head);
	
}
void PrintLinkedList(struct Node *head){
	struct Node *current = head;
	while(current != NULL){
		cout << current->data << " -> ";
		current = current->next;
	}
	cout << "NULL\n";
}

int searchLinkedList(struct Node *head, int value){
	int index=0;
	while(head != NULL){
		if(head->data == value){
			return index;
		}
		index++;
		head = head->next;
	}
	return -1;
}

struct Node *createLinkedList(int arr[], int size){
	struct Node *head=NULL, *temp = NULL, *current = NULL;
	
	for(int i = 0; i < size; i++){
		
		temp = (struct Node *)malloc(sizeof(struct Node));
		temp->data=arr[i];
		temp->next=NULL;
		if(head == NULL){
			head = temp;
			current = temp;
		}else{
			current->next=temp;
			current = current->next;
		}
	}
	return head;
}

*/
