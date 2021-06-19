#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char *argv[]) {
	string temp_cmd;
	string path;

	if (argc > 1) {
		path = argv[1];
		cout << path << endl;
		replace(path.begin(), path.end(), '\\', '/');
		path.erase(0, 2);
		cout << path << endl;
		temp_cmd = "snes9x-gtk \""+path+"\"";
		system(temp_cmd.c_str());
	} else {
		cout << "Usage: MaanMagi <Wine ROM path>" << endl;
	}

	return 0;
}
