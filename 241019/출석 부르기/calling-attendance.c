#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d",&n);

    if(n==1){
        printf("John");
    }
    else if(n==2){
        printf("Tom");
    }
    else if(n==3){
        printf("Paul");
    }
    else{
        printf("Vacancy");
    }

    return 0;
}