#include<stdio.h>
int main(){
    int temprature;
    scanf("%d",&temprature);
    if(temprature>=37){
        printf("fever");
    }
    else if(temprature<37){
        printf("normal fever");
    }
    else{
        printf("no");
    }
}
