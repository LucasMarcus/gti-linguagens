
package exemplo3;

import java.util.Scanner;

 class Exemplo3 {

    
    public static void main(String[] args) {
     Scanner entrada = new Scanner(System.in);
     double numero1;
     double numero2;
     imprimelinha();
     System.out.println("Digite um valor: ");
     numero1 = entrada.nextDouble();
     imprimelinha();
     System.out.println("Digite outro valor: ");
     numero2 = entrada.nextDouble();
     double resp;
     resp = divide(numero1,numero2);
     imprimelinha();
     System.out.println("A Divisão é: " + resp);
     
    }//fim da função main
    /**
     * Rotina que permite dividir dois numeros
     * @param x numero com casa decimais ou inteiro
     * @param y numero com casas decimais ou inteiro
     * @return  valor com casas decimais
     */
    public static double divide(double x, double y){
    double resp;
    resp = x / y;
    return resp;
    }
    /**
     * Rotina que imprime uma linha divisória
     */
    public static void imprimelinha(){
        System.out.println("---------------------------------");
    }
    }//fim da classe
