import java.io.*;
import java.util.*;

class HalloumiBoxes {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        PrintWriter out = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));

        int T = Integer.parseInt(br.readLine());
        while (T-- > 0) {

            StringTokenizer st = new StringTokenizer(br.readLine());
            int n = Integer.parseInt(st.nextToken());
            int k = Integer.parseInt(st.nextToken());

            int[] arr = new int[n];
            st = new StringTokenizer(br.readLine());

            for (int i = 0; i < n; i++) {
                arr[i] = Integer.parseInt(st.nextToken());
            }

            boolean isSorted = true;
            for (int i = 0; i < n - 1; i++) {
                if (arr[i] > arr[i + 1]) {
                    isSorted = false;
                    break;
                }
            }

            if (k == 1 && !isSorted) out.println("NO");
            else out.println("YES");
        }

        out.flush();
    }
}