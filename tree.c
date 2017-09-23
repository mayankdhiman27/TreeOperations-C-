#include<stdio.h>
#include<stdlib.h>

struct tnode{
int data;
struct tnode *left;
struct tnode *right;
};

//print nodes in inorder
void printtree(struct tnode *p){
if(p!=NULL){
printtree(p->left);
printf("%d ",p->data);
printtree(p->right);
}
}

//Function to search for a particular
int search(struct tnode *p,int data){
if(p->data==data){
return 1;
}
else{
if(data < p->data){
if(p->left!=NULL)
search(p->left,data);
}
else{
if(p->right!=NULL)
search(p->right,data);
}
}
}


//Function to insert nodes into tree
struct tnode * insert(struct tnode *p,int data){
if(p==NULL){
p=(struct tnode*)malloc(sizeof(struct tnode *));
p->data=data;
p->left=NULL;
p->right=NULL;
}
else{
if(data < p->data){
p->left=insert(p->left,data);
}
else{
p->right=insert(p->right,data);
}
return p;
}
}
void main(){
int i;
struct tnode *root;
root=insert(root,5);
insert(root,6);
insert(root,2);
insert(root,3);
insert(root,7);
printtree(root);
printf("\n");
if(search(root,10)){
printf("Found\n");
}
else{
printf("Not Found\n");
}
}
