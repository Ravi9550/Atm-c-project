#include <stdio.h>
void main()
{
    int rating;
    printf("enter your rating\n");
    scanf("%d", &rating);

    switch (rating)    //switch(Integer expressions)
    {
    case 1:
        
        printf("your rating is 1\n");
        break;
    case 2:
        printf("your rating is 2\n");
        break;
    case 3:
        printf("your rating is 3\n");
        break;
    case 4:
        printf("your rating is 4\n");
        break;
    case 5:
        printf("your rating is 5\n");
        break;
    default:
        printf("Invalid rating\n");
        break;
    }
}
