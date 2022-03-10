import java.util.Random;
import java.util.Scanner;
class SortSearch {
    public void selectionSort(int num[]) {
        for (int i = num.length - 1; i > 0; i--) {
            for (int j = 0; j < i; j++) {
                if (num[j] > num[j + 1]) {
                    int t = num[j];
                    num[j] = num[j + 1];
                    num[j + 1] = t;
                }
            }
        }
    }
    public int binSearch (int num[], int x) {
        int mi; 
        int lo = 0;
        int hi = num.length - 1; 
        int loc = -1;
        while (lo <= hi) {
            mi = (lo + hi) / 2;
            if (num[mi] == x) {
                loc = mi;
                break;
            } else if (x < num[mi]) {
                hi = mi - 1;
            } else {
                lo = mi + 1;
            }
        }
        return loc;
    }
}
public class SortSearchProc {
    public static void main(String[] args) {
        Random rnd = new Random();
        Scanner input = new Scanner(System.in);
        SortSearch SortSearch = new SortSearch();
        int [] a = new int[10];
        int n;
        int l;
        System.out.println("Before sort : \n");
        for (int i = 0; i < a.length; i++) {
            a[i] = rnd.nextInt(100);
            System.out.print(a[i] + "\t");
        }
        System.out.println("\n After sort : \n");
        SortSearch.selectionSort(a);
        for (int i = 0; i < a.length; i++) {
            System.out.print(a[i] + "\t");
        }
        System.out.print("\n Input an Integer : ");
        n = input.nextInt();
        l = SortSearch.binSearch(a, n);
        if (l >= 0) {
            System.out.println(n + " appear at a[" + l + "]");
        } else {
            System.out.println(n + " does not appear at a[]");
        }
    }
}