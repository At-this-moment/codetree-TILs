#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int m;
    scanf("%d",&m);

    if(m>=3000){
        printf("book");
    }
    else if(m>=1000){
        printf("mask");
    }
    else{
        printf("no");
    }

    return 0;
}