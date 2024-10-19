#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char p1,p2,p3;
    int t1,t2,t3;
    int Z=0;
    scanf(" %c %d",&p1,&t1);
    scanf(" %c %d",&p2,&t2);
    scanf(" %c %d",&p3,&t3);

    if(p1=='Y' && t1>=37){
        Z++;
    }
    if(p2=='Y' && t2>=37){
        Z++;
    }
    if(p3=='Y' && t3>=37){
        Z++;
    }
    if(Z>=2){
        printf("E");
    }
    else{
        printf("N");
    }

    return 0;
}