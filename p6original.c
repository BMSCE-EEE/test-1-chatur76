#include<stdio.h>
int input_n();
int sum_n(int n);
void output(int n,int sum);
int main()
{
  int a,add;
  a=input_n();
  add=sum_n(a);
  output(a,add);
  return 0;
}
int input_n()
{
  int i;
  printf("enter a number");
  scanf("%d")
}
