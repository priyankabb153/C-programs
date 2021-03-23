#include<stdio.h>
int main(){
   int age=10;
   if(age>18)
   {
       printf("eligible to vote\n");
   }
   else if(age==18){
       printf("will be eligible from this year\n");
       
    }
    else{
       printf("not eligible to vote\n");
   }

}