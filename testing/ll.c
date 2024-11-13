#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node* next;
};

struct Node* head = NULL;

void push(int val){
	struct Node* nn = malloc(sizeof(struct Node));
	nn->data=val;
	nn->next=head;
	head=nn;
}

void pop(){
	struct Node* temp;
	temp=head;
	head=head->next;
	printf("poped:%d",temp->data);
	free(temp);
}

void main(){
	push(25);
	push(30);
	pop();
	pop();
}
