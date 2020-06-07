#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

void conversionBD (int nombre, int* bin);

main ()
{
    FILE *fp;
int adrIP[4];
printf("Entrez votre adresse IP/masque : ");
scanf("%d.%d.%d.%d/%d", &adrIP[0], &adrIP[1], &adrIP[2], &adrIP[3] ,&adrIP[4]);
 if(adrIP[1]<=255 && adrIP[1]>0 && adrIP[2]<=255 && adrIP[2]>0 && adrIP[3]<=255 && adrIP[3]>0)
  {
    if ( adrIP[0]<=127)
    {
        printf("C'est une adresse de la classe : A");}
    else if(adrIP[0]<192 && adrIP[0]>127)
    {
        printf("C'est une adresse de la classe : B");}
    else if(adrIP[0]<224 && adrIP[0]>192)
    {
        printf("C'est une adresse de la classe : C");}
    else if(adrIP[0]<240 && adrIP[0]>224)
    {
        printf("C'est une adresse de la classe : D");}
    else if(adrIP[0]>240)
    {
        printf("C'est une adresse de la classe : E");}
}

else{
    printf("Ce n'est pas une adresse valide ");}

if (adrIP[0]=10)
    {
        printf("L'adresse est privé");}
if (adrIP[0]=172 && adrIP[1]>=16 && adrIP[1]<32)
    {
        printf("L'adresse est privé");}

if (adrIP[0]=192 && adrIP[1]==168 && adrIP[2]>=1)
    {
        printf("L'adresse est privé");}
else{
    printf("L'adresse est publique");}

int bitazero= 32 - adrIP[4];
int nbdehote = pow(2,bitazero);

printf("il peut y'avoir %d hote", nbdehote);

int i = 0;
_Bool mask[32]={true};
while (i/= adrIP[4]){
    mask[i]=false;
    i++;
}

_Bool tabip[32];
int adrIP1[8];
conversionBD(adrIP[0],adrIP1);
int adrIP2[8];
conversionBD(adrIP[1],adrIP2);
int adrIP3[8];
conversionBD(adrIP[2],adrIP3);
int adrIP4[8];
conversionBD(adrIP[3],adrIP4);

int o = 1;
int y = 0;
while(o/=8){
    if (adrIP1[y] = false){
        tabip[o]=1;
    }
    y++;
    o++;
}
y = 0;
while(o/=16){
    if (adrIP2[y] = false){
        tabip[o]=1;
    }
    y++;
    o++;
}
y=0;
while(o/=24){
    if (adrIP3[y] = false){
        tabip[o]=1;
    }
    y++;
    o++;
}
y=0;
while(o/=32){
    if (adrIP4[y] = false){
        tabip[o]=1;
    }
    y++;
    o++;
}
y=1;
_Bool adres[32]={true};
while(y /= 32){
    if (tabip[y] = 0 || mask[y] == true){
        adres[y]=true;
    }
    else if (tabip[y]=1 && mask[y]==false){
        adres[y]=false;
    }
    y++;
}
y=1;
int n=7;
int res1 = 0;
while(y/=8){

    if(adres[y]=false){
        res1=pow(2,n)-1;
    }
    n--;
    y++;

}
n=7;
int res2=0;
while(y/=16){

    if(adres[y]=false){
        res2=pow(2,n)-1;
    }
    n--;
    y++;

}
n=7;
int res3=0;
while(y/=24){

    if(adres[y]=false){
        res3=pow(2,n)-1;
    }
    n--;
    y++;

}
n=7;
int res4=0;
while(y/=32){

    if(adres[y]=false){
        res4=pow(2,n)-1;
    }
    n--;
    y++;

}
printf("le reseau est %d.%d.%d.%d",res1,res2,res3,res4);

fp = freopen("file.txt", "w+", stdout);

printf("il peut y'avoir %d hote", nbdehote);
printf("le reseau est %d.%d.%d.%d",res1,res2,res3,res4);

fclose(fp);

void conversionBD (int nombre, int* bin) {
    int cnt,i;
    int b = 7 ;
    for (int i=0;i<b;i++) {
        bin[i] = 0 ;
    }
    while(nombre>0)
    {
        bin[b]=nombre%2;
        nombre /=2;
        b--;
    }
}

}


