#include <stdlib.h>
#include <stdio.h>

int main() {
	// your code goes here
    int t;
    scanf("%d", &t);
    
    while(t>0){
        int n,m;
        long long max1=0, sum=0;
        scanf("%d%d", &n,&m);
        
        int a[n];
        for(int l=0; l<n; l++){
            scanf("%d", &a[l]);
        }
        
        int b[2];
        b[0] = 1;
        b[1] = m;
        
        for(int j=0; j<n; j++){
            max1 = abs( a[j] - b[0] );
            if(max1 < (abs(a[j] - b[1]) ) ){
                max1 = abs( a[j] - b[1] );
                sum = sum + max1;
            }else{
                sum = sum + max1;
            }
        }
        
        printf("%lld\n", sum);
        t--;
    }
}

