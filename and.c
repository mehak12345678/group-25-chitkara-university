#include<stdio.h>
int main(){
    int a,b,c;
    printf("\nEnter any number:");
    scanf("%d %d %d,&a &b &c");
    if(a>b && a>c){
        printf("\nA is greatest with %d",a);
    }
    else{
        printf("\nC is greatest with %d",c);
        printf("\nSecond greatest is%d",a);
    }
    else if(b>c){
        printf("\nB is greatest with %d",b);
    }
    else{
        printf("\nC is greatest with %d",c);
        printf("\nSecond greatest is %d",b);
    
    }
    return 0;
    

}
