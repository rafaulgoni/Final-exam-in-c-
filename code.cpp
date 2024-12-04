#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int A[N];

    // Reading the array elements
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    // Printing the array in reverse order
    for (int i = N - 1; i >= 0; i--) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}


//five number...
// struct Student {
//     string name;
//     int cls;
//     char section;
//     int id;
//     int math_marks;
//     int eng_marks;
// };

// bool compare(const Student &a, const Student &b) {
//     if (a.eng_marks == b.eng_marks) {
//         if (a.math_marks == b.math_marks) {
//             return a.id < b.id;
//         }
//         return a.math_marks > b.math_marks;
//     }
//     return a.eng_marks > b.eng_marks;
// }

// int main() {
//     int N;
//     cin >> N;
//     Student students[N];
    
//     for (int i = 0; i < N; ++i) {
//         cin >> students[i].name >> students[i].cls >> students[i].section >> students[i].id >> students[i].math_marks >> students[i].eng_marks;
//     }
    
//     sort(students, students + N, compare);
    
//     for (int i = 0; i < N; ++i) {
//         cout << students[i].name << " " << students[i].cls << " " << students[i].section << " " << students[i].id << " " << students[i].math_marks << " " << students[i].eng_marks << endl;
//     }
    
//     return 0;
// }


//four number...
// struct Student {
//     string name;
//     int cls;
//     char section;
//     int id;
//     int math_marks;
//     int eng_marks;
//     int total_marks;
// };

// bool compare(const Student l, const Student r) {
//     if (l.total_marks == r.total_marks) {
//         return l.id < r.id;
//     }
//     return l.total_marks > r.total_marks;
// }

// int main() 
// {
//     int N;
//     cin >> N;
//     Student students[N];
    
//     for (int i = 0; i < N; ++i) {
//         cin >> students[i].name >> students[i].cls >> students[i].section >> students[i].id >> students[i].math_marks >>         students[i].eng_marks;
//         students[i].total_marks = students[i].math_marks + students[i].eng_marks;
//     }
    
//     sort(students, students + N, compare);
    
//     for (int i = 0; i < N; ++i) {
//         cout << students[i].name << " " << students[i].cls << " " << students[i].section << " " << students[i].id << " "        << students[i].math_marks << " " << students[i].eng_marks << endl;
//     }
    
//     return 0;
// }


//three number...
// struct Student {
//     string name;
//     int cls;
//     char section;
//     int id;
// };

// int main() {
//     int N;
//     cin >> N;
//     Student students[N];
    
//     for (int i = 0; i < N; ++i) {
//         cin >> students[i].name >> students[i].cls >> students[i].section >> students[i].id;
//     }
    
//     for (int i = 0; i < N / 2; ++i) {
//         swap(students[i].section, students[N - i - 1].section);
//     }
    
//     for (int i = 0; i < N; ++i) {
//         cout << students[i].name << " " << students[i].cls << " " << students[i].section << " " << students[i].id << endl;
//     }
    
//     return 0;
// }


//two numder....
// int main() {
//     string S;
//     getline(cin, S); 
//     string target = "Jessica";
//     bool found = false;

//     S = " " + S + " ";
//     for (size_t i = 0; i <= S.size() - target.size(); ++i) {
//         if (S.substr(i, target.size()) == target &&
//             S[i - 1] == ' ' && S[i + target.size()] == ' ') {
//             found = true;
//             break;
//         }
//     }

//     cout << (found ? "YES" : "NO") << endl;
//     return 0;
// }



// One number....
// int main() {
//     int T;
//     cin >> T;
//     while (T--) {
//         string S, X;
//         cin >> S >> X;
//         size_t pos = 0;
//         while ((pos = S.find(X, pos)) != string::npos) {
//             S.replace(pos, X.length(), "#");
//             pos += 1;
//         }
//         cout << S << endl;
//     }
//     return 0;
// }
