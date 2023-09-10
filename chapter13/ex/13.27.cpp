/*
  Exercise 13.27: Define your own reference-counted version of HasPtr.
 */

#include <string>

class HasPtr {
public:
  HasPtr(const std::string &s = std::string())
      : ps(new std::string(s)), i(0), use(new std::size_t(1)) {}

  HasPtr(HasPtr &rhs) : ps(rhs.ps), i(rhs.i), use(rhs.use) { ++*use; }

  HasPtr &operator=(HasPtr &rhs) {
    ++*rhs.use;

    if (--*use == 0) {
      delete ps;
      delete use;
    }

    ps = rhs.ps;
    i = rhs.i;
    use = rhs.use;

    return *this;
  }

private:
  std::string *ps;
  int i;
  std::size_t *use;
};
