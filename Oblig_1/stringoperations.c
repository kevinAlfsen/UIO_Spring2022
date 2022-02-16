#include <stdio.h>
#include <stdlib.h>

int ctoi(char c) {
    if ( c >= 'A' && c <= 'Z') { // Big letter
        return c -= ('A' - 1); // Big letter are 32 higher than small letters, so only subtract 64
    } else if ( c >= 'a' && c <= 'z') { // Small letter
        return c -= ('a' - 1); // Small letters start at 97, but we want a = 1, b = 2 and so on.. so subtract 96
    } else if (c == ' ') { //Space
        return 0;
    } else {
        return -1; // Anything else = -1
    }
}

int stringsum (char* s) {
    int sum = 0;
    int current = 0;

    while (*s) { // Iterate thrugh entire string
        current = ctoi(*s); // Store value, so that we don't need to run function twice

        if (current == -1) { // Return immediately if a -1 is found
            return -1;
        }
        
        sum += ctoi(*s);
        s++;
    }

    return sum;
}

int distance_between(char *s, char c) {

    int first_idx = 0;
    int second_idx = 0;

    int occurences = 0;

    int idx = 0;
    while (*(s + idx)) { // Iterate string with idx for enumeration

        if (*(s + idx) == c) {

            if (occurences == 0) {
                first_idx = idx;
            } else {
                second_idx = idx;
            }
            occurences++;

        }
        idx++;
    }

    switch (occurences)
    {
    case 0:
        return -1;
    case 1:
        return 0;
    default:
        return second_idx - first_idx;
    }

}

char *string_between(char *s, char c) {

    int first_occurence_idx = 0;
    int last_occurence_idx = 0;

    int occurences = 0;

    int idx = 0;

    while (*(s + idx)) {

        if (*(s + idx) == c) {
            if (occurences) {
                last_occurence_idx = idx;
            } else {
                first_occurence_idx = idx;
            }
            occurences++;
        }
        idx++;
    }

    switch (occurences)
    {

    case 0:
        return NULL;
    case 1: {
        return malloc(0);
    }
    default: {
        int new_string_length = last_occurence_idx - first_occurence_idx;
        char* new_string = calloc(new_string_length, sizeof(char));

        for (int i = 0; i < new_string_length - 1; i++) {
            new_string[i] = s[first_occurence_idx + i + 1];
        }

        return new_string;
    }

    }
}

void stringsum2(char *s, int *res) {
    *res = stringsum(s);
}