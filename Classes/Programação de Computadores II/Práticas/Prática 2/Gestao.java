package ufop;

public class Gestao {
    public static void main(String[] args) {
        Aluno aluno = new Aluno("Allison", "123456", 20);

        System.out.println("Student's name: " + aluno.nome);
        System.out.println("Registration plate: " + aluno.matricula);
        System.out.println("Student's age: " + aluno.idade);
    }
}