import java.util.*;

class MaxDif{

public static void main(String args[]){
	int n;
	Scanner s=new Scanner(System.in);
	n=s.nextInt();
	System.out.println(n);
	List<Long> l= new ArrayList<Long>();
	for(int i=0;i<n;i++){
		long x = s.nextInt();
		l.add(x);
	}

	long maxDif=Integer.MIN_VALUE;
	long currentMin=l.get(0);
	for(int i=0;i<n;i++){
		if(maxDif<l.get(i)-currentMin){
			maxDif=l.get(i)-currentMin;
		}

		if(currentMin>l.get(i)){
			currentMin=l.get(i);
		}
	}

	System.out.println(currentMin);


}
}