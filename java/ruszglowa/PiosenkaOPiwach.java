public class PiosenkaOPiwach{
		public static void main(String[] args){
	int bottles =99;
	String slowo = "bottles";
	
	while(bottles>0){
		if(bottles==1) slowo = "bottle";
		System.out.println(bottles+" "+slowo+" of beer on the wall!");
		System.out.println(bottles+" "+slowo+" of beer!");
		System.out.println("Take one down");
		System.out.println("Pass it around!");
		bottles -= 1;

		if(bottles==0)
			System.out.println("There is no bottle of beer on the wall to pass it around :( :( :(");



		}	
	}

}
