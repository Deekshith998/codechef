#include <stdio.h>
 
int main(){
     int t;scanf("%d",&t);
     while(t--){
         int x;
         scanf("%d",&x);
         if(x>65){
             printf("Overload\n");
         }
         else if(x<=65 && x>=35){
             printf("Normal\n");
         }
         else if(x<35){
             printf("Underload\n");
         }
         else{
             printf("ERROR");
         }
     }
     return 0;
}

         

