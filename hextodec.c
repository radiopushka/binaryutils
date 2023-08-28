#include<stdio.h>
#include<string.h>
#include<ctype.h>


int toint(char in){
 switch(in){
  case '1': return 1; break;
  case '2': return 2; break;
  case '3': return 3; break;
  case '4': return 4; break;
  case '5': return 5; break;
  case '6': return 6; break;
  case '7': return 7; break;
  case '8': return 8; break;
  case '9': return 9; break;
  case 'A': return 10; break;
  case 'B': return 11; break;
  case 'C': return 12; break;
  case 'D': return 13; break;
  case 'E': return 14; break;
  case 'F': return 15; break;
 };
 return 0;
}

long poow(long num,int pow){
 long o=1;
 long c=pow;
 while(0<c){
  o=o*num;
  c--;
 }
 return o;
}

int main(int argn,char* argv[]){
 if(argn!=2){
  printf("%s <hex>\n",argv[0]);
  return 0;
 }
 char *ptr=argv[1];
 char *end=ptr+strlen(argv[1]);
 unsigned long long sum=0;
 long cc=-1;
 long p;
 long i;
 unsigned long long ele;
 while(end>=ptr){
  i=toint(toupper(*end));
  p=poow(16,cc);
  cc++;
  ele=i*p;
  sum=sum+ele;
  end--;
 }
 printf("%llu\n",sum);
 return 0;
}
