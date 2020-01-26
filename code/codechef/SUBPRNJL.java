import java.util.*;
import java.lang.Math;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while(t-- > 0){
            int n = scanner.nextInt();
            long k = scanner.nextLong();
            int[] a = new int[n];
            for(int i = 0; i < n; ++i)
                a[i] = scanner.nextInt();
            long c = 0;
            for(int i = 0;i < n; i++){
                int [] map = new int[2005];
                Arrays.fill(map, 0);
                List<Integer> b = new ArrayList<Integer>();
                for(int j = i; j < n; j++){
                    map[a[j]] += 1;
                    int p = Collections.binarySearch(b,a[j]);
                    if(p < 0){
                        p *= -1;
                        p -= 1;
                    }
                    b.add(p,a[j]);
                    int m = (int)Math.ceil(((double)k)/(j-i+1));
                    int z = (int)Math.ceil(((double)k)/m);
                    if(map[map[b.get(z-1)]] > 0)
                        c += 1;
                }
            }
            System.out.println(c);
        }
    }
}

