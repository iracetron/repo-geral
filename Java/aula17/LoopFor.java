public class LoopFor{

  public static void main(String[] args) {
      
      for(int i=0; i < 10; i++){
        System.out.println("i tem valor: " + i);
      }

      for(int i=10; i >= 0; i--){
        System.out.println("i tem valor: " + i);
      }

      //mais de uma variável
      for(int i=0, j=10 ; i < j ; i++, j--){
        System.out.println("i = " + i + "; j = " + j);
      }

      //partes ausentes
      int count = 0;
      for ( ; count < 16; ) {
        System.out.println("valor de count: " + count);
        count += 2;  
      }

      //mesma coisa que
      for(int cont=0; cont < 16; cont+=2){
        System.out.println("valor de cont: " + cont);
      }

      //loop sem corpo
      int soma = 0;
      for(int i = 1; i < 10; soma += i++);
      System.out.println("Valor da soma é " + soma);

  }

}