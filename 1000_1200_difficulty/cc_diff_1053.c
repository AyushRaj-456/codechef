#include <stdio.h>

int main() {
	// your code goes here
    int t;
    scanf("%d", &t);
    while(t>0){
        int size, c1=0,c0=0,c11=0,c00=0;
        scanf("%d", &size);
        
        char s1[100001];
        char s2[100001];
        scanf("%s", s1);
        scanf("%s", s2);
        
        for(int i=0; i<size; i++){
            if(s1[i] == '1'){
                c1++;
            }else if(s1[i] == '0'){
                c0++;
            }
            if(s2[i] == '1'){
                c11++;
            }else if(s2[i] == '0'){
                c00++;
            }
            
        }
        
        if(c1 == c11 && c0 == c00)
        {
            printf("YES\n");
        }else{
            printf("NO\n");
        }
        t--;
    }
    
}