import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner s = new Scanner(System.in);

    int start = s.nextInt();
    int end = s.nextInt();
    int count = 0;
    int input = 1;
    int[] num = new int[1000];

    for (int i = 0; i < 1000; i++) {
      num[i] = input;
      count++;
      if (count == input) {
        input++;
        count = 0;
      }
    }

    int result = 0;

    for (int i = start; i <= end; i++) {
      result += num[i - 1];
    }

    System.out.println(result);

  }
}