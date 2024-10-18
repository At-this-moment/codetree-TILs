#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int h,w;

    scanf("%d %d",&h,&w);

    double b = ((10000*w)/(h*h));
    printf("%.0f\n",b);

    if(b>=25)
    {
        printf("Obesity");
    }
    return 0;
}