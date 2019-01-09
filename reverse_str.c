#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* reverseString(char* s) {
    int i = 0, len = strlen( s );
    char *input = malloc( len + 1 );
    char *output = input;
    
    for ( i = len - 1; i >= 0; i--) 
    {
        input[ i] = s[ len -1 -i];
    }
    input[len] = 0;
    
    return output;
}

int main(char argv[])
{
	reverseString("Hello");

	printf("%s\n");
	
	return 0;
}
