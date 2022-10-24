#include<stdio.h>

int main(){
     /* if (condition) {
  // block of code to be executed if the condition is true
    }
    */

    int x,y,z;
    printf("Enter three integer number \n");
    scanf("%d %d %d", &x,&y,&z);


    if (x>y) {
        if(x>z){
       printf("x is greater");
    }
    }
    if(y>x){
        if(y>z){
        printf("y is greater");
    }
    }
     if(z>x){
        if(z>y){
        printf("z is greater");
    }
    }
    //else{printf("z is greater");}

}
