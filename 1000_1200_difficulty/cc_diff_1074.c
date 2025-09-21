#include <stdio.h>

int main() {
	// your code goes here
    /*
    a x more than b = a - b = x
    b y more than c = b - c = y
    (a - c = x + y = -z)
    c z more than a = c - a = z
    */
    
    int t;
    scanf("%d", &t);
    
    while(t>0){
        int x,y,z;
        scanf("%d%d%d", &x,&y,&z);
        
        if( x + y == z || abs(x - y) == z ){
            printf("yes\n");
        }else{
            printf("no\n");
        }
        
        t--;
    }
}

