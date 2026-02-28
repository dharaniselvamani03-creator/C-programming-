#include <stdio.h>
int main(){
    int weather;
    scanf("%d",&weather);
    if(weather == 0){
        printf("freezing");
    }
    else if(weather<10){
        printf("very cold");
    }
    else if(weather<20){
        printf("cold");
    }
    else if(weather<30){
        printf("normal");
    }
    else if(weather<40){
        printf("hot");
    }
    else{
        printf("very hot");
    }
          
}
