#include<stdio.h>
struct complex sum(struct complex,struct complex);
struct complex{
	int a;
	int b;
};
int main()
{
	struct complex c1,c2,c3;
	printf("Enter real and imaginary part of 1st complex number:\n");
	scanf("%d%d",&c1.a,&c1.b);
	printf("Enter real and imaginary part of 2nd complex number:\n");
	scanf("%d%d",&c2.a,&c2.b);
	c3=sum(c1,c2);
	printf("Sum of real part=%d\n",c3.a);
	printf("Sum of imaginary part=%d",c3.b);
	return 0;
}
struct complex sum(struct complex n1,struct complex n2)
{
	struct complex n3;
	n3.a=n1.a+n2.a;
	n3.b=n1.b+n2.b;
	return(n3);
}