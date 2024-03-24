#include <iostream>
#include <string>

using namespace std;

string number_to_english(int num) {
    if (num == 0) {
        return "zero";
    }

    // List 1
    string ones[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten",
                     "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};

    // List 2
    string tens[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

    // List 3
    string hundreds[] = {"", "one hundred", "two hundred", "three hundred", "four hundred", "five hundred",
                         "six hundred", "seven hundred", "eight hundred", "nine hundred"};

    // negative reader
    if (num < 0) {
        return "negative " + number_to_english(-num);
    }

    // from 1 to 999
    if (num < 1000) {
        if (num < 20) {
            return ones[num];
        } else if (num < 100) {
            return tens[num / 10] + ((num % 10 != 0) ? " " + ones[num % 10] : "");
        } else {
            return hundreds[num / 100] + ((num % 100 != 0) ? " and " + number_to_english(num % 100) : "");
        }
    }

    // from 1000 to 999999
    else if (num < 1000000) {
        return number_to_english(num / 1000) + " thousand" + ((num % 1000 != 0) ? " " + number_to_english(num % 1000) : "");
    }

    // from 1.000.000 to 999.999.999
    else if (num < 1000000000) {
        return number_to_english(num / 1000000) + " million" + ((num % 1000000 != 0) ? " " + number_to_english(num % 1000000) : "");
    }

    else {
        return "Out of range";
    }
}

int main() {
    int num;
    cout << "Nhap so tu -999,999,999 den 999,999,999: ";
    cin >> num;
    cout << number_to_english(num) << endl;
    return 0;
}
