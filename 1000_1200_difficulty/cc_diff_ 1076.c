#include <stdio.h>

int main() {
	// your code goes here
    int t;
    scanf("%d", &t);
    
    while(t>0){
        int n, x, y;
        scanf("%d%d%d", &n,&x,&y);
        
        int to_right = n-x;
        int to_up = n-y;
        int to_left = x-1;
        int to_down = y-1;
        
        int diagonally_up_right = to_right;
        int diagonally_up_left = to_left;
        
        if(to_right > to_up){
            diagonally_up_right = to_up;
        } 
        
        if(to_left > to_up){
            diagonally_up_left = to_up;
        }
        
        int diagonally_down_left = to_left;
        int diagonally_down_right = to_right;
        
        if(to_left > to_down){
            diagonally_down_left = to_down;
        }
        if(to_right > to_down){
            diagonally_down_right = to_down;
        }
        
        printf("%d\n", to_right + to_left + to_up + to_down + diagonally_up_left + diagonally_down_left+ diagonally_down_right + diagonally_up_right);
        t--;
    }
}

