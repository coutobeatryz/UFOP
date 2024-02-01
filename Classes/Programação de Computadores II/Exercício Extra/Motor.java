class Motor {
    private double power;
    private double consumptionTax;
    private FuelTank tank;

    public Motor(double power, double consumptionTax, FuelTank tank) {
        this.power = power;
        this.consumptionTax = consumptionTax;
        this.tank = tank;
    }

    public void avance(double distance) {
        if (checkTiresPression()) {
            double consumption = distance / consumptionTax;
            tank.consumeFuel(consumption);
            System.out.println("Avanced " + distance + " km. Distância total percorrida: " + tank.getdistanceTravelled() + " km");
            System.out.println("Combustível restante: " + tank.getFuelQnt() + " litros");
        } else {
            System.out.println("A pressão de pelo menos um Tire está abaixo de 20 lb. consumption aumentado em 30.");
            double consumption = distance / (consumptionTax - 30);
            tank.consumeFuel(consumption);
            System.out.println("Avançou " + distance + " km. Distância total percorrida: " + tank.getdistanceTravelled() + " km");
            System.out.println("Combustível restante: " + tank.getFuelQnt() + " litros");
        }
    }

    private boolean checkTiresPression() {
        // Lógica para verificar a pressão dos Tires (assumindo que existe alguma implementação lógica aqui)
        return true;
    }

    public double getpower() {
        return power;
    }

    public double getconsumptionTax() {
        return consumptionTax;
    }
}
