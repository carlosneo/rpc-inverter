/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _INVERTER_H_RPCGEN
#define _INVERTER_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


#define INVERTER_PROG 12345678
#define INVERTER_VERSION 1

#if defined(__STDC__) || defined(__cplusplus)
#define ENVIAR 1
extern  char ** enviar_1(char **, CLIENT *);
extern  char ** enviar_1_svc(char **, struct svc_req *);
extern int inverter_prog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define ENVIAR 1
extern  char ** enviar_1();
extern  char ** enviar_1_svc();
extern int inverter_prog_1_freeresult ();
#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_INVERTER_H_RPCGEN */