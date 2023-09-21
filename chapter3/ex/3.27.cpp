int txt_size() { return 42; }

int main() {
  // env :clang++16
  unsigned buf_size = 1024;
  int ia[buf_size];
  int ia1[4 * 7 - 14];

  int ia2[txt_size()];

  //! char st[11] = "fundamental";
}
