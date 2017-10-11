class Film{
	String tytul;
	String rodzaj;
	int ocena;

	void odtworz(){
		System.out.println("Odtwarzamy film.");
		}
}

class FilmTester{
	public static void main(String[] args){
	Film pierwszy = new Film();
	pierwszy.tytul = "Miłość szmaragd i kod java";
	pierwszy.rodzaj = "Dramat";
	pierwszy.ocena = 9;
	pierwszy.odtworz();

	Film drugi = new Film();
	drugi.tytul = "Kod Javinci";
	drugi.rodzaj = "Komedia";
	drugi.ocena = 6;

	Film trzeci = new Film();
	trzeci.tytul = "Sen czy Java???";
	trzeci.rodzaj = "akcji";
	trzeci.ocena = -2;
	trzeci.odtworz();
	}


}
