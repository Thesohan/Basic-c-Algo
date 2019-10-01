import java.util.*;
class FindPairSum{
	public static void main(String args[]){
		Hashtable<Integer,Integer> ht=new Hashtable<Integer,Integer>();
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		for(int i=0;i<n;i++){
			int a=sc.nextInt();
			ht.put(a,a);
		}
		int sum=sc.nextInt();
		Set<Integer> set=ht.keySet();
		Hashtable<Integer,Integer> ans=new Hashtable<Integer,Integer>();
		

		for(Integer key:set){
			if(ht.containsKey(sum-key)){
				if(!ans.containsKey(key) && !ans.containsKey(sum-key)){
					ans.put(key,sum-key);
				}
			}
		}
			System.out.println(ans);
	
}
}