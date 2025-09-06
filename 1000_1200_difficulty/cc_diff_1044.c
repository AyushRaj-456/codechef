#include <stdio.h>

int main() {
	// your code goes here
    int t;
    scanf("%d", &t);
    
    while(t>0){
        long long int n, odd = 0, even = 0;
        scanf("%lld", &n);
        
        odd = (n + 1) / 2;
        even = n / 2;
        
       /*
       for(int i=1; i<=n; i++){
            if(i%2 !=0 ){
                odd++;
            }
        }
        
        for(int j=1; j<=n; j++){
            if(j%2 ==0 ){
                even++;
            }
        }
       */ 
        printf("%lld\n", (even * odd) * 2);        
        t--;
    }
}

