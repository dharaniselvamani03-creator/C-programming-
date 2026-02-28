#include <stdio.h>
int main(){
    float salary,total,bonus;
    char gender;
    scanf("%f",&salary);
    scanf(" %c",&gender);
    if(gender == 'f'){
        bonus = salary*0.20;
    }
    else {
        bonus = salary*0.10;
    }
    total = salary+bonus;
    printf("total: %.2f",total);
    return 0;
}
