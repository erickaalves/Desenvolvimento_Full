#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct arma {
	char nome[50];
	int dano;
	int durabilidade;
} Arma;

struct persona {
	char nome[50];
	int vida;
	Arma *arma_equipada;
};

Arma* create_arma(char *nome, int dano, int durabilidade) {
	Arma* nova_arma = (Arma*) calloc(1,sizeof(Arma));
	strcpy(nova_arma->nome, nome);
	nova_arma->dano = dano;
	nova_arma->durabilidade = durabilidade;
	return nova_arma;
}

void read_arma(Arma* arma_leitura) {
    if (arma_leitura==NULL){
        printf("Não é possivel ler essa regiao de memoria, nao ha nada  la");
        return;
    }
    else{
	printf("Nome = %s, Dano = %d, Durabilidade = %d\n",
	       arma_leitura->nome,
	       arma_leitura->dano,
	       arma_leitura->durabilidade);
    }
}

void update_arma(Arma* arma_update, char* nome, int dano, int durabilidade){
    strcpy(arma_update-> nome, nome);
    arma_update-> dano = dano;
    arma_update->durabilidade = durabilidade;
}

void delete_arma(Arma** arma_delete){
    free(*arma_delete);
    *arma_delete=NULL;
}

struct persona* create_persona(char *nome, int vida, Arma* arma_equipada) {
	struct persona* nova_persona = (struct persona*) calloc(1, sizeof(struct persona));
	strcpy(nova_persona->nome, nome);
	nova_persona-> vida = vida;
	nova_persona-> arma_equipada = arma_equipada;
	return nova_persona;
}

void read_persona(struct persona *persona_leitura){
    if (persona_leitura->arma_equipada == NULL){
        printf("Nenhuma arma equipada");
    }else {
        printf("Nome = %s, Vida = %d, Arma equipada = %s\n", persona_leitura-> nome, 
                                                             persona_leitura-> vida, 
                                                             persona_leitura-> arma_equipada->nome);
    }
}

void update_persona(struct persona* persona_update, char* nome, int vida, Arma* arma_equipada){
    strcpy (persona_update -> nome, nome);
    persona_update->vida = vida;
    persona_update->arma_equipada=arma_equipada;
}

void delete_persona(struct persona **persona_delete){
    delete_arma(&((*persona_delete)->arma_equipada));
    free(*persona_delete);
    *persona_delete = NULL;
}

int main() {
	Arma* meu_fuzil = create_arma("Fuzil", 100, 1000);
	read_arma(meu_fuzil);
    Arma* minha_awm = create_arma("AWM", 200, 2000);
    read_arma(minha_awm);
	struct persona * new_pessoa = create_persona ("Erick", 100, meu_fuzil);
	read_persona(new_pessoa);
	struct persona *new_dallisson = create_persona ("Dallisson", 100, minha_awm);
	read_persona(new_dallisson);
	update_arma(meu_fuzil,"Fuzil",500,5000);
	read_arma(meu_fuzil);
	update_persona(new_pessoa, "ERICK 2", 200, minha_awm);
	read_persona(new_pessoa);
	update_persona(new_dallisson, "DALLISSON 2", 200, meu_fuzil);
	read_persona(new_dallisson);
	delete_arma(&meu_fuzil);
	read_arma(meu_fuzil);
	
	return 0;
}