//change the below code
// the function below now only works with integers, change it to work with any type
// also fill out the body

template<typename T>
class Calculator {
    private:
        int num1, num2;
    public:
        Calculator(T n1, T n2) {
            num1 = n1;
            num2 = n2;
        }
        int add(T num1,T num2) { return num1+num2;}
        int subtract(T num1,T num2) {return num1-num2;}
        int multiply(T num1,T num2) { return num1*num2;}
        int divide(T num1,T num2) { return num1/num2;}
    };














