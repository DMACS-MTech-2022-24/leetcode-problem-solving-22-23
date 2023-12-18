class FizzBuzz {
private:
    int n;
    mutex num,f,b,fb;

public:
    FizzBuzz(int n) {
        this->n = n;
        f.lock();
        b.lock();
        fb.lock();
    }

    // printFizz() outputs "fizz".
    void fizz(function<void()> printFizz) {
        for(int i=3;i<=n;i+=3)
        {
            if(i%5!=0)
            {
                f.lock();
                printFizz();
                num.unlock();   
            }
        }
    }

    // printBuzz() outputs "buzz".
    void buzz(function<void()> printBuzz) {
        for(int i=5;i<=n;i+=5)
        {
            if(i%3!=0)
            {
                b.lock();
                printBuzz();
                num.unlock();
            }
        }
    }

    // printFizzBuzz() outputs "fizzbuzz".
	void fizzbuzz(function<void()> printFizzBuzz) {
        for(int i=15;i<=n;i+=15)
        {
            fb.lock();
            printFizzBuzz();
            num.unlock();
        }
    }

    // printNumber(x) outputs "x", where x is an integer.
    void number(function<void(int)> printNumber) {
        for(int i=1;i<=n;++i)
        {
            num.lock();
            if(i%15==0)
            {
                fb.unlock();
            }
            else if(i%3==0)
            {
                f.unlock();
            }
            else if(i%5==0)
            {
                b.unlock();
            }
            else
            {
                printNumber(i);
                num.unlock();
            }
        }
    }
};