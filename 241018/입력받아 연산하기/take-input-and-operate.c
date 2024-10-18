#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int x,y;

    scanf("%d %d",&x,&y);
    
    x+=87;
    y%=10;

    printf("%d\n",x);
    printf("%d",y);
    return 0;
}