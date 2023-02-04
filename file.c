.1=hello world

#include <stdio.h>
int main() {
   printf("Hello, World!");
   return 0;
}

.2=sum number

#include <stdio.h> 
 int main() 
 { 
  int a,b; 
     float c,d; 
     scanf("%d%d",&a,&b); 
     scanf("%f%f",&c,&d); 
      
     printf("%d %d \n",a+b,a-b); 
     printf("%0.1f %0.1f",c+d,c-d); 
      
     return 0; 
 }
 
 .3=sum digits
 
 #include <stdio.h> 
 int main() { 
      
     int n,a,sum=0; 
     scanf("%d", &n); 
     while(n>0) 
     { 
      a = n%10; 
      sum = sum+a; 
      n = n/10; 
     } 
     printf("%d",sum); 
     return 0; 
 }
 
 .4=characters
 
 #include <stdio.h> 
 int main()  
 { 
     char ch; 
     char s[24]; 
     char sen[100]; 
     scanf("%c\n%s\n%[^\n]s",&ch,s,sen); 
     printf("%c\n%s\n%s",ch,s,sen); 
     return 0; 
      
 }
 
 .5=condition
 
 #include<stdio.h> 
     int main(){ 
         int n; 
          
      scanf("%d",&n); 
         if(n==1){ 
         printf("one"); 
         } 
         else if(n==2){ 
         printf("two"); 
         } 
         else if(n==3){ 
         printf("three"); 
         } 
         else if(n==4){ 
         printf("four"); 
         } 
         else if(n==5){ 
         printf("five"); 
         } 
         else if(n==6){ 
         printf("six"); 
         } 
         else if(n==7){ 
         printf("seven"); 
         } 
         else if(n==8){ 
         printf("eight"); 
         } 
         else if(n==9){ 
         printf("nine"); 
         } 
     else 
         printf("Greater than 9"); 
     return 0; 
 }
 
 .6=for loops
 
 #include<stdio.h> 
 int main() { 
      int a, b; 
       scanf("%d\n%d", &a, &b); 
 for(int i = a; i <= b; i++)  
 { 
        switch(i) 
         { 
             case 1: printf("one\n"); 
                 break; 
             case 2: printf("two\n"); 
                 break; 
             case 3: printf("three\n"); 
                 break; 
             case 4: printf("four\n"); 
                 break; 
             case 5: printf("five\n"); 
                 break; 
             case 6: printf("six\n"); 
                 break; 
             case 7: printf("seven\n"); 
                 break; 
             case 8: printf("eight\n"); 
                 break; 
             case 9: printf("nine\n"); 
                 break;   
                 //default:return 0;                      
  
         } 
 if (i>9) 
     { 
         (i%2==0) ? printf("even\n") : printf("odd\n"); 
     } 
 } 
  
 return 0; 
 }
 
.7=arrays

#include <stdio.h> 
 int main() {   
     int n,sum=0;  
     scanf("%d",&n); 
     int arr[n]; 
     for(int i=0 ; i<n ; i++) 
     { 
         scanf("%d",&arr[i]); 
         sum = sum+arr[i]; 
     }   
     printf("%d",sum); 
     return 0; 
 }
