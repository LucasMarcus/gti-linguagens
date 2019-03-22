
package exercicio.quadrado.de.um.numero;

import java.util.Scanner;


public class ExercicioQuadradoDeUmNumero {

   
    public static void main(String[] args) {
       Scanner entrada = new Scanner(System.in);
       double valor;
       separacao();
       System.out.println("Digite um valor: ");
       valor = entrada.nextDouble();
       double resp;
       resp = quadrado(valor);
       separacao();
       System.out.println("O quadrado do numero é: " + resp);
       
    }//fim da função main
    /**
     * Rotina que permite achar o quadrado de um numero
     * @param x numero com casas decimais ou inteiro
     * @return valor com casas decimais ou inteiras
     */
    public static double quadrado(double x){
        double resp;
        resp = x * x;
        return resp;
    }
    /**
     * Rotina para imprimir uma separação
     */
    public static void separacao(){
    System.out.println("*******************************");
    }
}//fim da classe
