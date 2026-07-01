# Student Management System

A console-based C++ application for managing student records with file-based persistence.

## Features

- Add new student records (ID, name, age, course)
- Search for students by ID
- Display all stored student records
- Persistent data storage using text files
- Simple text-based menu interface

## Tech Stack

- **Language:** C++ (C++17)
- **Build System:** CMake 4.3.3 (optional)
- **Compiler:** GCC

## Prerequisites

- A C++17 compatible compiler (MSVC, GCC, or Clang)
- Git (for cloning the repository)
- CMake (optional, for build configuration)

## Installation

**Clone the repository:**
```bash
git clone https://github.com/your-username/Student-Management-System.git
cd Student-Management-System
```

**Option 1 - Direct compilation (recommended):**
```bash
g++ main.cpp -o management.exe
```

**Option 2 - Using CMake:**
```bash
cmake -S . -B build
cmake --build build --config Release
```

## Usage

Run the executable:
```bash
./management.exe
```

You will see a menu:
```
1. Add Student
2. Update Student
3. Search Student
4. Display All
5. Delete Student
6. Exit
```

Student records are stored in `students.txt` using the format: `id|name|age|course`

## Contributing

1. Fork the repository
2. Create a feature branch (`git checkout -b feature/your-feature`)
3. Commit your changes (`git commit -m "Add your feature"`)
4. Push to the branch (`git push origin feature/your-feature`)
5. Open a Pull Request

## License

This project is currently licensed under MIT Lincense.
