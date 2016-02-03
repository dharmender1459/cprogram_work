#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
void main()
{
        int arr[30],top,choice,n,i,quetop=0,count=0;
        while(1)
        {
                printf("\n 1. create an array.");
                printf("\n 2. print the array elements.");
                printf("\n 3. insert an element into stack.");
                printf("\n 4. delete form stack.");
                printf("\n 5. exit");
      		printf("\n 6. convert stack into quee.");
                printf("\n 7. delete from que");
                printf("\n Enter the choice=");
                scanf("%d",&choice);
                switch(choice)
                {
                        case 1:
                                        printf("Enter the value of n=");
                                        scanf("%d",&n);
                                        for(i=0;i<n;i++)
                                        {
                                                scanf("%d",&arr[i]);
                                                top=i;
                                        }
                                        break;
                        case 2:
                                printf("elements are:");
                                if(top==-1)
                                printf("array underflow");
                                else
                                {
                                        for(i=0;i<top+1;i++)
                                printf("%d\t",arr[i]);
                                }
                                  break;
                        case 5:
                                        exit(0);
                        case 3:
                                //for(i=0;i<1;i++)
                                //{
                                        scanf("%d",&arr[top+1]);
                                        top=top+1;
                                //}
                                break;
                                     
                         case 4:
                                //free(top);
                                top=top-1;
                                break;
			case 6:
				//quetop=0;
				for(quetop;quetop<=top;quetop++)
				{
 					printf("%d\t",arr[quetop]);
				}
 				break;
			case 7:
				count++;
				quetop=count;
				break;
                }

        }
}

