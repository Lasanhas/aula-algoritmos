#include <stdio.h>
#include <stdlib.h>
#include<string.h>
//prog001
/*void main(){
    int soma = 0;
for(int i = 0; i <= 20; i++){
    if(i%2 == 0){
        printf("%d  ", i);
        soma += i;
    }
}printf("soma = %d\n", soma);
}*/

//prog002

/*void main(){
char string[100];
int cont = 0;
printf("Digite alguma palavra:  ");
scanf("%s",&string);
for(int i = 0; i < strlen(string); i++){
    if(string[i] == 'a'){
        cont = cont + 1;
    }
}
printf("Quantidade de letras A = [%d]\n", cont);
}*/

//prog003

/*int trocarcponteiro(int* p, int* q){
    int* temp;
    *temp = *p;
    *p = *q;
    *q = *temp;
    return 0;
}
void main(){

int a = 10;
int b = 20;
printf("antes da troca: a =%d, b = %d\n", a, b);

trocarcponteiro(&a, &b);

printf("com troca: a = %d, b = %d\n", a, b);
}*/

//prog004
/*int trocarcompont(char* var){
if(*var == 'a'){
    *var = 'z';}
    return 0;
}
void main(){
char var[10];

for(int i = 0; i < 10; i++){
    printf("Digite a letra da posiçao %d: \n", i);
    scanf("%s", &var[i]);
}
for(int i = 0; i <10; i++){
    printf("%c ", var[i]);
    }
    printf("\n");
for(int i = 0; i < 10; i++){
trocarcompont(&var[i]);
}
printf("depois da troca:  ");
for(int i = 0; i < 10; i++){
    printf("%c  ", var[i]);
}
printf("\n");
}*/
