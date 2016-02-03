#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
typedef struct emp
{
	int no;
	struct emp * next;
}list;
list * head= NULL;
void main()
{
	int choice,i,n;
	while(1)
		{
			printf(" \n1: create the list");
			printf(" \n2: delete the list");
			printf(" \n3: add element in the list");
			printf("\nEnter the choice:");
			scanf("%d",&choice);
			switch(choice)
				{
				case 1:
					printf("how many node you want:");
					scanf("%d",&n);
					for(i=0;i<n;i++)
					Create();
					break;
				case 2:
					display();
					break;
				case 3:
					exit(0);
				}
		}
}
Create()
	{
		list * temp=(list*)malloc(sizeof(list));
	   	printf("enter the element:");
		scanf("%d",&temp->no);
		if(head==NULL)
			{
				temp->next=NULL;
				head=temp;
			}
		else
			{
				list *temp1=head;
				while(temp1->next!=NULL)
					{
						temp1=temp1->next;
					}
					temp->next=NULL;
					temp1->next=temp;
			}
	}
display()
	{
		list * temp1=head;
		while(temp1!=NULL)
		{
			printf("%d",temp1->no);
			temp1=temp1->next;
		}
	}
