#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int t;
    scanf("%d",&t);

    if(t<0){
        printf("ice");
    }
    else if(t>=100){
        printf("vapor");
    }
    else{
        printf("water");
    }

    return 0;
}