using namespace std;

class Proses{
	public :
		void getData() {
			data.open("../dummy/out_input.txt");
			int menu[5];
			for(int i = 1; i <=5; i++) {
				data>>menu[i];
			}
			data.close();
			
			aymgprk = menu[1];
			aymgrg = menu[2];
			udang = menu[3];
			cumi = menu[4];
			aymbkr = menu[5];
			
			cout<<"Jasa Delivery atau Tidak (y/n)? ";
			cin>>jasa;
			if(jasa == 'y') {
				cout<<"Masukkan Jarak Rumah (KM) : ";
				cin>>jarak;
				if(jarak < 3) {
					ongkir = 15000;
				} else {
					ongkir = 25000;
				}
			}
			total = (hrg_aymgprk * menu[1]) + (hrg_aymgrg * menu[2])
			 + (hrg_udang * menu[3]) + (hrg_cumi * menu[4])
			 + (hrg_aymbkr * menu[5]);
			 
			if(total <= 25000) {
				diskon = 0;
				diskon_ongkir = 0;
			}else if(total <= 50000) {
				diskon = 0;
				diskon_ongkir = 3000;
			} else if(total <= 150000) {
				diskon = total * 0.15;
				diskon_ongkir = 5000;
			} else if(total > 150000) {
				diskon = total * 0.35;
				diskon_ongkir = 8000;
			}
			 
			bayar = total + ongkir - diskon - diskon_ongkir;
		}
		
		void hasil() {
			file.open("../dummy/out_proses.txt");
			file<<aymgprk<<endl;
			file<<aymgrg<<endl;
			file<<udang<<endl;
			file<<cumi<<endl;
			file<<aymbkr<<endl;
			file<<jarak<<endl;
			file<<ongkir<<endl;
			file<<total<<endl;
			file<<diskon<<endl;
			file<<diskon_ongkir<<endl;
			file<<bayar;
		}
	private :
		ifstream data;
		ofstream file;
		char jasa;
		float diskon, total;
		int aymgprk, aymgrg, udang, cumi, aymbkr;
		int hrg_aymgprk = 21000, hrg_aymgrg = 17000; 
		int hrg_udang = 19000, hrg_cumi = 20000;
		int hrg_aymbkr = 25000;
		int jarak, ongkir, diskon_ongkir, bayar;
		
};
