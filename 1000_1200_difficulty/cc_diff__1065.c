#include <stdio.h>

int main() {
	// your code goes here
    int t;
    scanf("%d", &t);
    
    while(t>0){
        int n, no = 0, yes = 0, ind =0;
        scanf("%d", &n);
        
        char string[n];
        scanf("%s", string);
        
        for(int i=0; i<n; i++){
            if(string[i] == 'N'){
                no++;
            }else if(string[i] == 'Y'){
                yes++;
                printf("NOT INDIAN\n");
                break;
            }else if(string[i] == 'I'){
                ind++;  
                printf("INDIAN\n");
                break;
            }
        }
        
        if(no != 0 && yes == 0 && ind == 0){
            printf("NOT SURE\n");
        }
        
        t--;
    }
}

