import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

public class boj17103{

    public static void main(String[] args) throws IOException{

        BufferedReader br = new BufferedReader (new InputStreamReader(System.in));
        int num = 0;
        num = Integer.parseInt(br.readLine());
        boolean [] lst = new boolean[1000001];

        lst[0] = lst[1] = true;

        for(int i = 2; i < 1001; i++){
            if(!lst[i]){
                int j = 2;
                while (i * j < 1000001){
                    lst[i * j] = true;
                    j ++;
                }
            }
        }

        while(num -- > 0){
            int temp = Integer.parseInt(br.readLine());
            int cnt = 0;
            for (int i = 0; i <= temp/2; i++){
                if(!lst[i] && !lst[temp - i]) cnt++;
            }
            System.out.println(cnt);
        }

        


        

        
    }
}