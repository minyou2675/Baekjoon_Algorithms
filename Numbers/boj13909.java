import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class boj13909{
    public static void main(String[] args) throws IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int n = Integer.parseInt(br.readLine());

        int t = (int) Math.sqrt(n);
        
        System.out.println(t);



    }
}