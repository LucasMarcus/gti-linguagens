package exercício01_imc;

//Função Principal

import java.util.Scanner;

public class Exercício01_IMC {

   
    public static void main(String[] args) {
        
//Chamar Bliblioteca para Entrada de Dados
        Scanner entrada = new Scanner (System.in);
        
//Variáveis
        double peso;
        double altura;
        double resultado;
        
//Receber Dados
        System.out.println("Digite seu Peso: ");
        peso = entrada.nextDouble();
        
        System.out.println("Digite sua Altura: ");
        altura = entrada.nextDouble();
        
//Calcular IMC e Exibir Resultado
        resultado = IMC(peso, altura);
        System.out.println("IMC = " + resultado);
        
//Calcular Avaliação do Resultado
        avaliar(resultado);
               
    }
    
//Função Calcular IMC
    public static double IMC(double p, double a){
        double resp;
        resp = p / (a * a);
        return resp;
    }
    
//Função Avaliar Resultado
    public static double avaliar(double resul){
        if(resul < 15)
        {
            System.out.println("Extremamente abaixo do Peso.");
        }
        if(resul >= 15 && resul < 16)
        {
            System.out.println("Gravemente abaixo do Peso.");
        }
        if(resul >= 16 && resul < 18)
        {
            System.out.println("Abaixo do Peso ideal.");
        }
        if(resul >= 18 && resul < 25)
        {
            System.out.println("Faixa de Peso ideal.");
        }
        if(resul >= 25 && resul < 30)
        {
            System.out.println("Sobrepeso.");
        }
        if(resul >= 30 && resul < 35)
        {
            System.out.println("Obesidade Grau I.");
        }
        if(resul >= 35 && resul < 40)
        {
            System.out.println("Obesidade Grau II.");
        }
        if(resul >= 40)
        {
            System.out.println("Obesidade Grau III.");
        }
        return resul;
    

    
    }
    
}
