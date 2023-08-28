#include<stdio.h>
#include<string.h>


void twosComplement(char* in){
 
 char *ptr=in;
 char *end=ptr+strlen(ptr)*sizeof(char);
 char *stop=end;
 for(ptr=in;ptr<end;ptr++){
  if(*ptr=='1'){
   stop=ptr;
  }
 }
 for(ptr=in;ptr<stop;ptr++){
  if(*ptr=='1'){
   *ptr='0';
  }else{
   *ptr='1';
  }
 }
}

unsigned long long power(int v,int p){
 unsigned long long i;
 unsigned long long ret=1;
 for(i=0;i<p;i++){
  ret=ret*v;
 }
 return ret;
}

int main(int argn, char* argv[]){
 if(argn!=2){
  printf("%s <binary number>\n",argv[0]);
  return 0;
 }
 int i;
 unsigned long long out=0;
 char *negative="";
 if(argv[1][0]=='1'){
  negative="-";
  twosComplement(argv[1]);
 }
 register char cc;
 register int c=strlen(argv[1]);
 register int start=-1;
 for(i=0;i<strlen(argv[1]);i++){
  cc=argv[1][i];
  c--;
  if(cc=='1'){
   start=1;
  }
  if(start==1){
   switch (cc){
    case '0': out=out+0; break;
    case '1':out=out+power(2,c);break;
   }
  }
 }
 printf("%s%llu\n",negative,out);
 return 0;
}
