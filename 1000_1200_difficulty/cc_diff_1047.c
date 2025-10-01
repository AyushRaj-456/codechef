#include <stdio.h>
#include <string.h>

int main() {
	// your code goes here
    int t;
    scanf("%d", &t);
    
    while(t>0){
        int talking_pair = 0;
        char string[100001];
        scanf("%s", string);
        int len = strlen(string);
        
        for(int i=0; i<len; i++){
            if(string[i] == '<'){
                string[i] = '>';
            }else if(string[i] == '>'){
                string[i] = '<';
            }
        }
        for(int j=0; j<len-1; j++ ){
            if(string[j] == '>' && string[j+1] == '<'){
                talking_pair++;
            }
            
        }
        
        //puts(string);
        printf("%d\n", talking_pair);
         
        t--;
    }
}

