#include <stdio.h>

int main() {
	// your code goes here
    int t;
    scanf("%d", &t);
    
    while(t>0){
        int days, req, pass=0, rem=0;
        scanf("%d %d", &days, &req);
        
        int* arrptr = (int*)malloc( sizeof(int)*days );
        
        for(int i=0; i<days; i++){
            scanf("%d", &arrptr[i]);
        }
        
        for(int j=0; j<days; j++){
            arrptr[j] = arrptr[j]+rem;
            if(arrptr[j] >= req){
                rem = arrptr[j] - req;
                pass++;
            }else{
                printf("NO %d\n", j+1);
                break;
            }
        }
        
        if(pass >= days){
            printf("YES\n");
        }
        free(arrptr);
        t--;
    }
}

