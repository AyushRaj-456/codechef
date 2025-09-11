#include <stdio.h>

int main() {
	// your code goes here
    int t;
    scanf("%d", &t);
    
    while(t>0){
        int total, infected;
        scanf("%d %d", &total, &infected);
        
        int not_inf = total - infected;
        
        if(infected <= not_inf){
            printf("%d\n", infected);
        }else{
            printf("%d\n", not_inf);
        }
        
        t--;
    }
}

