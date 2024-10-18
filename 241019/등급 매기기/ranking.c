#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int s;
    scanf("%d",&s);

    if(s>=90){
        printf("A");
    }
    else if(s>=80){
        printf("B");
    }
    else if(s>=70){
        printf("C");
    }
    else if(s>=60){
        printf("D");
    }
    else{
        printf("F");
    }

    return 0;
}