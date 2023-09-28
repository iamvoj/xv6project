#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(){
    int uptime_sec = uptime();
    printf("Uptime: %d clock ticks\n", uptime_sec);
    exit(0);
}