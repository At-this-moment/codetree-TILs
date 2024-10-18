#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);

    if(x<=y && x<=z){
        printf("1");
    }
    else{
        printf("0");
    }

    if(x==y && x==z){
        printf(" 1");
    }
    else{
        printf(" 0");
    }

    return 0;
}