  #include <stdio.h>
  #include <stdlib.h>
  #include <readline/readline.h>
  #include <readline/history.h>

  #define MAXARGS 100
  typedef struct command {
    char *cmd;              // string apenas com o comando
    int argc;               // número de argumentos
    char *argv[MAXARGS+1];  // vector de argumentos do comando
  } COMMAND;

  COMMAND parse(char *linha);
  void print_parse(COMMAND com);

  int main() {
    char *linha;
    COMMAND com;

    while (1) {
      if ((linha = readline("my_prompt$ ")) == NULL)
        exit(0);
      if (strlen(linha) != 0) {
        add_history(linha);
        com = parse(linha);
	print_parse(com);
      }
      free(linha);
    }
  }

  COMMAND parse(char *linha) {
    char *token = strtok(linha, " ");
    COMMAND cmd;
    cmd.argv[0] = cmd.cmd = token;
    int i=0;
    while(token!=NULL){
      token = strtok(NULL, " ");
      cmd.argv[++i] = token;
    }
    cmd.argc = i;
    return cmd;
  }

  void print_parse(COMMAND com) {
    if(com.argc==0)
      return;
    if(strcmp("exit",com.cmd)==0)
      exit(0);
    printf("char *cmd = %s\n",com.cmd);
    printf("int argc = %d\n",com.argc);
    int i = 0;
    printf("char *argv[] = ");
    
    for(i;i<com.argc;i++)
      printf("%s ",com.argv[i]);
    printf("\n");
    
  }
