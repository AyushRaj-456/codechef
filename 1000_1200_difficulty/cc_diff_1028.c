#include <stdio.h>

int main() {
	// your code goes here
    int t;
    scanf("%d", &t);
    
    while(t>0){
        int a, b, eaten_l, eaten_b;
        scanf("%d%d", &a, &b);
        eaten_l = 0;
        eaten_b = 0;
        int each_turn = 1;
        
        while(1){
            
            eaten_l = eaten_l + each_turn;
            if(eaten_l > a){
            printf("Bob\n");
            break;
            }
            
            each_turn++;
            
            eaten_b = eaten_b + each_turn;
            if(eaten_b > b){
            printf("Limak\n");
            break;
            }
            
            each_turn++;
                
        }
        
    
        t--;
    }
}

