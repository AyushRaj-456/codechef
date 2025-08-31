#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	// your code goes here
    int t;
    scanf("%d", &t);
    
    while(t>0)
    {
        int n;
        char temp;
        scanf("%d", &n);
        getchar();
        
        char* string = malloc( sizeof(char)*(n+1));
        
        fgets(string, sizeof(char)*(n+1), stdin );
        string[strcspn(string, "\n")] = 0;
        
        for(int i=0; i<n-1; i=i+2){
            
                temp = string[i];
                string[i] = string[i+1];
                string[i+1] = temp;
            
        }
        
        for(int j=0; j<n; j++){
            string[j] = (char)( 'a'+'z' - (int)(string[j]) );
           
        }   
        puts(string);
        free(string);
        
        t--;
    }
}

