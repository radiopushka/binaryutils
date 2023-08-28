#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char ch(int in){
 if(in<10){
  return in+'0';
 }
 switch(in){
  case 10: return 'A';
  case 11: return 'B';
  case 12: return 'C';
  case 13: return 'D';
  case 14: return 'E';
  case 15: return 'F';
  }

}

int main(int argn,char* argv[]){
 if(argn!=2){
  printf("%s <decimal value>\n",argv[0]);
  return 0;
 }
 unsigned long long v=strtol(argv[1],NULL,10);
 unsigned long long v2=v;
 unsigned long long buff;
 unsigned long long c=1;
 while(v>0){
  v=v/16;
  c++;
 }
 char out[c+1];
 unsigned long long s=c;
 while(v2>0){
  buff=v2%16;
  v2=v2/16;
  c--;
  out[c]=ch(buff); 
 }
 out[c-1]=ch(v2);
 out[0]=' ';
 out[s]='\0';
 printf("%s\n",out);
 return 0;
}
