
#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node *next;
 };
int main(){
struct Node *a=NULL;
struct Node *b=NULL;
struct Node *c=NULL;
a=(struct N0de*)malloc(sizeof(struct Node));
b=(struct N0de*)malloc(sizeof(struct Node));
c=(struct N0de*)malloc(sizeof(struct Node));
a->data=10;
b->data=20;
c->data=30;
a->next=b;
b->next=c;
c->next=NULL;
while(a!=NULL){
        printf("%d->",a->data);
        a=a->next;
}
return 0;

}
