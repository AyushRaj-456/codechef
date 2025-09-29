#include <stdio.h>

int main() {
	// your code goes here
    int t;
    scanf("%d", &t);
    
    while(t>0){
        
        int length, temp;
        scanf("%d", &length);
        int song[length];
        
        for(int i=0; i<length; i++){
            scanf("%d", &song[i]);
        }
        int k;
        scanf("%d", &k);
        int value = song[k-1];
        
        for(int p=0; p< length-1; p++){
            for(int j=0; j<length-p-1; j++){
            if(song[j] > song[j+1]){
                temp = song[j+1];
                song[j+1] = song[j];
                song[j] = temp;
            }
        }
        }
        
        for(int l=0; l< length; l++ ){
            if(song[l] == value){
                printf("%d\n", l+1);
                break;
            }
        }
        
        t--;
    }
}

