#ifdef _WIN32
#include <stdio.h>
#include <stdlib.h>
#endif

#ifdef linux
#include <stdio.h>
#include <stdlib.h>
#endif

int main(int argc, char *argv[]){
	int i;
	char ping[26], host[3];

#ifdef _WIN32
	if(argc < 1){
		printf("Modo de uso: ./Cweeper 192.168.0\n");
	}
	else{
		for(i = 0; i <= 25; i++){
			sprintf(host, "%d", i);
			sprintf(ping, "ping -n 1 %s.%s", argv[1], host);
			system(ping);
			}
		}
#endif

#ifdef linux
	if(argc < 1){
		printf("Modo de uso: ./Cweeper 192.168.0\n");
	}
	else{
		for(i = 0; i <= 25; i++){
			sprintf(host, "%d", i);
			sprintf(ping, "ping -c 1 %s.%s", argv[1], host);
			system(ping);
			}
		}
#endif
	return(0);
}
