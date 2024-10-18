#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int M1,E1,M2,E2;
    scanf("%d %d %d %d",&M1,&E1,&M2,&E2);

    if(M1>M2 || (M1==M2 && E1>E2)){
        printf("A");
    }
    else{
        printf("B");
    }

    return 0;
}