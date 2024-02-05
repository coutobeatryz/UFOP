public class TestGeometricObjects {
    public static void main(String[] args) {
        Circle circle = new Circle(7.0);
        Rectangle rectangle = new Rectangle(2.5, 8.0);
        Triangle triangle = new Triangle(14.0, 13.0, 15.0);

        circle.displayData();
        System.out.println("Area of the Circle: " + circle.calculateArea());
        System.out.println("Perimeter of the Circle: " + circle.calculatePerimeter());

        System.out.println();

        rectangle.displayData();
        System.out.println("Area of the Rectangle: " + rectangle.calculateArea());
        System.out.println("Perimeter of the Rectangle: " + rectangle.calculatePerimeter());

        System.out.println();

        triangle.displayData();
        System.out.println("Area of the Triangle: " + triangle.calculateArea());
        System.out.println("Perimeter of the Triangle: " + triangle.calculatePerimeter());
    }
}