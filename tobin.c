#include<stdio.h>
#include<stdlib.h>
#define factorial(in) (in%2==0)? 0:1

int main(int argn, char** argv){
 int negative=0;
 if(argn<3){
  printf("tobin <decimal> <# of bits>\n");
  return 0;
 }
 int numbits=strtol(argv[2],NULL,10)-1;
 int conv=strtol(argv[1],NULL,10);
 if(conv<0){
  negative=1;
  conv=conv*(-1);
 }
 char out[numbits+1];
 int prv=conv;
 int flip=0;
 int cc=numbits;
 while(conv>0){
  if(factorial(conv)==1){
   out[cc]='1';
   if(negative==1&&flip==1){
    out[cc]='0';
   }
   flip=1;
  }else{
   out[cc]='0';
   if(negative==1&&flip==1){
    out[cc]='1';
    }
  }
  cc--;
  conv=conv/2;
 }
 while(cc>-1){
  out[cc]='0';
  if(negative==1&&flip==1){
    out[cc]='1';
   }
  cc--;
 }
 out[numbits+1]='\0';
 printf("%s\n",out);
 return 0;
}
