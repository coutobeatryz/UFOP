package ufop;

public class Professor extends Funcionario {
    private String titulacao;
    private String areaPesquisa;

    public Professor(String nome, String endereco, String telefone, String cpf, String ctps, double salario, String titulacao, String areaPesquisa) {
        super(nome, endereco, telefone, cpf, ctps, salario);
        this.titulacao = titulacao;
        this.areaPesquisa = areaPesquisa;
    }
}
