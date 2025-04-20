#include <iostream>
#include <regex>
#include <string>
using namespace std;

void test1() {
  if (regex_match("subject", regex("(sub)(.*)")))
    cout << "string literal matched\n";

  const char cstr[] = "subject";
  string s("subject");
  regex e("(sub)(.*)");

  if (regex_match(s, e))
    cout << "string object matched\n";

  if (regex_match(s.begin(), s.end(), e))
    cout << "range matched\n";

  cmatch cm;
  regex_match(cstr, cm, e);
  cout << "string literal with " << cm.size() << " matches\n";

  smatch sm;
  regex_match(s, sm, e);
  cout << "string object with " << sm.size() << " matches\n";

  regex_match(s.cbegin(), s.cend(), sm, e);
  cout << "range with " << sm.size() << " matches\n";

  cout << regex_match(cstr, cm, e, regex_constants::match_default) << endl;

  cout << "the matches were: ";
  for (unsigned i = 0; i < sm.size(); ++i) {
    cout << "[" << sm[i] << "] ";
  }
}

void test2() {
  if (regex_match("123456.456", regex("^(?:\\d+(?:\\.\\d+)?)$")))
    cout << "string literal matched\n";
}

bool is_number(const string& s) {
  static const regex number_regex(
      R"(^[-+]?(?:\d+(?:\.\d*)?|\.\d+)(?:[eE][-+]?\d+)?$)");
  return regex_match(s, number_regex);
}

void test3() {
  string test_strings[] = {"123", "-45.67", "3.14e-2",
                           "abc", "12a",    "  42  "};

  for (const auto& str : test_strings) {
    cout << "'" << str << "' is "
         << (is_number(str) ? "a number" : "not a number") << endl;
  }
}

int main() {
  // test1();
  test2();
  // test3();

  cout << endl;
  return 0;
}