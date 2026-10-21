#include <iostream>
#include <string>
#include <fstream>

using namespace std;

string copy_json(string json_file) {
    ifstream file(json_file);

    if (!file.is_open()) {
        cerr << "Failed to open file: " << json_file << endl;
        return "";
    }

    string json_contents;
    string line;
    while (getline(file, line))
        json_contents += line;
    
    file.close();
    return json_contents;
}


int main(int argc, char* argv[]) {
    auto lang = "C++";
    const string extension = ".json";

    vector<string> json_filenames;

    for (int count{0}; count < argc; ++ count) {
        string curr_arg = argv[count];

        // identify .json extensions to read
        size_t suffix_pos = curr_arg.rfind(extension);
        if (suffix_pos != string::npos) {
            json_filenames.push_back(curr_arg);
        }
    }

    string json_content;
    for (string &json_file : json_filenames) {
        json_content = copy_json(json_file);
    }

    cout << json_content << endl;

    
    return 0;
}