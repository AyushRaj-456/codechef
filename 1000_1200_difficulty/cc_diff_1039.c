#include <stdio.h>

int main() {
	// your code goes here
    int t;
    scanf("%d", &t);
    
    while(t>0){
        int n;
        scanf("%d", &n);
        int arr[n];
        int max_num = 0;
        
        for(int i=0; i<n; i++){
            scanf("%d", &arr[i]);
        }
        
        for(int j=0; j<n; j++){
            if(max_num < arr[j]){
                max_num = arr[j];
            }
        }
        
        int* occurance = (int*)calloc(max_num, sizeof(int));
        for(int i=0; i<max_num; i++){
            occurance[i] = 1;
        }
        
        for(int j=0; j<n; j++){
            for(int k=0; k<n; k++){
                if(arr[j] ==  arr[k] && j!=k){
                    occurance[arr[j]]++;
                }
                                
            }
        }
        
        
        
        /*
        for(int i=0; i<n; i++){
            scanf("%d", &arr[i]);
            
            if(max_num < arr[i]){
                max_num = arr[i];
            }
        }
        
        int* occurance = (int*)calloc(max_num, sizeof(int));
        for(int i=0; i<max_num; i++){
            occurance[i] = 1;
        }
        
        
        for(int j=0; j<n; j++){
            for(int k=0; k<n; k++){
                if(arr[j] ==  arr[k] && j!=k){
                    occurance[arr[j]]++;
                }
                                
            }
        }
        
        int max_occurance = -1;
        for(int k=0; k<max_num; k++){
            if( max_occurance < occurance[k] ){
                max_occurance = occurance[k];
            }
        }
        
        */
        
        
        printf("%d\n", n - max_occurance);
        
        t--;
    }
}

