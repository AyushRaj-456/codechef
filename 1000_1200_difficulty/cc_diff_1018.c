#include <stdio.h>

int main() {
	// your code goes here
    int t;
    scanf("%d", &t);
    
    while(t>0){
        int n, check=0;
        scanf("%d", &n);
        int equal;
        int arr[2*n];
        
        
        for(int i=0; i<2*n; i++){
            scanf("%d", &arr[i]);
            equal=0;
            if(i>=1){
                for(int j=i-1; j>=0; j--){
                    if(arr[i] == arr[j]){
                           equal++;
                        if(equal > 1){
                            check++;
                            break;
                            } // 2nd if
                       } // if for equal
                } // loop j
                
                
            } // 1st if close
        } // loop i
        if(check == 0){
            printf("yes\n");
        }else{
            printf("no\n");
        }
        
        t--;
    }
}
//codechef candies problem