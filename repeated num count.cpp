#include<stdio.h>
int main()
{
   int a[10],c=0;
   printf("Enter the elements:");
   for(int i=0;i<10;i++)
   {
   	 scanf("%d",&a[i]);
   }
   for(int i=0;i<10;i++)
   {
   	 for(int j=i+1;j<10;j++)
   	 {
   	 	if(a[i]==a[j])
   	 	{
   	 		c++;
			}
		}
   }
   printf("Repeated elements count:%d",c);
}
