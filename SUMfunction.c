#include<stdio.h>
// sum is a function which takes a and b as input and returns an integer as an output
int sum(int a, int b); // function prototype declaration

int main(){
    int c;
    c = sum(2, 15); // function call
    printf("The value of c is %d\n", c);
    return 0;
}

int sum (int a, int b){
    int c; //this c is different from the c used above in main function because different function...
    //... executed seperately & not interference & hence no error & completely valid
    c = a + b; 
    return c;
}