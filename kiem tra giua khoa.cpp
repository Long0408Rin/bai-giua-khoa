#include <iostream>
#include <cmath>
#include <string>
using namespace std;
main()
{
	/*int n;
	cout<< "Nam nay la nam: ";
	cin >> n;
	if(n%4==0){
		cout <<"Nam "<<n<< " la nam nhuan.";
	}
	else{
		cout <<"Nam "<<n<<" la nam khong nhuan.";
	}
	*/
	/*
	string ten;
	int t,l,h;
	float T;
	cout << "Moi nhap ho va ten cua ban: "<<endl;
			getline(std::cin,ten);
	cout << "Moi nhap diem cua 3 mon"<< endl;
	cout << "Toan: "<<endl;
	cin >>t;
	cout <<"Ly: "<<endl;
	cin>>l;
	cout <<"Hoa: "<<endl;
	cin >> h;
	cout <<"Ho va ten sinh vien: "<< ten<<endl;
	T=(t+l+h)/3;
	cout <<"Diem trung binh la: "<<T<<endl;
	if(T>=8){
		cout<<"xep loai xuat sac"<<endl;
		}else if(8>T>=7){
			cout<< "xep loai gioi"<<endl;
		}
			else if(7>T>=6){
				cout << "xep loai kha"<<endl;
			}
				else if(6>T>=5){
				cout << "xep loai kha"<<endl;
			}
				else if(5>T){
				cout << "xep loai kha"<<endl;
		}
		*/
	int n,g;
	cout << "Moi ban nhap vao so: "<<n<<endl;
	cin >> n;
	for(int i=1;i<=n;i++){
			g*=i;
	}
	cout << "gia tri cua giai thua la: "<<g;
}
	

