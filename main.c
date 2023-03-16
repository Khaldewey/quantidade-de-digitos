#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int contagem(int x){
    int cont=0;
    if(x==0){
        return 1;
    }else{
while(x>0){
    x=x/10;
    cont++;
}
return cont;
    }
}

int main() {
    int n;
    scanf("%d",&n);
    if(n>=0 && n<=pow(2,30)){
    printf("%d",contagem(n));





    }

	return 0;
}
