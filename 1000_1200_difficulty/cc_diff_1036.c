#include <stdio.h>

int main() {
	// your code goes here
    int t;
    scanf("%d", &t);
    
    while(t>0){
        int min=0,max = 0;
        char* s1 = malloc( sizeof(char)*200 );
        char* s2 = malloc( sizeof(char)*200 );
        
        scanf("%s", s1);
        scanf("%s", s2);
        
        int i=0;
        while(s1[i] != '\0' && s2[i] != '\0'){
            
            if( (s1[i] != '?' && s2[i] != '?') && (s1[i] != s2[i]) ){
                min++;
            }else if( s1[i] == '?' || s2[i] == '?'){
                max++;
            }
            
            i++;
        }
        
        printf("%d %d\n", min, min + max);
        free(s1);
        free(s2);
        t--;
    }
    
}

