#include <stdio.h>
#define N 100

typedef struct aluno{
    int matricula;
    float p1;
    float p2;
    float p3;
    float media;
    char nome[N];
} aluno;

int main(){
    
    fscanf(fp, "\%s \%d \%f \%f \%f",
                alunos[i].nome, &alunos[i].matricula, 
                &alunos[i].p1, &aluno[i].p2, &aluno[i].p3);
                
    fprintf(fp, "\%s \%d \%.2f \%.2f \%.2f \%.2f\n"
                alunos[i].nome, alunos[i]matricula,
                alunos[i].p1, alunos[i].p2, alunos[i].p3
                aluno[i].media);
    
    return 0;
}