#include<stdio.h>                                                                
#include<string.h>                                                     
                                                                                
int main()                                                                     
{                                                                               
 char *str = "this is my notebook";                                       
 int len = 0;                                                                   
 while(*str++)                                                                  
 {                                                                              
  len ++;                                                                       
 }                                                                              
 printf("total strings: %d\n", len);                                            
}    
