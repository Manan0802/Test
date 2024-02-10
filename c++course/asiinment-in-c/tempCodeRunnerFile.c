#include<stdio.h>
 
#include<stdlib.h>
 #include<string.h>
  struct treenode{
     struct treenode* right;
      struct treenode* left; 
      char val;
};
struct treenode* insert(struct treenode* root,char data){ 
    if (root == NULL)
{
struct treenode* temp = (struct treenode*)malloc(sizeof(struct treenode)); 
temp->val = data;
return temp;
}
if (root->val > data)
{
root->left = insert(root->left,data);
}
else if (root->val < data)
{ 
    root->right = insert(root->right,data);
}
return root;
}
void preorder(struct treenode* root){ if (root == NULL)
{ 
    return;
}
printf("%c",root->val);
 preorder(root->left);

preorder(root->right);
}
 
void postorder(struct treenode* root){ 
    if (root == NULL)
{ 
    return;
}
postorder(root->left);
postorder(root->right);
printf("%c",root->val);
}
int main(){
     struct treenode* root = (struct treenode*)
     malloc(sizeof (struct treenode));
      printf("This program can perform the following functions\n");

 printf("1) Generate the pre fix expression from an infix expression\n")
;
 printf("2) Generate the post fix expression from an infix expression\n");

printf("enter the desired expression\n"); char str[100];
scanf("%s",str); int a = -1;
for(int i = 0;i < strlen(str);i++){ if (str[i] == '+'
|| str[i] == '-' || str[i] == '*' ||
str[i] == '/' || str[i] == '^')
{ root->val = str[i]; a
= i;
 break;
}
}
if (a == -1)
{
     root->val = str[0];
}
 
for(int i = 0;i < strlen(str);i++){ 
    if (i == a)
{
continue;
}
insert(root,str[i]);
}
printf("pre fix expression :- "); 
preorder(root);
printf("\n");
 printf("post fix expression:- ");
  postorder(root);
}
