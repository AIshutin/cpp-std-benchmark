# cpp-std-benchmark
The benchmark that compares std::max with macros.

!! There was a stupid mistake in approach. Results updated !!

| name          | SegmentTree without std::max | SegmentTree with std::max |
|---------------|------------------------------|---------------------------|
| Run 1 test 1  | 1.115s                       | 0.605s                    |
| Run 2 test 1  | 1.126s                       | 0.603s                    |
| Run 3 test 1  | 1.195s                       | 0.596s                    |
| Median test 1 | 1.126s                       | 0.605s                    |
| Run 1 test 2  | 1.112s                       | 0.596s                    |
| Run 2 test 2  | 1.116s                       | 0.596s                    |
| Run 3 test 2  | 1.122s                       | 0.599s                    |
| Median test 2 | 1.116s                       | 0.596s                    |

Test 1 perfomance lose: 187.2%
Test 2 perfomance lose: 186.1%
