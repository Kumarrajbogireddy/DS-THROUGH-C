#include<stdio.h>
int search(int*a,int n,int se,int i)
{
	if(i==n)
	return -1;
	if(a[i]==se)
	return i;
	return search(a,n,se,i+1);
	
	
}
int main()
{
	int n,i;
	printf("Enter size:\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int se;
	printf("Enter search element:\n");
	i=0;
	scanf("%d",&se);
	int res=search(a,n,se,i);
	if(res==-1)
	printf("Element not found");
	else
	printf("Found at %d index position",res);
}
