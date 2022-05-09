#include <stdio.h>

int main()

{

int a,b;

printf("Enter a number :\n");

scanf("%d",&a);

printf("Enter another number :\n");

scanf("%d",&b);

printf("Before swapping a and b are: %d and %d\n "a,b);

a=a+b;//you are making a as a sum of a and b

b=a-b;//here your are removing b from total that means you are getting other value i.e, a

a=a-b;//now we got b value as a , now we remove b from total to get another vlaue which is b initially now its a

//hence swapped

printf("After swapping a and b are: %d and %d\n "a,b);

return 0;

}
