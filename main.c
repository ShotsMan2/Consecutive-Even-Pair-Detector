#include <stdio.h>
#include <stdlib.h>

int main()
{
                      int sayilar[]= { 20,60,45,42,23,24,26,125,66,55,145,50,30,40 };
    int i;

    for(i=0;i<=12;i++){
        if(sayilar[i]%2==0){
            if(sayilar[i+1]%2==0){
                printf("%d-%d ",sayilar[i],sayilar[i+1]);
            }
        }
    }


    return 0;
}
