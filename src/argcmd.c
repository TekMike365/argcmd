#include "argcmd.h"

struct ACmdSetup acmd_setup = {
    .sflag = '-',
    .lflag = "--"
};

#include <stdio.h>

const char* acmd_error_msg(int err) {
    switch(err) {
    case ACMD_OK: return "OK.";
    }
    return "Message not supplied.";
}

char* pop_arg(int* argc, char*** argv) {
    if (*argc <= 0)
        return "";
    (*argc)--;
    return *((*argv)++);
}

int acmd_process_args(int argc, char** argv, int cmdc, const struct ACmd* cmdv) {
    printf("Processing arguments...\n");

    while (argc > 0) {
        char* arg = pop_arg(&argc, &argv);
    }

    return 0;
}
