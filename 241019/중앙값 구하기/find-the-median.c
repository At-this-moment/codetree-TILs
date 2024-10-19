#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    //c가 중앙값일때
    if((a>b && a>c) || (b>a && b>c)){
        if(c>a || c>b){
            printf("%d",c);
        }
    }

    //b가 중앙값일때
    if((a>b && a>c) || (c>a && c>b)){
        if(b>a || b>c){
            printf("%d",b);
        }
    }

    //a가 중앙값일때
    if((b>a && b>c) || (c>a && c>b)){
        if(a>b || a>c){
            printf("%d",a);
        }
    }


    return 0;
}