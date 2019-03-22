# cpp-std-benchmark
The benchmark that shows disadvantages of std::max usage.


| name          | SegmentTree without std::max | SegmentTree with std::max |
|---------------|------------------------------|---------------------------|
| Run 1 test 1  | 0.559s                       | 0.605s                    |
| Run 2 test 1  | 0.556s                       | 0.603s                    |
| Run 3 test 1  | 0.549s                       | 0.596s                    |
| Median test 1 | 0.556s                       | 0.605s                    |
| Run 1 test 2  | 0.547s                       | 0.596s                    |
| Run 2 test 2  | 0.544s                       | 0.596s                    |
| Run 3 test 2  | 0.547s                       | 0.599s                    |
| Median test 2 | 0.547s                       | 0.596s                    |

Test 1 perfomance lose: 8.1%
Test 2 perfomance lose: 8.2%
