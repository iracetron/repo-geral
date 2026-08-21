public class TesteCarro{

  public static void main(String[] args) {

    Carro van = new Carro();
    van.marca = "Fiat";
    van.modelo = "Ducato";
    van.numPassageiros = 10;
    van.capCombustivel = 100;
    van.consumoCombustivel = 0.2;

    System.out.println(van.marca);
    System.out.println(van.modelo);

    van.exibirAutonomia();

    double qtdCombustivel1 = van.calculaCombustivel(10);
    double qtdCombustivel2 = van.calculaCombustivel(15);
    System.out.println("10km: " + qtdCombustivel1);
    System.out.println("15km: " + qtdCombustivel2);

    Carro fusca = new Carro();
    fusca.marca = "Volkswagen";
    fusca.modelo = "Fusca";
    fusca.numPassageiros = 4;
    fusca.capCombustivel = 30;
    fusca.consumoCombustivel = 0.15;

    System.out.println(fusca.marca);
    System.out.println(fusca.modelo);

    fusca.exibirAutonomia();

    double qtdCombustivel3 = fusca.calculaCombustivel(10);
    double qtdCombustivel4 = fusca.calculaCombustivel(15);
    System.out.println("10km: " + qtdCombustivel3);
    System.out.println("15km: " + qtdCombustivel4);

  }

}