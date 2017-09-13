// BINARY SEARCH TREE

#include<stdio.h>
#include<stdlib.h>
typedef struct bst
{
	int data;
	struct bst*right,*left;
}node;

node*root=NULL;
void create()
{
	int i,x,n;
	node*p;
	printf("NO. of nodes you want 2 enter");
	scanf("%d,&n");
	for(i=0;i<n;i++)
	{
		p=(node*)malloc(sizeof(node));
		scanf("%d",&x);
		p->data = x;
		if(root==NULL)
			root=p;
		else
			insert(p);
	}
	
};
int insert(node*p)
{
	node*q=root;
	while(q!=NULL)
	{
		if(root==NULL)
			root=p;
		else
			if(q->data > p->data)
				q=q->right;
			else
				if(q->data < p->data)
					q=q->left;
				else
					return(0);
				
	}
};
int delete(int ele);
int main()
{
	
	
	
	return 0;
}
