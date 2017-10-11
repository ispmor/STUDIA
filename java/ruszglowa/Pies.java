class Pies{
	int wielkosc;
	String rasa;
	String imie;

	void szczekaj(){
		System.out.print("Chau! Chau!\n");
	}
}

class PiesTester{
	public static void main(String[] args){
	Pies p = new Pies();
	
	p.wielkosc = 40;
	p.imie = "Burek";
	p.rasa = "MegaZord";

	p.szczekaj();
	}
}
