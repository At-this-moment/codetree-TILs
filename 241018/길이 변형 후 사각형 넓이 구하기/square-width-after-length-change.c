#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    
    scanf("%d %d",&a,&b);

    a+=8;
    printf("%d\n",a);

    b*=3;
    printf("%d\n",b);

    printf("%d",a*b);
    return 0;
}