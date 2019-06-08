# include <stdio.h>
# include <math.h>
int jump(int arr[],int n);
int min(int a,int b)
{
	if(a>b)
	return b;
	else 
	return a;
}
main()
{
	printf("Enter size of array: \n");
	int n;
	scanf("%d",&n);
	int arr[n];
	printf("Enter the digits of the array: \n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int min_jump[n] = {INFINITY};
	min_jump[0] = 0;
	
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(i<=j+arr[j])
			{
				min_jump[i] = min(min_jump[i],min_jump[j]+1);
			}
		}
	}
	printf("\nMinimum number of steps required are %d ",min_jump[n]);
}


