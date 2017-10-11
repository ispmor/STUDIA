class Zgadywanka{
	Gracz p1;
	Gracz p2;
	Gracz p3;

	public void rozpocznijGre(){
	p1 = new Gracz();
	p2 = new Gracz();
	p3 = new Gracz();

	int typp1 = 0;
	int typp2 = 0;
	int typp3 = 0;

	boolean p1odgadl = false;
	boolean p2odgadl = false;
	boolean p3odgadl = false;

	int liczbaOdgadywana = (int) (Math.random() * 10);
	System.out.println("Myślę, że to liczba od 0 do 9...");

	while(true){
	System.out.println("Należy wytypować liczbę: " + liczbaOdgadywana );

	p1.zgaduj();
	p2.zgaduj();
	p3.zgaduj();

	typp1 = p1.liczba;
	System.out.println("Gracz 1 wytypował liczbe: " + typp1);

	typp2 = p2.liczba;
	System.out.println("Gracz 2 wytypował liczbe: " + typp2);

	typp3 = p3.liczba;
	System.out.println("Gracz 3 wytypował liczbe: " + typp3);

	if(typp1 == liczbaOdgadywana){
		p1odgadl = true;
	}
	if(typp2 == liczbaOdgadywana){
		p2odgadl = true;
	}
	if(typp3 == liczbaOdgadywana){
		p3odgadl = true;
	}
	if(p1odgadl || p2odgadl || p3odgadl) {
		System.out.println("Mamy zwycięzce!");
		System.out.println("Czy Gracz 1 odgadł? " + p1odgadl);
		System.out.println("Czy Gracz 2 odgadł? " + p2odgadl);
		System.out.println("Czy Gracz 3 odgadł? " + p3odgadl);
		System.out.println("Koniec gry!");
		break; 
		}
	else{
		System.out.println("Nikt nie odgadł!");
		}
	}

	}

}
class Gracz{
int liczba = 0;
	public void zgaduj(){
	liczba = (int) (Math.random() * 10);
	System.out.println("Typuje liczbe: " + liczba);
	}

}
class StarterGry{
	public static void main(String[] args){
	Zgadywanka gra = new Zgadywanka();
	gra.rozpocznijGre();
	}

}
