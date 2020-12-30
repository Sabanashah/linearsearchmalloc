#include<stdio.h>
#include<stdlib.h>
main()
{
	int size=5,i,n,search=0;
	int *arr=(int*)malloc(sizeof(int)*size);
	for(i=0;i<size;i++)
	{
		printf("enter the array of the elements");
		scanf("%d",&arr[i]);
	}
	printf("enter the number for searching");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		if(arr[i]==size)
		{
			search=1;
			break;
		}
	}
	if(search==0)
	printf(" not found ");
	else
	printf("%d is the present in the memory",size);
	free(arr);
	getch();
}
