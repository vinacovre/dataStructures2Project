/*******************************************************************************
DESCRI��O: Inicializa o Arquivo Principal 1.
           Inicializa os arquivos de �ndices de �rvore B e de Hash.
PAR�METROS: AP1 - Arquivo Principal 1
            AP2 - Arquivo Principal 2
            BTidx - Arquivo de �ndice de �rvore B
            HASHidx - Arquivo de �ndice de Hash
*******************************************************************************/
void InicializaArquivos(FILE **AP1, FILE **AP2, FILE **BTidx, FILE **HASHidx);


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
            HASHidx - Arquivo de �ndice de Hash
*******************************************************************************/
void AbreArquivos(FILE **AP1, FILE **AP2, FILE **BTidx, FILE **HASHidx);


/*******************************************************************************
DESCRI��O: Cadastra informa��es de um cachorro no Arquivo Principal 2.
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
DESCRI��O: Pergunta o c�digo do cachorro para posteriormente fazer uma opera��o.
PAR�METROS: AP2 - Arquivo Principal 2
RETORNO: C�digo do cachorro
*******************************************************************************/
int PerguntaCodigo(FILE **AP2);


/*******************************************************************************
DESCRI��O: Realiza o cadastro de vacinas.
PAR�METROS: AP1 - Arquivo principal 1
            AP2 - Arquivo principal 2
            BTidx - Arquivo de �ndice de �rvore B
            HASHidx - Arquivo de �ndice de Hash
RETORNO: offset - Byteoffset do cadastro (quando insere) no arquivo.
*******************************************************************************/
int CadastraVacina(FILE **AP1, FILE **AP2, FILE **BTidx, FILE **HASHidx);


/*******************************************************************************
DESCRI��O: Exibe o menu de op��es das poss�veis opera��es do programa.
RETORNO: Retorna a op��o escolhida pelo usu�rio.
*******************************************************************************/
int Menu();


/*******************************************************************************
DESCRI��O: Pergunta se o usu�rio quer deletar os arquivos do projeto. Se a
resposta for 's', os arquivos s�o deletados da mem�ria; caso contr�rio, n�o.
*******************************************************************************/
void DeletarArquivos();


/*******************************************************************************
DESCRI��O: Pergunta a chave a ser procurada (e exibidos seus dados).
RETORNO: Retorna a chave que o usu�rio quer que os dados sejam listados.
*******************************************************************************/
int PerguntaChave();


/*******************************************************************************
DESCRI��O: Pergunta o m�todo de busca e exibi��o dos dados de uma dada chave 
(por Hash ou �rvore B).
RETORNOS: 1 - Hash
          0 - �rvore B
*******************************************************************************/
int ListaDados();
