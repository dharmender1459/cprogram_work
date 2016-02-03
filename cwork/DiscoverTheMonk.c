#include<stdio.h>
int main()
{
	int n,q,i,query,flag=0,j;
	int arr[10];
	scanf("%d %d",&n,&q);
	for(i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
			//arr[i]=a;
		}
	for(i=0;i<q;i++)
		{
			scanf("%d",&query);
			for(j=0;j<n;j++)
				{
					if(arr[j]==query)
						{
							flag++;
							break;
						}
				}
					if(flag==1)
					{
						printf("YES\n");
						flag=0;
					}
					else
					{
						printf("NO\n");
					}
		}
}	
	
