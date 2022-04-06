using namespace std;

class output{
	public :
		void cetak (){
			laprak.open("../dummy/out_proses.txt");
			int data[11];
			for(int i=1;i<=11;i++){
				laprak>>data[i];
			}
			laprak.close();
			
			jarak = data[6];
			ongkir = data[7];
			total = data[8];
			diskon = data[9];
			diskon_ongkir = data[10];
			bayar = data[11];
			
			file.open("../dummy/out_output.txt");
			file<<"Nama\t\tJumlah \t Harga satuan"<<endl;
			file<<"================================="<<endl;
			file<<"Ayam Geprek \t "<<data[1]<<" \t 21000"<<endl;
			file<<"Ayam Goreng \t "<<data[2]<<" \t 17000"<<endl;
			file<<"Udang Goreng \t "<<data[3]<<" \t 19000"<<endl;
			file<<"Cumi Goreng \t "<<data[4]<<" \t 20000"<<endl;
			file<<"Ayam Bakar \t "<<data[5]<<" \t 25000"<<endl;	
			file<<"================================="<<endl;
			file<<"total         : "<<total<<endl;
			file<<"ongkir        : "<<ongkir<<endl;
			file<<"================================="<<endl;
			file<<"diskon        : "<<diskon<<endl;
			file<<"diskon ongkir : "<<diskon_ongkir<<endl;
			file<<"======================="<<endl;
			file<<"bayar         : "<<bayar;
		}
		
	private :
		ofstream file;
		ifstream laprak;
		float diskon, total;
		int jarak, ongkir, diskon_ongkir, bayar;
};

