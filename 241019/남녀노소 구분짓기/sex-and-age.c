#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int sex,age;
    scanf("%d %d",&sex,&age);

    if(sex==0){
        if(age>=19){
            printf("MAN");
        }
        else{
            printf("BOY");
        }
    }
    else{
        if(sex==1){
            if(age>=19){
                printf("WOMAN");
            }
            else{
                printf("GIRL");
            }
        }
    }

    return 0;
}