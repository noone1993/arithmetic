#include <stdio.h>

int main(){
    int n;
    int k;
    int total;
    int result;
    
    while(scanf("%d%d",&n,&k)!=EOF){
        total=n*2;
        
        if(total<=k){  
            printf("2\n");
            continue;
        }

        result=total/k;
    
        if(total%k!=0)
            result++;
        
        printf("%d\n",result);
    }
    
    return 0;
}