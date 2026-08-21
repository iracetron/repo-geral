public class Arrays{

  public static void main(String[] args) {
      
      //armazenar a temperatura diária de 1 ano
      double[] temperaturas = new double[365];
      temperaturas[0] = 31.3;
      temperaturas[1] = 32;
      temperaturas[2] = 33.1;
      temperaturas[3] = 31.1;
      temperaturas[4] = 30.2;

      System.out.println("O valor da temperatura do dia 1 é: " + temperaturas[0]);

      //descobrir o tamanho do array
      System.out.println("O tamanho do array: " + temperaturas.length);

      /*for (int i = 0; i < temperaturas.length; i++){
        System.out.println("O valor da temperatura do dia " + (i+1) + " é: " + temperaturas[i]);
      }*/

      //for melhorado
      for (double temp : temperaturas){
        System.out.println(temp);
      }
      
  }

}