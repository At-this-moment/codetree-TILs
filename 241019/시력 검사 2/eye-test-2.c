#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    float e;
    scanf("%f",&e);

    if(e>=1){
        printf("High");
    }
    else if(0.5<=e<1){
        printf("Middle");
    }
    else{
        printf("Low");
    }

    return 0;
}