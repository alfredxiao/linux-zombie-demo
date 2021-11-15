#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main () {
  pid_t child_pid;child_pid = fork ();
  if (child_pid > 0) {
    sleep (20);
    exit (0);
  } else {
    sleep (120);
  }

  return 0;
}
