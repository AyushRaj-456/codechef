#include <stdio.h>

int main() {
	// your code goes here
    int t;
    scanf("%d", &t);
    
    while(t>0){
        int siz;
        scanf("%d", &siz);
        int arr[siz];
        int s1_sum;
        int s2_sum = 0;
        int any_odd;
        
        for(int i=0; i<siz; i++){
            scanf("%d", &arr[i]);
            
            if(arr[i]%2 != 0){
                any_odd = arr[i]; // s1_sum will store this
            }
            
            s2_sum = s2_sum + arr[i];
        }
        
        s2_sum = s2_sum - any_odd;
        s1_sum = any_odd;
        
        if( (s2_sum*s1_sum) % 2 != 0 ){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
        
        
        t--;
    }
}

