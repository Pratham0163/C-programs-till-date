#include <stdio.h>

int main()
{
    int phy, chem, bio, sum;
    printf("enter your physics, chemistry & bio marks");
    scanf("%d %d %d", &phy, &chem, &bio);
    sum = phy + chem + bio;
    if ((phy < 33 || chem < 33 || bio < 33) || sum < 40)
    {
        printf("you have failed");
    }
    else
        printf("you have passed");

    return 0;
}
