/*LOGIC
 * take input and store in array
 * sort it in the reverse order
 * use loop to add ele one by one subtract from n */
#include <stdio.h>

int main(){

    int t;scanf("%d",&t);

    while(t--){
        int n,w,j,i,temp,value=0,k=0;
        scanf("%d %d",&n,&w);
        int a[n];

        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        //reverse sort loop
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if(a[i]<=a[j]){
                        temp=a[j];
                        a[j]=a[i];
                        a[i]=temp;

                }
            }
        }

        //work start
        for(i=0;i<n;i++){
            k=k+a[i];
            if(k>=w){
                value=n-1-i;
                break;
            }
         }
        printf("%d\n",value);
    }
    return 0;
}
