/* Q. Given an array of integers where each element represents the max number of steps that can be made forward 
      from that element.Write a function to return the minimum number of jumps to reach the end of the array
      (starting from the first element).If an element is 0, then cannot move through that element. */

# include <stdio.h>
int min(int a,int b)
{
	if(a>b)
	return b;
	else
	return a;
}
main()
{
	int n,count=0,i=0;
	printf("Enter the size of the array\n");
	scan("%d",&n);
	int arr[n];
	printf("Enter the digits of the array\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	while(i<n)
	{   
		count+=arr[i];
		while(count!=n-1)
		{			
			if(arr[count]==0)
		    {
			    printf("Not Possible\n");
                break;
		    }
		
		
		
		i++;
		
	}
}
