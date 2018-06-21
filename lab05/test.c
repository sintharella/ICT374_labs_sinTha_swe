// #include <unistd.h>
//
// int main() {
//   execl("/bin/ls", "ls", "-lt", (char *)0);
// }

#include <sys/types.h>
#include <sys/wait.h>

pid_t wait (int* statloc);
  Return: child process id if OK
  or -1 on error
