#include <stdio.h>

int main() {
	// your code goes here
    int t;
    scanf("%d", &t);
    
    while(t>0){
        int n,m;
        int in_a_row, howmuch_row;
        scanf("%d%d", &n,&m);
        
        if(m%2 == 0){
            in_a_row = m/2; 
        }else if(m%2 != 0){
            in_a_row = (m-1)/2 + 1;
        }
        
        if(n%2 == 0){
            howmuch_row = n/2;
        }else if(n%2 != 0){
            howmuch_row = (n-1)/2 + 1;
        }
        
        printf("%d\n", howmuch_row*in_a_row);
        
        t--;
    }
}

