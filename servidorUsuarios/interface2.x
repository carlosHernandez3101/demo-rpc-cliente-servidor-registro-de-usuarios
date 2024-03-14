/*Declaracion de datos a transferir entre el cliente y el servidor*/

/*Declaracion de constantes*/
const MAXCODIGO = 10;
const MAXNOMBRES = 30;
const MAXAPELLIDOS = 30;
const MAXROL = 20;

/*Declaracion de la estructura que permite almacenar los datos de un usuario que desea entrar o salir de las instalaciones*/
struct nodo_usuario{
	char codigo[MAXCODIGO];
	char nombres[MAXNOMBRES];
	char apellidos[MAXAPELLIDOS];
	char rol[MAXROL];	
};

/*Definicion de las operaciones que se pueden realizar*/
program autorizar_usuarios{
	version autorizar_usuarios_version{
		bool registrarUsuarioSistema(nodo_usuario objUsuario)=1;
		nodo_usuario consultarUsuario(string codigo)=2;
	}=1;
}=0x20000001;