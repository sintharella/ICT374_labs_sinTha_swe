#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(){
  pid_t pid;
  int waitReturn, statloc;
  pid = fork();

  if (pid == -1){
    printf("Error\n");
  }
  else if (pid == 0){
    printf("I am the child. pid = %d\n", getpid());
    sleep(100);
  }
  else {
    printf("I am the parent. pid = %d\n", getpid());
    waitReturn = wait(&statloc);
    if (waitReturn == pid){
      printf("The child has terminated.\n");
    }
    else{
      printf("Error\n");
    }
    printf("Exit status = %d\n", statloc);
  }

  return 0;
}
