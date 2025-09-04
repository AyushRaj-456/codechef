#include <stdio.h>

int main() {
	// your code goes here
    int t;
    scanf("%d", &t);
    
    while(t>0){
        int b1,b2,b3,d,e;
        scanf("%d%d%d%d%d", &b1,&b2,&b3,&d,&e);
        
        int max = b1;
        if(max < b2){ max = b2; }
        if(max < b3){ max = b3; } // i have max
        
        int min = b1;
        if( b2 < min){ min = b2; }
        if( b3 < min){ min = b3; } // now i have min
        
        int mid = b1+b2+b3 - min - max; // mid too
        
        if( (max + mid) <= d && min <= e  ){
            printf("YES\n");
        }else if( (max + min) <= d && mid <= e  ){
            printf("YES\n");
        }else if( (mid + min) <= d && max <= e  ){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
        
        t--;
    }
}

