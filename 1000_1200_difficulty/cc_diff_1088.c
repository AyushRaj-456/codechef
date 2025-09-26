#include <stdio.h>

int main() {
	// your code goes here
    int t;
    scanf("%d", &t);
    
    while(t>0){
        int n, x, s;
        scanf("%d%d%d", &n,&x,&s);
        
        int arr[n + 1]; 
        
        for (int i = 0; i <= n; i++) {
            arr[i] = 0;
        }
        
        arr[x] = 1;
        
        while(s>0){
            int a,b;
            scanf("%d%d",&a,&b);
            
            int temp = arr[a];
            arr[a] = arr[b];
            arr[b] = temp;
            s--;
        }
        
        for(int i=0; i<n+1; i++){
            if(arr[i] == 1){
                printf("%d\n", i);
            }
        }
        
        t--;
    }
}

