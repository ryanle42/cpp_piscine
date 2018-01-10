#include <iostream>
#include <fstream>
#include <string>

int main( int argc, char **argv ) {
  if (argc == 4) {
    unsigned int i;
    std::string search = argv[2];
    std::string replace = argv[3];
    std::string output = "";
    std::string tmp;
    std::ifstream ifs(argv[1], std::ifstream::in);

    char c = '\0';
    while (c != EOF) {
      i = 0;
      tmp = "";
      while (c != EOF && i < search.length()) {
        c = ifs.get();
        if (c != EOF) {
          tmp += c;
        }
        if (c != EOF && search[i] != c) {
          output += tmp;
          break ;
        }
        i++;
      }
      if (c != EOF && i >= search.length()) {
        output += replace;
      }
    }
    ifs.close();
    std::string outfileName = argv[1];
    std::ofstream ofs(outfileName + ".replace");
    ofs << output;
    ofs.close();
    return 0;
  }
}