import java.util.Scanner;

public class Main1069 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int casosTeste = scanner.nextInt();
        scanner.nextLine();

        for (int i = 0; i < casosTeste; i++) {
            String entrada = scanner.nextLine();
            int diamantesExtraidos = calcularDiamantes(entrada);
            System.out.println(diamantesExtraidos);
        }

        scanner.close();
    }

    public static int calcularDiamantes(String entrada) {
        int contadorDiamantes = 0;
        int diamantesAtuais = 0;

        for (char caractere : entrada.toCharArray()) {
            if (caractere == '<') {
                diamantesAtuais++;
            } else if (caractere == '>' && diamantesAtuais > 0) {
                diamantesAtuais--;
                contadorDiamantes++;
            }
        }

        return contadorDiamantes;
    }
}