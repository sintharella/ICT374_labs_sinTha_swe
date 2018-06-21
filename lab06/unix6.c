#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int COMMAND_LINE_SIZE = 100;

int main(){
  char command[COMMAND_LINE_SIZE];
  pid_t pid;


  while (1) {
      //display a prompt such as "%" or "$"
      printf("$ ");
      // read a line from user and store it in array command
      scanf("%s", command);

      if (command == "bye"){
        break;
      }

      if ((pid = fork()) <  0) {
          perror("fork");
          return 1;
      }
      if (pid==0) { // child
          //load and execute command
          execlp(command, command, (char *)0);
      }
      //wait for the child to finish
  }
}
