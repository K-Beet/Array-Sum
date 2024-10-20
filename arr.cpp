//practice 1
//  برنامه ای بنویسید که با استفاده از ذخیره سازی چند جمله ای ها به صورت ارایه دو چند جمله ای و طول را از کاربر بگبرد سپس انها را با هم جمغ کند 

#include <iostream>  
using namespace std;  

// تابع برای جمع کردن دو چند جمله ای  
void arrsum(int p1[], int len1, int p2[], int len2, int result[]) {  
    int maxLength = len1 > len2 ? len1 : len2;  
 
    for (int i = 0; i < maxLength; ++i) {  
        if (i < len1) {  
            result[i] += p1[i];  
        }  
        if (i < len2) {  
            result[i] += p2[i];  
        }  
    }  
}  

int main() {  
    int len1, len2;  

    cout << "طول چند جمله‌ای اول را وارد کنید: "<<endl; 
    cin >> len1;  

    cout << "طول چند جمله‌ای دوم را وارد کنید: "<<endl; 
    cin >> len2;  

    int p1[len1];  
    int p2[len2];  
    int result[max(len1, len2)] = {0}; 

    cout << "ضریب‌های چند جمله‌ای اول را وارد کنید: " <<endl;
    for (int i = 0; i < len1; ++i) {  
        cin >> p1[i];  
    }  

    cout << "ضریب‌های چند جمله‌ای دوم را وارد کنید: "<<endl;
    for (int i = 0; i < len2; ++i) {  
        cin >> p2[i];  
    }  

    arrsum(p1, len1, p2, len2, result);  

    cout << "چند جمله‌ای جمع شده: ";  
    for (int i = 0; i < max(len1, len2); ++i) {  
        cout << result[i] << " ";  
    }  
    cout << endl;  

    return 0;  
}

// practice 2
// یک ارایه را به چخ روش هایی میتوان به تابع ارسال کرد 
// int arr[] - int * A,size -
