class Vehicle {
    private Motor motor;
    private FuelTank tank;
    private Tire LeftFrontTire;
    private Tire RightFrontTire;
    private Tire LeftBackTire;
    private Tire RightBackTire;

    public Vehicle(double powerMotor, double consumptionTaxMotor, double capacitytank,
                   double pressureLeftFrontTire, double pressureRightFrontTire,
                   double pressureLeftBackTire, double pressureRightBackTire) {
        tank = new FuelTank(capacitytank);
        motor = new Motor(powerMotor, consumptionTaxMotor, tank);
        LeftFrontTire = new Tire(pressureLeftFrontTire);
        RightFrontTire = new Tire(pressureRightFrontTire);
        LeftBackTire = new Tire(pressureLeftBackTire);
        RightBackTire = new Tire(pressureRightBackTire);
    }

    public void toFuel(double qnt) {
        tank.fuelling(qnt);
    }

    public void showInformations() {
        System.out.println("Vehicle informations: ");
        System.out.println("Motor power: " + motor.getpower() + " hp, consumption: " + motor.getconsumptionTax() + " km/l");
        System.out.println("Fuel tank - capacity: " + tank.getcapacity() + " liters, actual quantity: " + tank.getFuelQnt() + " liters");
        System.out.println("Back tires: " + LeftFrontTire.getpressure() + " lb, " + RightFrontTire.getpressure() + " lb; Back: " + LeftBackTire.getpressure() + " lb, " + RightBackTire.getpressure() + " lb");
        System.out.println();
    }

    public void avance(double distance) {
        motor.avance(distance);
    }

    public void reducepressureLeftBackTire(double pressureReduced) {
        LeftBackTire.calibrate(-pressureReduced);
    }
}
