/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _INTERFACE2_H_RPCGEN
#define _INTERFACE2_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif

#define MAXCODIGO 10
#define MAXNOMBRES 30
#define MAXAPELLIDOS 30
#define MAXROL 20

struct nodo_usuario {
	char codigo[MAXCODIGO];
	char nombres[MAXNOMBRES];
	char apellidos[MAXAPELLIDOS];
	char rol[MAXROL];
};
typedef struct nodo_usuario nodo_usuario;

#define autorizar_usuarios 0x20000001
#define autorizar_usuarios_version 1

#if defined(__STDC__) || defined(__cplusplus)
#define registrarUsuarioSistema 1
extern  bool_t * registrarusuariosistema_1(nodo_usuario *, CLIENT *);
extern  bool_t * registrarusuariosistema_1_svc(nodo_usuario *, struct svc_req *);
#define consultarUsuario 2
extern  nodo_usuario * consultarusuario_1(char **, CLIENT *);
extern  nodo_usuario * consultarusuario_1_svc(char **, struct svc_req *);
extern int autorizar_usuarios_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define registrarUsuarioSistema 1
extern  bool_t * registrarusuariosistema_1();
extern  bool_t * registrarusuariosistema_1_svc();
#define consultarUsuario 2
extern  nodo_usuario * consultarusuario_1();
extern  nodo_usuario * consultarusuario_1_svc();
extern int autorizar_usuarios_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_nodo_usuario (XDR *, nodo_usuario*);

#else /* K&R C */
extern bool_t xdr_nodo_usuario ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_INTERFACE2_H_RPCGEN */