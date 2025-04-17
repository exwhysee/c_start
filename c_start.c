/* include lines tells the C preprocessor to
   search for header files in predefined
   locations, providing unction declarations */

// standard C library nickname is std-lib

// std-lib for printf, etc.
#include <stdio.h>

// std-lib for assigning memory, etc
#include <stdlib.h>

// std-lib for working with string/text
#include <string.h>

// macros are just find-and-replace text before
// code compiles
#define MAX_INPUT 100

// chatgpt generated and edited using vim

const char *avatars =
        "+--------------------------+------------------------+--------+\n"
        "| Name                     | Invention              | Year   |\n"
        "+--------------------------+------------------------+--------+\n"
        "| Guglielmo Marconi        | Radio                  | 1895   |\n"
        "| J. Bardeen, W. Shockley  | Transistor             | 1947   |\n"
        "| John Harington           | Flush Toilet           | 1596   |\n"
        "| Johannes Gutenberg       | Printing Press         | 1440   |\n"
        "| James Watt               | Steam Engine (Improved)| 1765   |\n"
        "| Alessandro Volta         | Electric Battery       | 1800   |\n"
        "| Karl Benz                | Gasoline Car           | 1885   |\n"
        "| Tim Berners-Lee          | World Wide Web         | 1989   |\n"
        "| Alexander Graham Bell    | Telephone              | 1876   |\n"
        "| Louis Pasteur            | Pasteurization         | 1864   |\n"
        "| Cai Lun                  | Papermaking            | 105    |\n"
        "+--------------------------+------------------------+--------+\n";

const char *tay =
        " _____\n"
        "|_   _|_ _ _   _\n"
        "  | |/ _t | | | |\n"
        "  | | (_| | |_| |\n"
        "  |_\\__o_\\__o |\n"
        "           |___/\n";

// chatgpt generated and edited using vim

// Structure to hold the program's options
typedef struct {
    char action[MAX_INPUT];
} Args;

// Function to parse the command line arguments
void parse_args(int argc, char *argv[], Args *args) {
    if (argc < 3) {
        printf("Usage: %s --action [look|alone]\n", argv[0]);
        exit(1);
    }
    if (strcmp(argv[1], "--action") == 0) {
        strcpy(args->action, argv[2]);
    } else {
        printf("Unknown option: %s\n", argv[1]);
        exit(1);
    }
}

int main(int argc, char *argv[]) {
    Args args;
    parse_args(argc, argv, &args);

    // Handle the action based on the argument passed
    if (strcmp(args.action, "look") == 0) {
        printf("don't look");
    } else if (strcmp(args.action, "alone") == 0) {
        printf("don't look");
    } else {
        printf("Invalid action. Use --action [look|alone]\n");
    }

    return 0;
}
