
package exemplo2;

public class Exemplo2 {


    public static void main(String[] args) {
        int calc;
        //Resultados da soma
        calc = calcula(15, 88);
        System.out.println("A primeira soma é: " + calc);
        calc = calcula(15, 25);
        System.out.println("A segunda soma é: " + calc);
        // Resultados da subtração
        calc = subtrai(30,25);
        System.out.println("A pimeira subtração é: " + calc);
        calc =subtrai(85,75);
        System.out.println("A Segunda subtração é: " + calc);
        //Subtração e Soma pegando valores por codigo diferente do de cima
        int num1 = 50;
        int num2 = 25;
        //Subtração
        calc = subtrai(num1, num2);
        System.out.println("A Subtração é: " + calc);
        //Soma
        calc = calcula(num1, num2);
        System.out.println("A Soma é: " + calc);
        //Chamando valores de outra maneira
        System.out.println("A Soma é: " + calcula(20,8) );
    } // fim da main
   
    /**
     *Rotina que soma dois numeros
     * @param x numero inteiro
     * @param y numero inteiro
     * @return um valor inteiro
     */
    public static int calcula(int x, int y){
        int resposta;
        resposta = x + y;
        return resposta;
    }//fim da função calcula
    
    /**
     *Rotina que subtrai dois numeros
     * @param a numero inteiro
     * @param bnumero inteiro
     * @return um valor inteiro
     */
    public static int subtrai(int a, int b){
        int resposta;
        resposta = a - b;
        return resposta;
    }
}
