#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main() {
  // Khai báo danh tính
  string ten_nguoi_vay;
  cout << "Nhap ten nguoi vay: ";
  getline(cin, ten_nguoi_vay);

  string ten_ngan_hang;
  cout << "Nhap ten ngan hang: ";
  getline(cin, ten_ngan_hang);

  int so_tien_vay;
  cout << "Nhap so tien vay: ";
  cin >> so_tien_vay;

  float lai_suat;
  cout << "Nhap lai suat thang (%): ";
  cin >> lai_suat;

  int so_thang;
  cout << "Nhap so thang vay: ";
  cin >> so_thang;

  // Khai bao chi tiêu 
  int so_tien_chi;
  cout << "Nhap so tien chi hang thang: ";
  cin >> so_tien_chi;

  // Flexing độ chăm chỉ
  vector<int> so_gio_lam_viec;
  for (int i = 1; i <= so_thang; i++) {
    int gio_lam_viec;
    cout << "Nhap so gio lam viec thang " << i << ": ";
    cin >> gio_lam_viec;
    so_gio_lam_viec.push_back(gio_lam_viec);
  }

  // Tính toán các thứ
  vector<int> luong(so_thang);
  vector<int> bao_hiem(so_thang);
  vector<int> thu_nhap_chiu_thue(so_thang);
  vector<int> thue(so_thang);
  vector<int> thu_nhap_sau_thue(so_thang);
  vector<int> lai_thang(so_thang);
  vector<int> tong_du_no_dau_thang(so_thang);

  tong_du_no_dau_thang[0] = so_tien_vay;
  for (int i = 0; i < so_thang; i++) {
    // Tính lương
    luong[i] = 0;
    if (so_gio_lam_viec[i] <= 100) {
      luong[i] = so_gio_lam_viec[i] * 12000;
    } else if (so_gio_lam_viec[i] <= 150) {
      luong[i] = 100 * 12000 + (so_gio_lam_viec[i] - 100) * 16000;
    } else if (so_gio_lam_viec[i] <= 200) {
luong[i] = 100 * 12000 + 50 * 16000 + (so_gio_lam_viec[i] - 150) * 20000;
    } else {
      luong[i] = 100 * 12000 + 50 * 16000 + 50 * 20000 + (so_gio_lam_viec[i] - 200) * 25000;
    }

    // Tính bảo hiểm
    bao_hiem[i] = luong[i] * 0.09;

    // Tính thu nhập chịu thuế
    thu_nhap_chiu_thue[i] = luong[i] - bao_hiem[i];

    // Tính thuế
    thue[i] = 0;
    if (thu_nhap_chiu_thue[i] <= 1000000) {
      thue[i] = 0;
    } else if (thu_nhap_chiu_thue[i] <= 1500000) {
      thue[i] = (thu_nhap_chiu_thue[i] - 1000000) * 0.1;
    } else if (thu_nhap_chiu_thue[i] <= 2000000) {
      thue[i] = (1500000 - 1000000) * 0.1 + (thu_nhap_chiu_thue[i] - 1500000) * 0.15;
    } else {
      thue[i] = (1500000 - 1000000) * 0.1 + (2000000 - 1500000) * 0.15 +
                (thu_nhap_chiu_thue[i] - 2000000) * 0.2;
    }

    // Tính thu nhập sau thuế
    thu_nhap_sau_thue[i] = luong[i] - bao_hiem[i] - thue[i];

    // Lại nợ lần nữa
    lai_thang[i] = tong_du_no_dau_thang[i] * lai_suat / 100;

    int thanh_toan_thang = thu_nhap_sau_thue[i] - so_tien_chi;
    tong_du_no_dau_thang[i + 1] = tong_du_no_dau_thang[i] + lai_thang[i] - thanh_toan_thang;
  }

  // Show de result
  cout << endl << "**Thong tin vay ngan hang**" << endl;
  cout << "Ten nguoi vay: " << ten_nguoi_vay << endl;
  cout << "Ten ngan hang: " << ten_ngan_hang << endl;
  cout << "So tien vay: " << so_tien_vay << " dong" << endl;
  cout << "Lai suat thang: " << lai_suat << "%" << endl;
  cout << "So thang vay: " << so_thang << endl;

  cout << endl << "**Bang tinh toan**" << endl;
  cout << "| Thang | So gio lam | Luong | Bao hiem | Thu nhap chiu thue | Thue | Thu nhap sau thue | Lai thang | Tong du no dau thang |" << endl;
  cout << "|-------|------------|-------|----------|--------------------|------|------------------|-----------|----------------------|" << endl;
  for (int i = 0; i < so_thang; i++) {
  cout << "| " << i + 1 << " | " << so_gio_lam_viec[i] << " | " << luong[i] << " | " << bao_hiem[i] << " | " << thu_nhap_chiu_thue[i] << " | " << thue[i] << " | " << thu_nhap_sau_thue[i] << " | " << lai_thang[i] << " | " << tong_du_no_dau_thang[i + 1] << " |" << endl;
}

  // Bao gio het no
  int so_thang_tra_het_no = 0;
  while (tong_du_no_dau_thang[so_thang_tra_het_no] > 0) {
    so_thang_tra_het_no++;
  }

  ofstream file_csv("ket_qua_vay_ngan_hang.csv");
  file_csv << "Ten nguoi vay,Ten ngan hang,So tien vay,Lai suat thang,So thang vay,So gio lam viec,Luong,Bao hiem,Thu nhap chiu thue,Thue,Thu nhap sau thue,Lai thang,Tong du no dau thang" << endl;
  for (int i = 0; i < so_thang; i++) {
    file_csv << ten_nguoi_vay << "," << ten_ngan_hang << "," << so_tien_vay << "," << lai_suat << "," << so_thang << "," << so_gio_lam_viec[i] << "," << luong[i] << "," << bao_hiem[i] << "," << thu_nhap_chiu_thue[i] << "," << thue[i] << "," << thu_nhap_sau_thue[i] << "," << lai_thang[i] << "," << tong_du_no_dau_thang[i + 1] << endl;
  }
  file_csv.close();

  cout << endl << "**So thang tra het no: " << so_thang_tra_het_no << endl;
  cout << "**Luu tru du lieu thanh cong vao file ket_qua_vay_ngan_hang.csv**" << endl;

  return 0;
}


