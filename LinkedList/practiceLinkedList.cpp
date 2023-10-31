#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include<stdlib.h>

using namespace std;

struct Node * create(int arr[], int n);
void PrintLinkedList(struct Node *head);

int Main(){
	int arr[] = {1,3,5,7,10};
	
	int n = sizeof(arr) / sizeof(arr[0]);
	
	struct Node *head;
	
	head = create(arr, n);
	struct Node *newHead = head;
	
	while(newHead != NULL){
		cout << newHead->data << " -> ";
		current = newHead->next;
	}
	cout << "NULL\n";
	
	return 0;
	
}
void PrintLinkedList(struct Node *head){
	struct Node *current = head;
	while(current != NULL){
		cout << current->data << " -> ";
		current = current->next;
	}
	cout << "NULL\n";
}
struct Node * create(int arr[], int n){
	struct Node *head = NULL, *current = NULL, *temp = NULL;
	
	for(int i = 0; i < n; i++){
		
		temp = (struct Node *)malloc(sizeof(struct Node));
		temp->data = arr[i];
		temp->next = NULL;
		if(head == NULL){
			head = temp;
			current = temp;
		}
		else{
			current->next = temp;
			current = current->next;
		}
	}
	return head;
}
