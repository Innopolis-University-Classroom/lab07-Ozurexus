//change the below code
// the function below now only works with integers, change it to work with any type
// also fill out the body

public class Calculator {

    private:
        int num1, num2;  
    public:
        template <typename T>
        Calculator(T n1, T n2) {
            num1 = n1;
            num2 = n2;
        }
        template <typename T>
        int add(T num1,T num2) { return num1+num2;}
        template <typename T>
        int subtract(T num1,T num2) {return num1-num2;}
        template <typename T>
        int multiply(T num1,T num2) { return num1*num2;}
        template <typename T>
        int divide(T num1,T num2) { return num1/num2;}
    };














