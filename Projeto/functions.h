/* Declara��o das Fun��es relacionadas � �rvore B */

/*******************************************************************************
DESCRI��O: Verifica se os arquivos j� foram criados. Se n�o, cria-os.
           V�lido para os arquivos de �rvore B.
PAR�METROS: AP1 - Arquivo Principal 1
            AP2 - Arquivo Principal 2
*******************************************************************************/
void AbreArquivos(FILE **AP1, FILE **AP2, FILE **BTidx);

/*******************************************************************************
DESCRI��O: Inicializa o Arquivo Principal 1.
           Inicializa os arquivos de �ndices de �rvore B e de Hash.
PAR�METROS: AP1 - Arquivo Principal 1
            BTidx - Arquivo de �ndice de �rvore B
            Hidx - Arquivo de �ndice de Hash
*******************************************************************************/
void InicializaArquivos(FILE **AP1, FILE **BTidx);


/* Declara��o das Fun��es que n�o manipulam arquivos */

/*******************************************************************************
DESCRI��O: Exibe o menu de op��es das poss�veis opera��es do programa.
RETORNO: Retorna a op��o escolhida pelo usu�rio.
*******************************************************************************/
int Menu();
