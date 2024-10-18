#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int ms,fs;
    scanf("%d %d",&ms,&fs);

    if(ms>=90 && fs>=95){
        printf("100000");
    }
    else if(ms>=90 && fs>=90){
        printf("50000");
    }
    else{
        printf("0");
    }

    return 0;
}