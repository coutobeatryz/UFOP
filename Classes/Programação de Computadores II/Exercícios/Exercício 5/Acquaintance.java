/* Implemente a hierarquia de classes definidas a seguir:
Classe Contato: Um Contato possui um nome e uma idade.
Classe Amigo: Um amigo possui como atributo uma data de aniversário, além dos atributos
nome e idade, definidos na classe Contato.
Classe Conhecido: Um conhecido possui como atributo um email, além dos atributos nome
e idade, definidos na classe Contato.
Classe Agenda: Esta classe deve permitir armazenar contatos em um vetor, sejam eles
amigos ou conhecidos. O construtor da classe Agenda deve receber como parâmetro a
quantidade máxima de contatos que a agenda pode armazenar e criar o novo vetor com a
quantidade definida */

public class Acquaintance extends Contact {
    private String email;

    public Acquaintance(String name, int age, String email) {
        super(name, age);
        this.email = email;
    }
}
