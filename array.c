#include <stdio.h>
int main()
{
    int temparray[50], max,min,size, c;
    float mesos_oros,sum=0;
	
    printf("Enter the number of elements in the array\n");
    scanf("%d", &size);
	
    printf("Enter %d integers\n", size);
    for (c = 0; c < size; c++)
    scanf("%d", &temparray[c]);

// ypologismos megistou
    max = temparray[0];
   for (c = 1; c < size; c++)
   {
     if (temparray[c] > max)
     {
     max = temparray[c];
     }
   }
   
// ypologismos elaxistou
   min = temparray[0];
   for (c = 1; c < size; c++)
   {
     if (temparray[c] < min)
     {
     min = temparray[c];
     }
   }
   
// ypologismos mesou orou
  for (c=0;c<size;c++)
  {
      sum=sum+temparray[c];
  }
   mesos_oros=sum/size;
   
   printf("max:%d\n",max);
   printf("min:%d\n",min);
   printf("The average is:%f\n",mesos_oros);
   
//prosdiorismos thesewn megistou
  for (c=0;c<size;c++)
  if (temparray[c]==max)
  {
    printf("Maximum array element is found at location %d with value %d.\n",c+1, max);
  }
  
//prosdiorismos thesewn elaxistou
  for (c=0;c<size;c++)
  if (temparray[c]==min)
  {
  printf("Minumum array element is found at location %d with value %d.\n",c+1, min);  
  }
  
return 0;
}