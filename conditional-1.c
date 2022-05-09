#include <stdio.h>
int main()
{
    int marks;
    printf("Enter marks: ");
    scanf("%d",&marks);
    if (marks<=100){
        if(100>=marks && marks>=85){
            printf("Grade A");
        }
        else if(84>=marks && marks>=70)
        {
            printf("Grade B");
        }
        else if(69>=marks && marks>=55)
        {
            printf("Grade C");
        }
        else if(54>=marks && marks>=40)
        {
            printf("Grade D");
        }
        else{
            printf("Grade F");
        }
    }
    else{
        printf("Enter valid marks.(upto 100)");
    }
    return 0;
}
