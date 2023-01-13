#include<stdio.h>
int factorial(int x);

int main(){
    int a = 5;
    printf("The value of factorial %d is %d", a, factorial(a));
    return 0;
}

int factorial(int x){
    // printf("Calling factorial(%d)\n", x);
    if (x==1 || x==0){ //base condition(s) i.e those which end the recursive function

        return 1;
    }
    else{
        return x * factorial(x-1); //works like a tree i.e 5*factorial4 then 4 *factorial3.....so on
    }
}