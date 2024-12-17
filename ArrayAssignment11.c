/* 11. Write a C program which can input some numbers and display how many of them are
divisible by immediate previous element of the array.
Sample Input
40 10 30 15 30 30 30
Sample Output
4 */

#include <stdio.h>
int main(){
int i,x[5],a,b,c,j;
printf("Enter 10 numbers respectively: ");
   for(i=0;i<5;i++){
    scanf("%d",&x[i]);
    }
    c=0;a=0;
    for(j=1;j<5;j++){
        if(x[j]%x[j-1]==0){
             a=x[j];
            c++;
            printf("The divisable are: %d\n",a);
        }
    }


printf("There are %d number are divisable\n",c);

return 0;}
