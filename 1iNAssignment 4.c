#include<stdio.h>
int main()
{
  int  r;
  printf("Enter Radius of a circle");
  scanf("%d",&r);
  float a=3.14*r*r;
  printf("Area of circle is %f having the radius %d",a ,r);
  return 0;
}
