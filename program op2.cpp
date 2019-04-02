#include <iostream.h>

int main() {
	int n,m;
   float l;
   cout<<"Masukkan tanggal kelahiran anda (n) : "; cin>>n;
   cout<<"Masukkan bulan kelahiran anda (m) : "; cin>>m;
   cout<<"Masukkan tahun kelahiran anda (l), isi 2 digit akhir : ";
   cin>>l;

   n += m;
   cout<<"Nilai n += m "<<n<<endl;
   n -= m;
   cout<<"Nilai n -= m "<<n<<endl;
   n %= m;
   cout<<"Nilai n %= m "<<n<<endl;
   n = m;
   cout<<"Nilai n *= m "<<n<<endl;
   l /= m;
   cout<<"Nilai l /= m "<<l<<endl;
   return(0);
}






