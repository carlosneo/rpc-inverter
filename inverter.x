/* addsub.x : definição da interface */
 
#define PROGRAM_NUMBER 12345678
#define VERSION_NUMBER 1
 
/* Definição da interface que será oferecida aos clientes */
 
program INVERTER_PROG {
	version INVERTER_VERSION {
		 string ENVIAR(string) = 1;
	} = VERSION_NUMBER;
} = PROGRAM_NUMBER;

