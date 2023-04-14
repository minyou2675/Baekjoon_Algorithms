import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class boj24723{
    public static void main(String[] args) throws IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int n = Integer.parseInt(br.readLine()); 

        double result = Math.pow(2, n);

        System.out.print((int)result);

    }
}