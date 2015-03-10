/*******************************************************************************
DESCRI��O: Inicializa o Arquivo Principal 1.
           Inicializa os arquivos de �ndices de �rvore B e de Hash.
PAR�METROS: AP1 - Arquivo Principal 1
            BTidx - Arquivo de �ndice de �rvore B
            Hidx - Arquivo de �ndice de Hash
*******************************************************************************/
void InicializaArquivos(FILE **AP1, FILE **BTidx);


/*******************************************************************************
DESCRI��O: Informa o n�mero de cachorros cadastrados.
PAR�METROS: AP2 - Arquivo Principal 2
RETORNOS: O n�mero de cachorros cadastrados em AP2
*******************************************************************************/
int NumCachorros(FILE **AP2);


/*******************************************************************************
DESCRI��O: Verifica se os arquivos j� foram criados. Se n�o, cria-os.
PAR�METROS: AP1 - Arquivo Principal 1
            AP2 - Arquivo Principal 2
            BTidx - Arquivo de �ndice de �rvore B
*******************************************************************************/
void AbreArquivos(FILE **AP1, FILE **AP2, FILE **BTidx);


/*******************************************************************************
DESCRI��O: Cadastra informa��es de um cachorro no Arquivo Principal 2
PAR�METROS: AP2 - Arquivo Principal 2
*******************************************************************************/
void CadastraCachorro(FILE **AP2);


/*******************************************************************************
DESCRI��O: Verifica se o c�digo j� existe no arquivo.
PAR�METROS: codigo - C�digo a ser verificado
            AP2 - Arquivo Principal 2
RETORNOS: 0 - N�o existe um cachorro com o c�digo passado por par�metro
          1 - Existe um cachorro com o c�digo passado por par�metro
*******************************************************************************/
int ExisteCachorro(int codigo, FILE **AP2);


/*******************************************************************************
DESCRI��O: Exibe o menu de op��es das poss�veis opera��es do programa.
RETORNO: Retorna a op��o escolhida pelo usu�rio.
*******************************************************************************/
int Menu();
