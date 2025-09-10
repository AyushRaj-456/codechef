#include <stdio.h>

int main() {
	// your code goes here
    int t;
    scanf("%d", &t);
    
    while(t>0)
    {
        int x,y,z;
        scanf("%d%d%d", &x,&y,&z);
        
        if(y <= x){
            printf("PIZZA\n");
        }else if( x < y && z<= x){
            printf("BURGER\n");
        }else{
            printf("NOTHING\n");
        }
        t--;
    }
}

