#include <stdio.h>
#include <string.h>

int main() {
	// your code goes here
    int t;
    scanf("%d", &t);
    
    while(t>0){
        int length, count_one=0, count_zero=0;
        scanf("%d", &length);
        getchar();
        
        char arr[length+1];
        scanf("%s", arr);
        
        for(int j=0; j<length; j++){
            if(arr[j] == '1'){
                count_one++;
            }else if(arr[j] == '0'){
                count_zero++;
            }
        }
        
        
        if(count_zero == 0){
            printf("1\n");
        }else if(count_one == 0){
            printf("0\n");
        }else if(count_zero < count_one){
            printf("%d\n", count_zero + 1);
        }else if(count_zero >= count_one){
            printf("%d\n", count_one);
        }
        
        
        t--;
        
    }
}

