 #include <stdio.h>
 #include <stdlib.h>

///matriz bidimensional

int** create_int_matrix(int nrows, int ncols){
    int**m = (int**) calloc(nrows,sizeof(int*));
        //construi um predio e nele varios andares vazios
    for (int i = 0; i<nrows; i++){
        //pra cada andar, ele faz algo, esse é o for
        m[i]=(int*)calloc(ncols, sizeof(int));
        //pra cada andar m[i], aloca pra mim, um inteiro [ap] e retorna o endereco do ap [int] pra mim, 302 por exemplo
        //pra cada m, seria pra cada prédio, sendo que ele pede um retorno de endereço, ap, não prédio, por isso o m[i]
        //sabe aquele prédio n que eu construi, vai em cada andar, cada [i], e constroi aps neles
        //no prédio m, no andar 0, add ncols apartamentos
        //pra cada linha m[i], estamos criando o numero de colunas necessários
    }
    return m;
}

void print_int_matrix(int **m, int nrows, int ncols){
    printf("&m = %p, m=%p\n\n", &m,m);
    for (int i=0;i<nrows;i++){    
        printf("&m[%d] = %p, m[%d]= %p\n\n", i, &m[i], i, m[i]);
        for (int j=0;j<ncols;j++){
            printf ("&m[%d][%d] = %p, m[%d][%d] = %d\n",
                        i,j,&m[i][j], i,j, m[i][j]);
        }
        puts ("");

    }
}


void add_scalar_matrix (int **m, int nrows, int ncols, int escalar){
    for(int i=0; i<nrows; i++){
        for(int j = 0; j<ncols;j++){
            m[i][j]+=escalar;
        }
    }
}

void destroy_matrix(int ***m, int nrows, int ncols){
     for(int i = 0;i<nrows;i++){
        free(m[i]);
    }
    free(m);
    m = NULL;
}

//vai receber dois parametros,um contador de argumentos,  e um vetor de valores de argumentos, valor dos argumentos que voce passou
int main (int argc, char*argv[]){//como é char,vem tudo em string, espaco marca o fim de cada string e o nome do programa quando vai chamar é o primeiro
    if (argc!=3){
        printf("ERROR\n%s nrows ncols escalar\n", argv[0]);//argv[0]retorna o nome do programa, o primeiro arg de todos, o restante é uma interface pra quando der erro pedir todos os elementos ncols e nrown
        exit (-1);//erro básico pra
    }
    
    int nrows = atoi(argv[1]);
    int ncols = atoi(argv[2]);
    int escalar = atoi(argv[3]);

    //alocação da matriz
    int**m = create_int_matrix(nrows, ncols);

    int count = 0;
    for (int i=0; i<nrows; i++){
        for (int j=0;j<ncols;j++){
            m[i][j]=count++;
        }
    }

    print_int_matrix(m,nrows,ncols);
    add_scalar_matrix(m,nrows,ncols,escalar);
    destroy_matrix(m,nrows,ncols);

    return 0;
}