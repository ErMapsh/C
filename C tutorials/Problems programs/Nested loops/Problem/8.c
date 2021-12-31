/*
1
23
456
78910
*/

#include<stdio.h>
int main()
{ 
  int i,j,k,n;
  int init=1;
  printf("Enter No of Rows:");
  scanf("%d", &n);
  for(i=1;i<n;i++)
  {
    for(j=1;j<=i;j++)
    {
      printf("%d ",init++);
    }
    printf("\n");
  }
  return 0;
}
