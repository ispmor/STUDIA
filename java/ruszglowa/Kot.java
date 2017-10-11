class Kot{
	String imie;

	public static void main(String[] args){
	Kot k1 = new Kot();
	k1.miaucz();
	k1.imie = "Puszek";

	Kot[] koty = new Kot[3];
	koty[0] = new Kot();
	koty[1] = new Kot();
	koty[2] = k1;

	koty[0].imie = "Mruczek";
	koty[1].imie = "Pierdziuch";

	System.out.println(koty[0].imie);
	
	int x=0;
	while(x<koty.length){
	koty[x].miaucz();
	x = x+1;	
	}
		

	}

	public void miaucz(){
		System.out.println( imie + " miauczy: miau miauuu!");
	
	}

}
