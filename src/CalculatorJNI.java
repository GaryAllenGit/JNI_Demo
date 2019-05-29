public class CalculatorJNI {
    static {
        // load the library calculator.dll (Windows) or libcalculator.so (Unixes)
        System.loadLibrary("calculator");
    }

    // Declare native methods receive two doubles and return a double
    private native double add(double n1, double n2);
    private native double sub(double n1, double n2);
    private native double mult(double n1, double n2);
    private native double div(double n1, double n2);


    // Test Driver
    public static void main(String args[]) {
        System.out.println("Java output.  3 + 4 = " + new CalculatorJNI().add(3.0, 4.0));
        System.out.println("Java output.  3 - 4 = " + new CalculatorJNI().sub(3.0, 4.0));
        System.out.println("Java output.  3 * 4 = " + new CalculatorJNI().mult(3.0, 4.0));
        System.out.println("Java output.  3 / 4 = " + new CalculatorJNI().div(3.0, 4.0));
    }
}
