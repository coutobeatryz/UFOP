class FuelTank {
    private double capacity;
    private double FuelQnt;
    private double distanceTravelled;

    public FuelTank(double capacity) {
        this.capacity = capacity;
    }

    public void fuelling(double qnt) {
        if (qnt + FuelQnt <= capacity) {
            FuelQnt += qnt;
            System.out.println("Successfully filled. Actual qtd: " + FuelQnt + " liters");
        } else {
            System.out.println("The tank has reached maximum capacity. No further fueling possible.");
        }
    }

    public void consumeFuel(double qnt) {
        if (qnt <= FuelQnt) {
            FuelQnt -= qnt;
            distanceTravelled += qnt;
        } else {
            System.out.println("Insufficient fuel to continue the wanted distance.");
        }
    }

    public double getFuelQnt() {
        return FuelQnt;
    }

    public double getdistanceTravelled() {
        return distanceTravelled;
    }
}
