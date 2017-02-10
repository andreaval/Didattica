/**
 * Calcolo area e perimetro di un rettangolo
 * @version 1.0.0 2017-01-11 17:16
 * @author Andrea Vallorani <andrea@vallorani.org>
 */
import java.util.*;

class AreaPerimetroRettangolo {

    public static void main(String[] args) {
        int b,h,a,p;
        Scanner in = new Scanner(System.in);
        do{
            System.out.print("Inserisci base: ");
            b = in.nextInt(); 
        } while(b<=0);
        do{
            System.out.print("Inserisci altezza: ");
            h = in.nextInt(); 
        } while(h<=0);
        a = b*h;
        p = b*2+h*2;
        System.out.println("Area: "+a);
        System.out.println("Perimetro: "+p);
    }
}