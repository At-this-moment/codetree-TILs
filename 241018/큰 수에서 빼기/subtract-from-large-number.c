#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int x,y;
    scanf("%d %d",&x,&y);
    if(x>y)
    {
        printf("%d",x-y);
    }
    if(x<y)
    {
        printf("%d",y-x);
    }
    return 0;
}