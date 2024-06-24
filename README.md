DSA LAB 3 PROJECT
-----

Task:
- [ ] main.cpp
- [ ] Sorts-algo.cpp (nhiều file)
- [ ] report for each sort
- [ ] grammar check

Resources:
- [ ] https://stackoverflow.com/questions/14737957/handling-command-line-flags-in-c-c

# 1. Project layout

```
├── README.md
└── src
    ├── Sorts-algo
    │   ├── sort1.cpp
    │   ├── sort2.cpp
    │   ├── sort3.cpp
    │   ├── ...
    │   ├── bubble-sort.cpp
    │   ├── insertion-sort.cpp
    │   └── ...
    ├── generator
    │   ├── random.cpp
    │   └── ...
    ├── algo_mode.cpp
    ├── comp_mode.cpp
    ├── handle_flag.cpp
    └── main.cpp
```

# 2. Project instruction

Please see the following instruction before contributing to the project.

- Project reources:
  - [GG Drive - Shared file](https://drive.google.com/drive/folders/1ARHfGqGj3kW9vfU4NAgbxI0xlBNXLX6B)
  - [Google Sheet - Tracker and tasks](https://docs.google.com/spreadsheets/d/1jMFHndw8d01Gd_p4Hpa7Q8BHr0yV5d8feLV_-OxdTNg/edit?gid=0#gid=0)
  - [Google Docs - Plans](https://docs.google.com/document/d/17BnA6_zkislC-q6fEvfqG6uKU3U3m12dr-STX8jEvsc/edit)

## 2.1. Contribution guide
- When testing or implement new function/program, ***please create a new branch***.
- Branch name format: `feature/your-feature-name` or `bugfix/your-bug-name`, for example: `feature/bubble-sort`.
- After finishing the task, ***please create a pull request*** to merge the branch to the main branch.
- When commiting, ***please use meaningful commit message***.
- When creating a new file, ***please put it in the correct directory***.
- When creating a new function, ***please put it in the correct file***.
- Before pushing, ***please pull the latest code*** to avoid conflict, if any conflict happens, ***please resolve it***.

## 2.2. Coding convention

- Each sorting algorithm should be implemented in a separate file, 1 header file and 1 cpp file.
- Please fully comment your code with documentation -> which will later be put in the report.
- When finding resources please include the **link**, the **auther**, the **usage** immediately in the comment -> which will be later organize and put into report.

## 2.3. How to compile and run

### Compile
```bash
g++ ./sorting/*.cpp ./utilities/*.cpp ./generator/*.cpp ./*.cpp -o main.exe
```

### Run
##### Command 1
```bash
./main.exe -a radix-sort input.txt -both
```

##### Command 2
```bash
./main.exe -a selection-sort 50 -rand -time
```

##### Command 3
```bash
./main.exe -a binary-insertion-sort 70000 -comp
```

##### Command 4
```bash
./main.exe -c heap-sort merge-sort input.txt
```

##### Command 5
```bash
./main.exe -c bubble-sort quick-sort 1000 -nsorted
```


# 3. Project note

- **Please read the instruction carefully before contributing to the project.**
- Example using namespace
```cpp
#include <iostream>

namespace EXAMPLE { // các hàm trong namespace sẽ dc coi như khai báo global, nhưng chỉ khác là muốn gọi thì phải có <tên namespace>::<tên hàm>
    void test() {
        std::cout << "Hello, World!" << std::endl;
    }

    int arr[10];
}

int main() {
    EXAMPLE::test();
    EXAMPLE::a[0] = 123;
    cout << EXAMPLE::a[0];
    return 0;
}
```