public class TestContact {
    public static void main(String[] args) {
        Friend friend = new Friend("John Doe", 25, "2000-01-01");

        Acquaintance acquaintance = new Acquaintance("Jane Doe", 30, "jane.doe@example.com");

        Agenda agenda = new Agenda(10);

        agenda.addContact(friend);
        agenda.addContact(acquaintance);

        System.out.println("Contatos adicionados com sucesso!");
    }
}
