/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "inverter.h"
#include <stdio.h>
	 
main(int argc, char **argv){
	/* Declaracao das variaveis */	 
	 CLIENT *clnt;
	 char *result;
	 char *server;
	 char *texto;
	 
	 server = argv[1];
	 texto = argv[2];
	
	 /* Cria um cliente usado para chamar INVERTER_PROG no servidor */
	 clnt = clnt_create(server, INVERTER_PROG, INVERTER_VERSION, "udp");

	 if (clnt == (CLIENT *)NULL) {
	 /* Nao pode estabilizar conexao com o servidor. */
	 printf (" Erro clnt_create" );
	 clnt_pcreateerror(server);
	 fflush (stdout);
	 exit(1);
	 }

	 /* Chamada ao metodo enviar no servidor */
	 result = *(enviar_1(&texto, clnt));

	 if (result == (char *)NULL) {
	 /* Algum erro ocorreu ao se comunicar com o servidor. */
	 printf("Algum erro ocorreu ao se comunicar com o servidor");
	 clnt_perror(clnt, server);
	 exit(1);
	 }

	if (*result == 0) {
	 /* Server nao e capaz de imprimir sua mensagem. */
	 printf(stderr, "%s: Server nao e capaz de imprimir sua mensagem\n",argv[0]);
	 exit(1);
	 }
 	 
	 /* Imprimir mensagens no console */
	 printf("Mensagem Enviada: %s\n",texto);
	 printf("Mensagem Invertida: %s\n\n", result);
	 
	 /*Destroi cliente*/
	 clnt_destroy( clnt );
	 exit(0);
	}
