/*
  Exercise 7.57: Write your own version of the Account class.
 */
#ifndef _ACCOUNT_H
#define _ACCOUNT_H

#include <string>

class Account {
public:
  void calculate() { amount += amount * interestRate; }
  static double rate() { return interestRate; }
  static void rate(double newRate) { interestRate = newRate; }

private:
  std::string owner;
  double amount;
  static double interestRate;
  static constexpr double todayRate = 42.42;
  static double initRate() { return todayRate; }
};

inline double Account::interestRate = initRate();

#endif
