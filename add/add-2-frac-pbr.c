#include<stdio.h>
struct frac
{
int x,y;                      
};
int input(struct frac* h1,struct frac* h2)
{
 printf("Enter numerator of 1st ");
 scanf("%d",&h1->x);

 printf("Enter denomenator of 1st ");
 scanf("%d",&h1->y);

 printf("Enter numerator of 2nd ");
 scanf("%d",&h2->x);

 printf("Enter denomenator of 2nd ");       
 scanf("%d",&h2->y);

 return 0;
}
int compute(struct frac h1,struct frac h2,int* num,int* deno )
{
    *deno =( h1.y * h2.y );
    *num =( h1.x * h2.y )+( h1.y * h2.x );
    return 0;
}
void output(int o, int p)
{
 printf("the sum is %d/%d \n",o,p);
}
int main()
{
 struct frac h1,h2;
 int x,y;
 input(&h1,&h2);
 compute(h1,h2,&x,&y);
 output(x,y);
}
