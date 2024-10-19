#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,i;
    scanf("%d %d",&a,&b);

    for(i=b; i>=a; i--){
        printf("%d ",i);
    }

    return 0;
}