#include <bits/stdc++.h>
using namespace std;

// file ex14.cppからex26.cppを作成する
int main() {
    for (int i = 14; i <= 26; i++) {
        string s = "ex" + to_string(i) + ".cpp";
        ofstream ofs(s);
        ofs << "#include <bits/stdc++.h>\n";
        ofs << "using namespace std;\n";
        ofs << "\n";
        ofs << "int main() {\n";
        ofs << "    \n";
        ofs << "}\n";
    }
}