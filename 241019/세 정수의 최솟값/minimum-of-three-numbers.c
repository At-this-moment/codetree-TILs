#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);

    if(x<=y && x<=z){
        printf("%d ",x);
    }
    
    if(y<=x && y<=z){
        printf("%d ",y);
    }
    
    if(z<=x && z<=y){
        printf("%d",z);
    }

    return 0;
}