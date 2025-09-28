#include <stdio.h>

int main() {
	// your code goes here
    int t;
    scanf("%d", &t);
    
    while(t>0){
        int n;
        scanf("%d", &n);
        int ppl[n];
        int* total = (int*)calloc(n+1, sizeof(int));
        int fnl=1;
        for(int i=0; i<n; i++){
            scanf("%d", &ppl[i]);
            total[ppl[i]]++;    
        }
        
        for(int j=0; j<n; j++){
        
            if(total[ppl[j]] % ppl[j] != 0){
                fnl = 0;
                break;
            }
        }
        
        if(fnl == 1){
            printf("YES\n");
        } else {
            printf("NO\n");
        }

        free(total);
        
        
        t--;
    }
}

