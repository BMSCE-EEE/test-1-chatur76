#include<stdio.h>
void input(int *a,int *b,int *c);
void largest(int *a,int *b,int *c,int *larg);
void output( int *larg);
int main()
{
  int a,b,c,larg;
  input(&a,&b,&c);
  largest(&a,&b,&c,&larg);
  output(&larg);
  return 0;
}
void input(int *a,int *b,int *c)
{
  scanf("%d",a);
  scanf("%d",b);
  scanf("%d",c);

}
void largest(int *a,int *b,int *c,int *larg)
{
if(*a>*b && *a>*c)
*larg=*a;
if(*b>*a && *b>*c)
*larg=*b;
else
*larg=*c;
}
void output(int *larg) 
{
  printf("largest number is %d",*larg);
}