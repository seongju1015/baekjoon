import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner s = new Scanner(System.in);

    int a = s.nextInt();
    s.close();

    if ((a % 4 == 0 && a % 100 != 0) || (a % 4 == 0 && a % 400 == 0)) {
      System.out.println("1");
    } else {
      System.out.println("0");
    }

  }
}