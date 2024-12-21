#include <tcframe/spec.hpp>
using namespace tcframe;

class ProblemSpec : public BaseProblemSpec {
protected:
    long long N;
    long long R, C;

    void InputFormat() {
        LINE(N);
    }

    void OutputFormat() {
        LINE(R, C);
    }

    void GradingConfig() {
        TimeLimit(1);
        MemoryLimit(256);
    }

    void Constraints() {
        CONS(1 <= N && N <= 1000000000000);
    }
};

class TestSpec : public BaseTestSpec<ProblemSpec> {
protected:
    void SampleTestCase1() {
        Input({
            "35"
        });
        Output({
            "5 7"
        });
    }

    void SampleTestCase2() {
        Input({
            "17"
        });
        Output({
            "1 17"
        });
    }

    void TestCases() {
        CASE(N = 1);
        CASE(N = 2);
        CASE(N = 3);
        CASE(N = 2520);
        CASE(N = 2999);
        CASE(N = 3000);
        CASE(N = 720720);
        CASE(N = 999983);
        CASE(N = 1000000);
        CASE(N = 293318625600);
        CASE(N = 999999999989);
        CASE(N = 1000000000000);
    }
};
