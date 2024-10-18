#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int x;
    scanf("%d",&x);

    if(x%3==0){
        printf("YES");
    }
    else{
        printf("NO");
    }
    if(x%5==0){
        printf("YES");
    }
    else{
        printf("NO");
    }
    
    return 0;
}