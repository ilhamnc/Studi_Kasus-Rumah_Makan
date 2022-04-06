using namespace std;

class Input{
	public :
		void menu() {
			cout<<"= MENU RUMAH MAKAN ="<<endl;
			cout<<"1. Ayam Geprek"<<endl;
			cout<<"2. Ayam Goreng"<<endl;
			cout<<"3. Udang Goreng"<<endl;
			cout<<"4. Cumi Goreng"<<endl;
			cout<<"5. Ayam Bakar"<<endl;
			cout<<"===================================="<<endl;
			cout<<"Masukkan Jumlah Ayam Geprek  : ";
			cin>>a;
			cout<<"Masukkan Jumlah Ayam Goreng  : ";
			cin>>b;
			cout<<"Masukkan Jumlah Udang Goreng : ";
			cin>>c;
			cout<<"Masukkan Jumlah Cumi Goreng  : ";
			cin>>d;
			cout<<"Masukkan Jumlah Ayam Bakar   : ";
			cin>>e;
	
			tulis.open("../dummy/out_input.txt");
			tulis<<a<<endl;
			tulis<<b<<endl;
			tulis<<c<<endl;
			tulis<<d<<endl;
			tulis<<e;
		}
	
	private :
		ofstream tulis;
		int a, b, c, d, e;
};




