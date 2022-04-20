using namespace std;

class mahasiswa {
  public:
    void mhs(int a);
  private :
  string matkul;
};
void mahasiswa::mhs(int a){
  if(a>=1){
    mhs(a-1);
    cout<<"Masukan Nama Mata Kuliah : ";
    cin>>matkul;
    }
};