
#define GOOD_EXAMPLE

#ifndef GOOD_EXAMPE

class Account {

public:
    Account(double balance, int type_of_account) : balance(balance), type_of_account(type_of_account) {}

    void deposit(double amount) {
      balance += amount;
    }
  
    void withdraw(double amount) {
      balance -= amount;
    }

    double getBalance() const {
      return balance;
    }

    double calculateInterest() const {
      if (type_of_account == 1) {

      } else if (type_of_account == 2) {

      } .....
      // LOGIC based on type of account
    }
  private:
    double balance;
    int type_of_account;
};

#else

class Account {
    public:
        virtual void deposit(double balance) = 0;
        virtual void withdraw(double balance) = 0;
        virtual double getBalance() = 0;
        virtual double calculateInterest() = 0;
};

class SavingsAccount : public Account {

    public :
        SavingsAccount(double balance) : balance(balance) {}
        
        void deposit(double amount) override {
            balance += amount;
        }
        
        void withdraw(double amount) override {
            balance -= amount;
        }
        
        double getBalance() override {
            return balance;
        }
        
        double calculateInterest() override {
            return balance * 0.04; // 4% interest rate 
        }
    private:
        double balance; 
};

class FixedDepositAccount : public Account {
    
    public :
        FixedDepositAccount(double balance, int time) : balance(balance) {}
        
        void deposit(double amount) override {
            balance += amount;
        }
        
        void withdraw(double amount) override {
            // Logic to withdraw after certain time
            balance -= amount;
        }
        
        double getBalance() override {
            return balance;
        }
        
        double calculateInterest() override {
            return balance * 0.08; // 8% interest rate 
        }
    private:
        double balance; 
        int time;
};

class CreditCardAccount : public Account {

public:
    CreditCardAccount(double balance, double limit) : balance(balance), limit(limit) {}
    void deposit(double amount) override {
        balance -= amount;
    }
    void withdraw(double amount) override {
        balance += amount; // credit card withdrawal
    }
    double getBalance() override {
        return balance;
    }
    double calculateInterest() override {
        return balance * 0.18; // 18% interest rate
    }

    void increaseLimit(double addon) {
        limit += addon;
    }
private:
    double balance;
    double limit;
};

#endif



