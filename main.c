#include <stdio.h>

// int main(){
//     //this is my first c program :)
//     /*
//     this is also a comment
//     */
//     printf("hello world\n");
//     printf("i like her !!");
//     return 0;
// }

int main() {
    int age = 25;
    int year = 2026;
    int quant = 1;
    printf("I am %d years old\n", age);
    printf("the year is %d", year);
    printf("you have ordered %d x items\n", quant);

    float gpa =2.5;
    float price = 19.99;
    float temp = -10.156;
    printf("the temp is %f\n", temp);
    printf("the price is $%f\n",price);
    printf("your gpa is %f \n", gpa);

    double pi = 3.141592653589793;
    printf("pi is approx %.15lf\n", pi);


    // char grade = 'B';
    // char sym = '!';
    // printf("your grade is %c\n",grade);
    // printf("I love you %c%c%c\n",sym,sym,sym);
    return 0;

}