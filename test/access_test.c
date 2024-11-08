#include <stdio.h>

#include <acmd.h>

int main(int argc, char** argv) {
    printf("Test whether inputted <argc> and <argv> in 'acmd_process_args' are modified.\n");
    printf("Expected bahaviour: they aren't\n");

    acmd_process_args(0, 0, argc, argv);

    if (argc <= 0)
        return 1;

    printf("argc: %d\n", argc);
    for (int i = 0; i < argc; ++i)
        printf("%s\n", argv[i]);

    return 0;
}

