import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner s = new Scanner(System.in);

    int a = s.nextInt();
    int b = s.nextInt();

    s.close();

    if (a > 0 && b > 0) {
      System.out.println("1");
    }
    if (a < 0 && b > 0) {
      System.out.println("2");
    }
    if (a < 0 && b < 0) {
      System.out.println("3");
    }
    if (a > 0 && b < 0) {
      System.out.println("4");
    }

  }
}