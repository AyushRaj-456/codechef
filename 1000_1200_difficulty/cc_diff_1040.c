#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
	// your code goes here
    int t;
    scanf("%d", &t);
    
    while(t>0){
        
        int length, print_yes = 1;
        scanf("%d", &length);
        char string[length+1];
        scanf("%s", string);
        //puts(string);
    
        int alphabets[26];
        for(int i=0; i<26; i++){
            alphabets[i] = 0;
        }
        
    /*    if(length == 1){
            printf("NO\n");
            print_yes = 0;
        }
        *?
        
        for(int i=0; i<length; i++){
            alphabets[ (int)(string[i]) - 97 ]++; 
        }
    
        for(int j=0; j<26; j++){
            if(alphabets[j] % 2 != 0){
                printf("NO\n");
                print_yes = 0;
                break;
            }
        }
        
        if(print_yes == 1){
            printf("YES\n");
        }
        t--;
    }
}

