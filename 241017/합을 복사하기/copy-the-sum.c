#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a=1,b=2,c=3;
    int temp1, temp2;

    temp1=a;
    a = a+b+c;

    temp2=b;
    b = temp1+b+c;

    c = temp1+temp2+c;

    printf("%d %d %d",a,b,c);
    return 0;
}