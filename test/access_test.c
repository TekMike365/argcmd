#include <stdio.h>

#include <acmd.h>

int main(int argc, char** argv) {
    printf("Test whether inputted <argc> and <argv> in 'acmd_process_args' are modified.\n");
    printf("Expected bahaviour: they aren't\n");

    acmd_process_args(argc, argv, 0, 0);

    printf("argc: %d\n", argc);
    for (int i = 0; i < argc; ++i)
        printf("%s\n", argv[i]);

    return 0;
}

