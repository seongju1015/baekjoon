import java.util.Scanner;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Arrays;

class Main {
  public static void main(String[] args) {
    Scanner s = new Scanner(System.in);

    ArrayList<Integer> array = new ArrayList<Integer>();

    int n = s.nextInt();
    int[] result = new int[n];

    for (int i = 0; i < n; i++) {
      array.clear();
      for (int j = 0; j < 10; j++) {
        array.add(s.nextInt());
      }
      Collections.sort(array);
      System.out.println(array.get(7));
    }
  }
}