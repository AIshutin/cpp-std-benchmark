# cpp-std-benchmark
The benchmark that compares std::max with macros if compilig without flags

!! There was a stupid mistake in approach. Results updated !!

| name          | SegmentTree without std::max | SegmentTree with std::max |
|---------------|------------------------------|---------------------------|
| Run 1 test 1  | 0.535s                       | 0.605s                    |
| Run 2 test 1  | 0.552s                       | 0.603s                    |
| Run 3 test 1  | 0.546s                       | 0.596s                    |
| Median test 1 | 0.546s                       | 0.605s                    |
| Run 1 test 2  | 0.549s                       | 0.596s                    |
| Run 2 test 2  | 0.541s                       | 0.596s                    |
| Run 3 test 2  | 0.536s                       | 0.599s                    |
| Median test 2 | 0.536s                       | 0.596s                    |

Test 1 perfomance lose: 9.8%
Test 2 perfomance lose: 10.7%
