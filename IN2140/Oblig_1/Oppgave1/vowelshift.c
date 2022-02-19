#include <stdio.h>

int main( int argc, char *argv[] ) {
    if (argc != 3) {
        if ( argc < 3 ) {
        printf(" Too few arguments.\n");
        } else if (argc > 3) {
        printf(" Too many arguemtns\n");
        }

        printf(" Intended usage: \n");
        printf(" vowelshift \"Lorem ipsum dolor sit amet\" a \n");
    
        return -1;
    }
    
    int idx = 0, input_string_max_size = 200;
    char output_string[input_string_max_size];

    char c = argv[1][idx];
    while ( c ) 
    {

        if (idx > input_string_max_size) {
            printf("String too long. Max 200 charecters\n");
            return -1;
        }

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ) {
            output_string[idx] = *argv[2];
        }
        else {
            output_string[idx] = c;
        }

        c = argv[1][++idx];
    }

    output_string[idx] = '\0';
    printf("%s\n", output_string);

    return 0;
}