#include <stdio.h>
#include <stdlib.h>#include <string.h>

int main() {
	// your code goes here
    int t;
    int temp = 0;
    scanf("%d", &t);
    
    while(t>0){
        int n;
        scanf("%d", &n);
        getchar();
        
        char* string = malloc(sizeof(char)*(n+1) );
        char* string2 = malloc(sizeof(char)*(n+1) );
        
        fgets(string, n+1, stdin);
        /*
        
        for(int l=0; l<n; l++){
            string2[l] = 'c';
        }
        */
        int hard = 0;
        int easy = 1;
        for(int i=0; i<n; i++){
            
            if(string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u')
            {
                hard = 0;
                easy =1;
            }else{
                hard++;
                
            }
            if(hard >= 4){
                printf("no\n");
                easy = 0;
                break;
            }
        }
        if(easy == 1){
            printf("yes\n");
        }
        free(string);
        free(string2);
        
        t--;
    }
}

