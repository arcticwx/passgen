#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    printf("How many characters?  ");
    int len;
    scanf("%d", &len);

    const char *letters[255][20] = {"a", "b", "c", "d", "e", "f",
                          "g", "h", "i", "j", "k", "l",
                          "m", "n", "o", "p", "q", "r",
                          "s", "t", "u", "v", "w", "y",
                          "x", "z"};
    
    srand(time(NULL));

    for(int i = 0; i < len; i++){
        char n = rand() % sizeof(letters)-1;
        printf("\n%s", letters[n]);   
    }

    return 0;
}