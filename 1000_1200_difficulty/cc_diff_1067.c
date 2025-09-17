#include <stdio.h>

int main() {
	// your code goes here
    int t;
    scanf("%d", &t);
    
    while(t>0){
        int size, temp, swapped = 0, no_need__swap=0;
        scanf("%d", &size);
        
        int* arr = (int*)malloc( sizeof(int)*(size) );
        for(int i=0; i<size; i++){
            scanf("%d", &arr[i]);
        }
        
        for(int j=0; j<size-1; j++){
            if( arr[j] > arr[j+1] ){
                
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                break;       
            }
        }
        
        for(int j=0; j<size-1; j++){
            if( arr[j] > arr[j+1] ){
                printf("NO\n");
                break;
            }else{
                no_need__swap++;
            }
        }
        
        if(no_need__swap >= size-1){
             printf("YES\n");
        }
        free(arr);
        t--;
    }
}

