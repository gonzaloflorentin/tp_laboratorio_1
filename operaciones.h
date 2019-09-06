/**
* \brief Solicita dos números al usuario y devuelve el resultado de la operacion
* \param resultado es el resultado de la operación
* \return El resultado de la operación
*/
float sumar(float a, float b)
{
    float resultado;
    resultado=a+b;
    return resultado;
}
/**
* \brief Solicita dos números al usuario y devuelve el resultado de la operacion
* \param resultado es el resultado de la operación
* \return El resultado de la operación
*/
float restar(float a, float b)
{
    float resultado;
    resultado=a-b;
    return resultado;
}
/**
* \brief Solicita dos números al usuario y devuelve el resultado de la operacion o un mensaje en caso de no ser posible
* \return El resultado de la operación o "-1" cuando no es posible de realizar
*/
float dividir(float a, float b)
{
    if(b!=0)
    {
        return (float)a/b;
    }else
        {
            printf("No es posible dividir por 0\n");
            return -1;
        }

 }
/**
* \brief Solicita dos números al usuario y devuelve el resultado de la operacion
* \return El resultado de la operación
*/
 float multiplicar(float a, float b)
 {
     return a*b;
 }
/**
* \brief Solicita un número al usuario y devuelve el resultado de la operacion
* \return El resultado de la operación
*/
 int factorial(int a)
{
int resp;
if(a==1)
return 1;
resp=a* factorial(a-1);
return (resp);
}
