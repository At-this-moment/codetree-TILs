#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    scanf("%d %d",&a,&b);

    if(a>b){
        printf("%d",a*b);
    }
    else{
        printf("%d",b/a);
    }

    return 0;
}