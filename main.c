//Eyup KORURER
//04.07.2017

#include <stdio.h>
int factorial(int a){
if(a<=1){
    return 1;
}
return a*factorial(a-1);
}


int main() {
int a;
printf("Faktoryelini almak istediginiz sayiyi giriniz:");
scanf("%d",&a);
    printf("%d! = %d",a,factorial(a));
    return 0;

}
