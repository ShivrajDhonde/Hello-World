#include<stdio.h> 
int max(int a, int b) 
{  
   if(a>b)
   return a;
   else
   return b;
}

int cutRod(int price[], int n) 
{ 
   if (n <= 0) 
     return 0; 
   
   int max_val = 0;
   for(int i = 0; i<n; i++) 
   {
   	  max_val = max(max_val, price[i] + cutRod(price, n-i-1));
   }      
  
   return max_val; 
} 
  

int main() 
{ 
    int n;
    int arr[] = {1, 5, 8, 9, 10, 17, 17, 20};
    printf("enter the value of n less than or equal to 10 : ");
    scanf("%d",&n);
    printf("Maximum Price is %d", cutRod(arr, n)); 
    return 0; 
} 
