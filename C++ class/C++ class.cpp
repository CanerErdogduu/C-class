

//Caner Erdoğdu

//#include <iostream>

//using namespace std;

//not en sondan calismaya basla  !!! 



//class Araba {
//public:
//	int km;
//	double senelikKm;
//};
//int main() {
//	int toplamKm;
//
//	Araba ford;
//	ford.km = 200;
//	ford.senelikKm = 600;
//
//	toplamKm = ford.km * ford.senelikKm;
//
//	cout << "toplam senelik km si: " << toplamKm;
//}










//class Dikdortgen {		dikdortgenin alanını bulur
//public:
//	int uzunluk;
//	int genislik;
//
//	Dikdortgen(int a, int b) :uzunluk(a), genislik(b){}
//
//	int getalan() {
//		return uzunluk * genislik;
//	}
//};
//int main() {
//	Dikdortgen Dikdortgen1(8, 6);
//	cout << "alan: " << Dikdortgen1.getalan();
//	return 0;
//}








//class Calisanlar {
//private:
//	int maas;
//
//public:
//	void setmaas(int s) {
//		maas = s;
//	}
//	int getmaas() {
//		return maas;
//	}
//};
//int main() {
//	Calisanlar caner;
//	caner.setmaas(100000);
//	cout << "caner erdogdu maasi: " << caner.getmaas();
//}






//class Hayvan {
//public:
//	void ses() {
//		cout << "meow ";
//	}
//};
//int main() {
//	Hayvan kedi;
//	kedi.ses();
//}






//class Calisanlar {
//public:
	//virtual void bilgi() {
		//cout << "calisan bilgisi: ";
	//}
//};
//class Mudur :public Calisanlar {
//public:
//	void bilgi()override {
//		cout << "mudur: Caner Erdogdu " << "maasi: 100000"<<endl;
//	}
//};
//class Calisan1 :public Calisanlar {
//public:
//	void bilgi()override {
//		cout << "teknisyen: Ahmet ak"  << "maasi: 50000"<<endl;
//	}
//};
//int main() {
//	Calisanlar* calisan[] = { new Mudur, new Calisan1 };
//	for (int i = 0; i < 2; ++i) {
//		calisan[i]->bilgi();
//	}
//}







//class Araba {				yapici fonksiyon
//public:
//	void model() {
//		cout << "ford";
//	}
//
//};
//class Araba1 {
//public:
//	void model1() {
//		cout << "volvo";
//	}
//};
//class Otomobiller : public Araba, public Araba1 {
//
//};
//int main() {
//	Otomobiller yaptir;
//	yaptir.model();
//	yaptir.model1();
//}







//class Hayvan {
//public:
//	virtual void sesCikar() {
//		cout << "ses cikar ";
//	}
//};
//class Kopek:public Hayvan {
//public:
//	void sesCikar()override {
//		cout << "hawww ";
//	}
//};
//int main() {
//	Hayvan* hayvanlar[] = { new Kopek };
//	for (int i = 0; i < 2; ++i) {
//		hayvanlar[i]->sesCikar();
//	}
//}







//class Kedi {				yapici methot
//public:
//	void sescikar() {
//		cout << "meow ";
//	}
//};
//class Kopek {
//public:
//	void sescikar() {
//		cout << "haww";
//	}
//};
//int main() {
//	Kopek kopek1;
//	Kedi kedi1;
//	kopek1.sescikar();
//	kedi1.sescikar();
//	
//}







//class Araba {			baska sekil sınıflandırma 
//public:
//	string model;
//	int km;
//
//	Araba(string a, int b) {
//		model = a;
//		km = b;
//	}
//};
//int main() {
//	Araba Araba1("volvo", 500);
//	cout << "arabanin modeli: " << Araba1.model << " arabanin km si: " << Araba1.km << endl;
//
//}






//
//class Methot {				methot
//public:
//	void selamver() {
//		cout << "merhaba ";
//	}
//};
//int main() {
//	Methot selamlama;
//	selamlama.selamver();
//}






//class Selam {		yapici fonksiyon
//public:
//	Selam() {
//		cout << "merhaba";
//	}
//};
//int main() {
//	Selam selams;
//	return 0;
//}


//void ye() {					fonksiyon
//	cout << "yemek yer";
//}
//int main() {
//	ye();
//}






//class Araba {			voidle cout yapmadan yazma int mainin icine bakiniz
//public:
//	string model;
//	int yılı;
//	int km;
//};
//class Araba1 : public Araba {
//public:
//	void model() {
//		cout<<"aracin modeli: "<<"ford" << endl;
//	}
//	void yılı() {
//		cout <<"aracin yili: " << 2000 << endl;
//	}
//	void km() {
//		cout << "aracin km si: "<<760 << endl;
//	}
//	
//};
//int main() {
//	Araba1 otomobil;
//	otomobil.model();
//	otomobil.yılı();
//	otomobil.km();
//}








//class Hayvan {
//private:
//	string cinsi;
//};
//int main() {
//	Hayvan hayvan1;
//	hayvan1.cinsi;		yazdırmaz cunku private özel
//}






//class Hayvan {		sınıf tanımlama 
//public:
//	string cinsi;
//	string tur;
//	int yas;
//
//};
//int main() {
//	Hayvan hayvan1,hayvan2;
//	
//	hayvan1.tur = "kedi";
//	hayvan1.cinsi = "erkek";
//	hayvan1.yas = 9;
//
//	hayvan2.tur = "kopek";
//	hayvan2.cinsi = "disi";
//	hayvan2.yas = 5;
//
//
//	cout << "hayvanın turu: " << hayvan1.tur << endl;
//	cout << "hayvanın cinsi: " << hayvan1.cinsi << endl;
//	cout << "hayvanın yasi: " << hayvan1.yas << endl;
//
//
//	cout << "hayvanın turu: " << hayvan2.tur << endl;
//	cout << "hayvanın cinsi: " << hayvan2.cinsi << endl;
//	cout << "hayvanın yasi: " << hayvan2.yas << endl;
//}