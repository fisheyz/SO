#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
int main(){

  pid_t pid;
  int i, n;
  scanf("%d",&n);
  // parent // parent code before fork
  for(i=1;i<=n; i++) {
     pid=fork();
     if (pid == 0) {
       printf("Filho %d PID %d PPID %d UID %d \n", i, getpid(), getppid(), getuid());
       return 0;
     } else {
       
     }
   }

// common code after fork
  
   for(i=1;i<=n; i++) {
     wait(NULL);
   }
    
  
}
