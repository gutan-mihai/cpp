class Dummy {
public:
    Dummy() {}
    Dummy(int x) : num(x) {}

    void setNum(const int& x) {
        num = x;
    }

    int getNum() {
        return num;
    }

    static int display()
    {
        return 32;
    }

private:
    int num;
};