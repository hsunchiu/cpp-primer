
int return_for_const(int);

int main() {

  int i2;
  int *const p = &i2;

  int const a = return_for_const(10);
}

int retern_for_const(int a) {

  if (a < 0) {
    return -a;
  } else {
    return a;
  }
}
