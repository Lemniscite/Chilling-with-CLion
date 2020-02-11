#include<stdio.h>


int main(){


int n1,n2,n3 =0;
scanf("%d %d %d", &n1,&n2,&n3);

if(n1>n2&&n1>n3){

printf("N1>> %d",n1);

}



if(n1<n2&&n2>n3){

printf("N2>> %d",n2);

}


if(n3>n2&&n3>n1){

printf("N3>> %d",n3);

}



return 0;


}
