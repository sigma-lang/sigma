#include <stdlib.h>
#include <stdio.h>
#include <getopt.h>

float compilerVersion = 1.0;

void print_usage(void);
void print_logo(void);
void print_help(void);
void print_version(void);

int main(int argc, char **argv) {
    int options;
    while ((options = getopt(argc, argv, "hv")) != -1) {
        switch (options) {
            case 'h':
                print_logo();
                print_usage();
                print_help();
                exit(0);

            case 'v':
                print_logo();
                print_version();
                exit(0);

            default:
                print_usage();
                printf("sigma -h for more information\n");
                exit(2);
        }
    }

    return 0;
}

void print_usage() {
    printf("Usage: sigma [options] <files>\n");
}
void print_logo() {
    printf(
        "         _                         \n"
        "   _____(_)___ _____ ___  ____ _   \n"
        "  / ___/ / __ `/ __ `__ \\/ __ `/  \n"
        " (__  ) / /_/ / / / / / / /_/ /    \n"
        "/____/_/\\__, /_/ /_/ /_/\\__,_/   \n"
        "       /____/                      \n"
        "\n"
        );

}
void print_help() {
    printf(
        "Options:\n"
        "-h              Print the help page\n"
        "-v              Print version information\n"
        );
}
void print_version() {
    printf("Sigma Compiler Version %0.1f\n", compilerVersion);
}
