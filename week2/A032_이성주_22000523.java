import java.util.Scanner;

class Main {
  public static void main(String[] args) {

    Scanner s = new Scanner(System.in);
    StringBuilder sb = new StringBuilder();
    
    int arr[][] = new int[15][15];
    int count = s.nextInt();
  		while (count-- > 0) {
  			int k = s.nextInt();
  			int n = s.nextInt();
  
  			for (int i = 0; i <= k; i++) {
  				for (int j = 1; j <= n; j++) {
  					if (arr[i][j] == 0) {
  						if (i == 0) {
  							arr[i][j] = j;
  						} else {
  							arr[i][j] = arr[i][j - 1] + arr[i - 1][j];
  
  						}
  					}
  				}
  			}
  
  			sb.append(arr[k][n]).append("\n");
		}

		System.out.println(sb);

  }
}