#include <stdio.h>

int suma(int op1, int op2){
    return (op1+op2);
}
int resta(int op1, int op2){
    return(op1-op2);
}
int multiplica(int op1, int op2){
    return(op1*op2);
}
int divideix(int op1, int op2){
    return(op1/op2);
}
int major(int op1, int op2){
    int result;
    if (op1 > op2){
        result = op1;
    }else{
        result = op2;
    }
}
int main()
{
    int a=10;
    int b=5;

    printf("La suma de %d i %d és %d\n", a,b, suma(a,b));
    printf("La resta entre %d i %d és %d\n", a,b, resta(a,b));
    printf("La multiplicacio de %d i %d es %d\n", a,b, multiplica(a,b));
    printf("La divisio entre %d i %d és %d\n", a,b, divideix(a,b));
    printf("El major entre %d i %d és %d\n", a,b, major(a,b));

}