#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int s;
    scanf("%d",&s);

    if(s>=80){
        printf("pass");
    }
    else{
        printf("%d more score",80-s);
    }

    return 0;
}