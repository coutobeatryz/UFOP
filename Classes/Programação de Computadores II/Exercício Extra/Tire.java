class Tire {
    private double pressure;

    public Tire(double pressure) {
        this.pressure = pressure;
    }

    public void calibrate(double pressureAdditional) {
        double newPressure = pressure + pressureAdditional;
        if (newPressure >= 0) {
            pressure = newPressure;
            System.out.println("Tire calibrado. Pressão atual: " + pressure + " lb");
        } else {
            System.out.println("Não é possível calibrar o Tire com pressão negativa.");
        }
    }

    public double getpressure() {
        return pressure;
    }
}
