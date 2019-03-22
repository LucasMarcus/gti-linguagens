package trabalho;

import java.awt.HeadlessException;
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

public class Trabalho {

    public static void main(String[] args) {
        //objeto do tipo Path.get para retonar uma url (endereço) para localizar o
        //arquivo - precisa adiconar biblioteca.
        Path caminho = Paths.get("D:\\Faculdade\\Gestão da Tecnologia da Informação\\Algoritmos C JAVA\\JAVA");
        // o metodo files.readAllByte necessita de tratamento(uma exceção) try pois
        //caso o caminho esteja errado vai dar erro.
        try { 
            //este metodo deve ser criado para ler todos os bytes do arquivo( caminho)
            //retorna um array de bytes contento todo texto.
            byte[] texto = Files.readAllBytes(caminho);
            //passando para Strint para variavel
            String leitura = new String(texto);
           
            System.out.println("vamover \n" + leitura);
            //replaceAll recurso que remove carcteres especiais  em uma String.
            //inserindo exeções de carcteres.
             leitura = leitura.replaceAll("[.,?...!:/-]","");
             
             System.out.println(" verificado \n" +leitura);
              
             imprimeVet(args);
         //necessario criar o catch caso capture algum  erro no caminho.    
        } catch (HeadlessException | IOException erro) {
        }

    }
    public static String[] ordenaVet(String[] vet) {
        System.out.println("**Inicio da ordenação**");
        String aux;//não perder o dado na sobreposição
        for (int i = 0; i < vet.length - 1; i++) {
            System.out.println("Iteração " + i);

            for (int j = 0; j < vet.length - 1 - i; j++) {
                //testar qual posição é maior
                if (vet[j].compareTo(vet[j + 1]) > 0) {

                    System.out.println("Troca: " + vet[j] + " com " + vet[j + 1]);
                    aux = vet[j];
                    vet[j] = vet[j + 1];
                    vet[j + 1] = aux;
                }

            }//for de troca
        }//for de iteração
        System.out.println("Fim da ordenção");
        return vet;

    }//fim da ordenavet
    
     public static void imprimeVet(String[] vet) {

        for (int i = 0; i < vet.length; i++) {
            System.out.print(vet[i] + " | ");

        }
    }
}
