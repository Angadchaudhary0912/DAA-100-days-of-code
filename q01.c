/*Write a C program that accepts a positive integer containing digits from 0 to 9.
 Exactly one digit is missing, while the remaining nine digits appear exactly once*/

#include <stdio.h>
int main(){
    int num;
    int present[10] = {0};

    printf("enter tge number: ");
    scanf("%d", &num);

    while(num > 0){
        int digit = num % 10;
        present[digit] = 1;
        num = num / 10;
    }

    printf("missing number is: ");

    for(int i = 0; i <=9; i++){
        if(present[i] == 0){
            printf("%d", i);
        }
    }
    return 0;
}