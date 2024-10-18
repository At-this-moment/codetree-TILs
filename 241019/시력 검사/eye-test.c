#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    float L,R;
    scanf("%f %f",&L,&R);

    if(L>=1.0 && R>=1.0){
        printf("High");
    }
    else if(L>=0.5 && R>=0.5){
        printf("Middle");
    }
    else{
        printf("Low");
    }

    return 0;
}