#include <stdio.h>

int main() {
	// your code goes here
    int t;
    scanf("%d", &t);
    
    while(t>0){
        int ppl, amt;
        scanf("%d %d", &ppl, &amt);
        
        int debited[ppl];
        for(int i=0; i<ppl; i++){
            
            scanf("%d", &debited[i]);
            if(amt >= debited[i]){
                printf("1");
                amt = amt - debited[i];
            }else if(amt < debited[i]){
                printf("0");
            }
        }
        printf("\n");
        
        t--;
    }
}

