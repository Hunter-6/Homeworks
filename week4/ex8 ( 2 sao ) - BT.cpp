#include <iostream>
#include <vector>

using namespace std;

int optimal_patient_schedule(vector<int>& patient_times) {
  int total_wait_time = 0;
  int next_patient_start_time = 0;

  for (int i = 0; i < patient_times.size(); ++i) {
    for (int j = 0; j < patient_times.size() - i - 1; ++j) {
      if (patient_times[j] > patient_times[j + 1]) {
        swap(patient_times[j], patient_times[j + 1]);
      }
    }

    total_wait_time += next_patient_start_time - patient_times[i];
    next_patient_start_time += patient_times[i];
  }

  return total_wait_time;
}

int main() {
  vector<int> patient_times = {10, 20, 30, 5};

  int total_wait_time = optimal_patient_schedule(patient_times);
  cout << "Tổng thời gian chờ đợi tối ưu: " << total_wait_time << endl;

  return 0;
}
