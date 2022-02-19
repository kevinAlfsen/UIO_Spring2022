#include "the_apple.h"

#include <stdio.h>

int locateworm(char* apple) {

    int idx = 0;

    // Iterate untill 'w' is found, then return the iteration counter
    while ( *(apple + idx) ) {

        if ( *(apple + idx) == 'w' ) {
            return idx;
        }

        idx++;
    }

    // This is only reached if the entire string doesn't contain 'w'
    return 0;
}

int length_of_string(char* string) {
    int len = 0;

    // Iterate through the entire string and return the counter
    while ( *(string + len) ) {
        len++;
    }

    return len;
}

int removeworm(char* apple) {
    int idx = 0;
    int num_removed_chars = 0;

    // Iterate through the string
    while ( *(apple + idx) ) {

        // If any worm character is found, increment counter
        switch ( *(apple + idx) ) {
        case 'w':
            *(apple + idx) = ' ';
            num_removed_chars++;
            break;
        case 'o':
            *(apple + idx) = ' ';
            num_removed_chars++;
            break;
        case 'r':
            *(apple + idx) = ' ';
            num_removed_chars++;
            break;
        case 'm':
            *(apple + idx) = ' ';
            num_removed_chars++;
            break;
        default:
            // Any non-worm character leads here
            // If num_removed_chars is more than 1, we are after the worm and can return
            if (num_removed_chars) {
                return num_removed_chars;
            }
        }

        idx++;
    }

    return 0;
}

int main(void) {
    int located_at = locateworm(apple);
    if (located_at) {
        printf("Found worm at index %i.\n", located_at);
    }

    // Copying apple string to allow it to be changed from removeworm()
    // Copying the string requires us to find the length first
    int apple_length = length_of_string(apple);
    char new_apple[apple_length + 1];

    for (int i = 0; i < apple_length + 1; i++) {
        new_apple[i] = apple[i];
    }  

    int num_removed = removeworm(new_apple);
    if (num_removed) {
        printf("Removed worm from apple. It was %i characters long.\n", num_removed);
        printf("The apple looks like this now : \n %s", new_apple);
    } else {
        printf("No worm to remove...\n");
    }

    return 0;
}