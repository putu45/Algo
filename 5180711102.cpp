#include <iostream>
using namespace std;

struct cabang
{
	char hf;
};
cabang b;
void percabangan(float total)
{
if(total>=81)
{
	b.hf='A';
}
else if (total>=61)
{
	b.hf='B';
}
else if (total>=41)
{
	b.hf='C';
}
else if(total>=11)
{
	b.hf= 'D';
}
else 
{
b.hf='E';
}
cout<<"\nGrade Untuk Nilai Adalah:"<<b.hf;
}
float in(string txt)
{float angka;
cout<<"\nInput Nilai "<<txt<<":";
cin>>angka;
return angka;
}
main()
{
	float uts,uas,tugas,absen,total;
	uts=in ("UTS");
	uas=in("UAS");
	absen=in("Absen");
	tugas=in ("Tugas");
	total=uts*0.2+uas*0.3+tugas*0.15+absen*0.35;
	cout<<"\nTotal Nilai="<<total;
	percabangan(total);
}

