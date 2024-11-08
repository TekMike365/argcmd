#ifndef ARGCMD_H
#define ARGCMD_H

#define ACMD_OK 0

struct ACmd {
    const char sid;
    const char* lid;
    const int argc;
    int (*exec)(int argc, const char** argv);
};

struct ACmdSetup {
    const char sflag;
    const char* lflag;
};

extern struct ACmdSetup acmd_setup;

const char* acmd_error_msg(int err);
int acmd_process_args(int argc, char** argv, int cmdc, const struct ACmd* cmdv);

#endif
