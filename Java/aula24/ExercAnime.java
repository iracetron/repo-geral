public class ExercAnime{

  public static void main(String[] args) {
      
      Anime naruto = new Anime();
      naruto.nome = "Naruto";
      naruto.genero = "Lutinha";
      naruto.numEpisodios = 720;
      naruto.numTemporada = 29;
      naruto.notaMAL = 8.02;

      System.out.println("Informações");
      System.out.println("Nome: " + naruto.nome);
      System.out.println("Gênero: " + naruto.genero);
      System.out.println("Número de Episódios: " + naruto.numEpisodios);
      System.out.println("Número de Temporadas: " + naruto.numTemporada);
      System.out.println("Nota: " + naruto.notaMAL);
  }
}