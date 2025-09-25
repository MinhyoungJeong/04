//
//  main.c
//  week4
//
//  Created by 정민형 on 9/25/25.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]) {
    
    int x;
    int y;
    
    printf("Input Two Integars : ");
    scanf("%i %i",&x,&y);
    
    printf("+ result = %i\n", x+y);
    printf("- result = %i\n", x-y);
    printf("* result = %i\n", x*y);
    printf("/ result = %i\n", x/y);
    printf("%% result = %i\n", x%y);
    
    system("PAUSE");
    return 0;
}
