public class Krasomowca{
	public static void main(String[] args){
	//slowniki krasomowcy
	String[] listaSlow1 = {"architektura wielowarstwowa","300000 metrów","rozwiązanie B-do-b","aplikacja kliencka","interfejs internetowy","Graficzny interfejs użytkownika","inteligentna karta","rozwiązanie dynamiczne","sześć sigma","przenikliwość i skuteczność"};
	String[] listaSlow2 = {"zwieksza możliwości","poprawia atrakcyjność oferty", "pomnaża wartość", " p[racowana dla"," bazującay na","podniesiona na wyższy poziom","skierowanej","udostępniona","skoncentrowana na"};
	String[] listaSlow3 = {"procesu","punktu wpisywania","rozwiązania","strategii","paradygmatu","portalu","ofert","witryny","wersji","gwarancja zysku"};
	int lista1Dlugosc = listaSlow1.length;
	int lista2Dlugosc = listaSlow2.length;
	int lista3Dlugosc = listaSlow3.length;

	int rnd1 = (int) (Math.random() * lista1Dlugosc);
	int rnd2 = (int) (Math.random() * lista2Dlugosc);
	int rnd3 = (int) (Math.random() * lista3Dlugosc);

	String zdanie = listaSlow1[rnd1] + " " + listaSlow2[rnd2] + " " + listaSlow3[rnd3];

	System.out.println(zdanie);


	}


}
