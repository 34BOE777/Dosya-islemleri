#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream dosya("bilgi.txt",ios::app);
	dosya<<"yaso dvşnhoıshvıdibcıvincil"<<endl;
	dosya.close();


	ifstream dosya2("bilgi.txt");/*burada önemli olan dosyaya yazmak için dosya diye bir obje oluşturmamız gerekirken
	dosyayı okumak için de dosya2 diye ayriyeten bir obje daha oluşturmamız gerek.*/ 
	if (!dosya)
	 {
	 	cerr<<"Dosya açılmadı!"<<endl;
	 	exit(1);
	 } 
	while(dosya2){	
		string cu;
		getline(dosya2,cu);
		cout<<cu<<endl;
		}
		dosya2.close();
	return 0;
}
