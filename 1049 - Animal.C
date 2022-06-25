#include <stdio.h>
#include <string.h>
int main() {
  char vi[15];
  char avmia[15];
  char coohhhho[15];

  scanf("%14s", vi);
  scanf("%14s", avmia);
  scanf("%14s", coohhhho);

 if(strcmp(vi,"vertebrado") == 0){
   if(strcmp(avmia,"ave")== 0){
   
     if(strcmp(coohhhho,"carnivoro")== 0){
       printf("aguia\n");
       
     }
       if(strcmp(coohhhho,"onivoro")== 0){
         printf("pomba\n");
       } 
    }
   if(strcmp(avmia,"mamifero")== 0){
      if(strcmp(coohhhho,"onivoro")== 0){
       printf("homem\n");
     }
       if(strcmp(coohhhho,"herbivoro")== 0){
         printf("vaca\n");
       } 
 }
   }
  
  if(strcmp(vi,"invertebrado") == 0){
   if(strcmp(avmia,"inseto")== 0){
   
     if(strcmp(coohhhho,"hematofago")== 0){
       printf("pulga\n");
       
     }
       if(strcmp(coohhhho,"herbivoro")== 0){
         printf("lagarta\n");
       } 
    }
   if(strcmp(avmia,"anelideo")== 0){
      if(strcmp(coohhhho,"hematofago")== 0){
       printf("sanguessuga\n");
     }
       if(strcmp(coohhhho,"onivoro")== 0){
         printf("minhoca\n");
       } 
 }

    } 
   return 0;
}
