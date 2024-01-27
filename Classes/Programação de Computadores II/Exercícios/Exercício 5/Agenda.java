public class Agenda {
    private Contact[] contacts;
    private int index = 0;

    public Agenda(int maxContacts) {
        contacts = new Contact[maxContacts];
    }

    public void addContact(Contact contact) {
        if (index < contacts.length) {
            contacts[index] = contact;
            index++;
        } else {
            System.out.println("Agenda is full!");
        }
    }
}