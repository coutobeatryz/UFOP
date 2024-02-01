public class TestVehicle {
    public static void main(String[] args) {
        Vehicle myCar = new Vehicle(71, 12, 50, 27, 27, 23, 23);

        myCar.toFuel(30);

        myCar.showInformations();

        myCar.avance(300);

        myCar.reducepressureLeftBackTire(10);

        myCar.showInformations();
    }
}
