#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

#define WIDTH 470
#define HIGHT 120
#define PAGE_LIMIT 2190 
#define N HIGHT*WIDTH  
char name[]="ASCII-bad apple0000";//9 10 11 12λ 
char str[N];
int main()
{
 system("pause");
 int i,j,n=1,p,q;
 char a[4]="000";
 for(i=1;i<=PAGE_LIMIT;i++)
 {
  for(p=10,q=0;q<4;q++)
  {
   if(i<10&&q==1)break;
   else if(i<100&&q==2)break;
   else if(i<1000&&q==3)break;
   else 
   {
    a[q]=i%p/(p/10)+48;
    p*=10; 
   }
  } 
  for(p=0;p<q;p++)
   name[11-p]=a[p];
  FILE *fp;
  if((fp=fopen(name,"r"))==NULL) 
  {
   printf("%d",i);
   system("pause");
   continue;
  } 
  while(fgets(str,N ,fp)!=NULL)
  printf("%s",str);
  fclose(fp); 
  system("cls");

 }
 system("pause");
 return 0;
}
