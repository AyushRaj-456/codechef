#include <stdio.h>

int main() {
	// your code goes here
    int t;
    scanf("%d", &t);
    
    while(t>0){
        int num, req;
        scanf("%d%d", &num, &req);
        
        if( (req % 2 != 0 ) || (req % 2 == 0 && num % 2 == 0)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
        t--;
    }
}

