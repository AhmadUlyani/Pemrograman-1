#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    if (n>=80 && n<=100){
        printf("A");
    }
    else if(n>=70 && n<80){
        printf("B");
    }
    else if(n>=60 && n<70){
        printf("C");
    }
    else if(n>=50 && n<60){
        printf("D");
    }
    else if(n>=0 && n<50){
        printf("E");
    }
    else{
        printf("Nilai tidak valid");
    }

    return 0;
}