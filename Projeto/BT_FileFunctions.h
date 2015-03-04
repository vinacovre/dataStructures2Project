/*******************************************************************************
DESCRI��O DA BIBLIOTECA: Essa biblioteca re�ne as fun��es que utlilizam dos
arquivos do projeto. Em outras palavras, � a biblioteca de fun��es relacionadas
a opera��es de main que operam nos arquivos bin�rios. 
--> Relacionados � �rvores B (fun��es indicadas por 'BT_').
*******************************************************************************/

/* Declara��o das Fun��es */
void BT_AbreArquivos(FILE **AP1, FILE **AP2);

/*******************************************************************************
DESCRI��O: Verifica se os arquivos j� foram criados. Se n�o, cria-os.
           V�lido para os arquivos de �rvore B.
PAR�METROS: AP1 - Arquivo Principal 1
            AP2 - Arquivo Principal 2
*******************************************************************************/
void BT_AbreArquivos(FILE **AP1, FILE **AP2)
{
    /* Para AP1 */
    if((*AP1 = fopen("AP1.bin","r+b")) == NULL) /* Se o arquivo n�o existir */
    {
        if((*AP1 = fopen("AP1.bin","w+b")) == NULL) /* Cria o arquivo com w+b */
        {
            printf("Erro em AP1. Abortando...");
            getch();
            return;
        }
        int aux = -1; /* -1 indica que o arquivo (AP1) est� vazio */
        fwrite(&aux, sizeof(int), 1, *AP1);
    }
    else /* Se o arquivo j� existir */
    {
        if((*AP1 = fopen("AP1.bin","w+b")) == NULL) /* Apenas abre para leitura e escrita */
        {
            printf("Erro em AP1. Abortando...");
            getch();
            return;
        }
        rewind(*AP1);
        fread(&header, sizeof(short int), 1, *AP1); /* Pega o Header da �rvore B de AP1 */
    }
    
    /* Para AP2 */
    if((*AP2 = fopen("AP2.bin","r+b")) == NULL) /* Se o arquivo n�o existir */
    {
        if((*AP2 = fopen("AP2.bin","w+b")) == NULL) /* Cria o arquivo com w+b */
        {
            printf("Erro em AP2. Abortando...");
            getch();
            return;
        }
    }
    else /* Se o arquivo j� existir */
    {
        if((*AP2 = fopen("AP2.bin","w+b")) == NULL) /* Apenas abre para leitura e escrita */
        {
            printf("Erro em AP2. Abortando...");
            getch();
            return;
        }
    }
}
