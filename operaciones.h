/**
* \brief Solicita dos n�meros al usuario y devuelve el resultado de la operacion
* \param resultado es el resultado de la operaci�n
* \return El resultado de la operaci�n
*/
float sumar(float a, float b)
{
    float resultado;
    resultado=a+b;
    return resultado;
}
/**
* \brief Solicita dos n�meros al usuario y devuelve el resultado de la operacion
* \param resultado es el resultado de la operaci�n
* \return El resultado de la operaci�n
*/
float restar(float a, float b)
{
    float resultado;
    resultado=a-b;
    return resultado;
}
/**
* \brief Solicita dos n�meros al usuario y devuelve el resultado de la operacion o un mensaje en caso de no ser posible
* \return El resultado de la operaci�n o "-1" cuando no es posible de realizar
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
* \brief Solicita dos n�meros al usuario y devuelve el resultado de la operacion
* \return El resultado de la operaci�n
*/
 float multiplicar(float a, float b)
 {
     return a*b;
 }
/**
* \brief Solicita un n�mero al usuario y devuelve el resultado de la operacion
* \return El resultado de la operaci�n
*/
 int factorial(int a)
{
int resp;
if(a==1)
return 1;
resp=a* factorial(a-1);
return (resp);
}
