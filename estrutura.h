typedef struct erroL
{
	int linha;
	char * erro;
	struct erroL *prox;
}erroLexico, *erroLx;