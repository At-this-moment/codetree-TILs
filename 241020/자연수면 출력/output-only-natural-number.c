#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    scanf("%d %d",&a,&b);

    if(a>0){
        for(int i=1; i<=b; i++){
            printf("%d",a);
        }
    }
    if(a<=0){
        printf("0");
    }

    return 0;
}