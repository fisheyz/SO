#include <stdio.h>
#include <stdlib.h>


int MAXLINE = 99999;

int main(){
  int n, fd[2]; pid_t pid; char buf[MAXLINE];

  if(pipe(fd)<0){/*pipe error*/}
  if((pid=fork()) <0) {/* fork error*/}
  else if (pid > 0){//parent writes to the pipe

    pipe(fd);
    pid=fork();
    if(pid!=0) { //pai
      char *msg1 = "hello world!\n";
      char *msg2 = "Goodbye!\n";
      close(fd[0]);
      write(fd[1], msg1, Strlen(msg1));
      sleep(2);
      write(fd[1], msg2,Strlen(msg2));
      close(fd[1]);
      wait(NULL);
    }else{//filho
      
    close(fd[0]);
    write(fd[1], "hello world\n", 12);
    }else{//child reads from pipe
    close(fd[1]);
    n=read(fd[0], buf, MAXLINE);
    write(STDOUT_FILENO, buf, n);
  }
}
