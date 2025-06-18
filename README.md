# 🏅 Advanced Olympic Games Management System

[![C++](https://img.shields.io/badge/C++-Solutions-blue.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)](https://isocpp.org/)
[![Data Structures](https://img.shields.io/badge/Data-Structures-orange.svg?style=for-the-badge&logo=buffer&logoColor=white)](https://en.wikipedia.org/wiki/Data_structure)
[![STL](https://img.shields.io/badge/STL-Advanced-red.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)](https://en.wikipedia.org/wiki/Standard_Template_Library)
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](LICENSE)

## 📋 Overview

An enhanced C++ application for managing Olympic Games operations with advanced data structures implementation. This project extends the original Olympic Games management system with sophisticated data organization using Binary Search Trees, Priority Queues, and Hash Tables for optimal performance and functionality.

## 🔧 Technologies

![C++](https://img.shields.io/badge/C++-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![BST](https://img.shields.io/badge/BST-Binary_Search_Trees-green?style=for-the-badge)
![Hash Tables](https://img.shields.io/badge/Hash-Tables-yellow?style=for-the-badge)
![Priority Queue](https://img.shields.io/badge/Priority-Queue-purple?style=for-the-badge)
![CMake](https://img.shields.io/badge/CMake-064F8C?style=for-the-badge&logo=cmake&logoColor=white)

## ✨ Enhanced Features

### 🌟 Advanced Data Structures
- **Binary Search Tree (BST)**: Efficient records management with custom iterators
- **Priority Queue**: Staff availability optimization based on working hours
- **Hash Table**: Fast personnel lookup using custom hash functions
- **STL Containers**: Maps for medal tracking and unordered sets for personnel

### 🔍 Core Functionality
- **Records Management**: Track and search Olympic records efficiently
- **Staff Scheduling**: Prioritize staff based on availability and workload
- **Fast Personnel Search**: O(1) average lookup time for staff information
- **Medal Tracking**: Organized medal standings by country and sport
- **Competition Organization**: Enhanced event management with better performance

## 🏆 Key Improvements from Version 1

1. **Records System**: Complete BST implementation for Olympic records
2. **Staff Optimization**: Priority queue for efficient staff allocation
3. **Performance Enhancement**: Hash table for instant personnel lookup
4. **Advanced Iterators**: Multiple traversal methods for BST (In-order, Pre-order, Post-order, Level-order)
5. **Memory Optimization**: Better resource management and data organization

## 🗂️ Project Structure

```
.
├── main.cpp                  # Application entry point
├── jogosol.h/cpp             # Enhanced Olympic Games class with advanced structures
├── funcionario.h/cpp         # Enhanced personnel with availability tracking
├── recorde.h/cpp             # New records management system
├── bst.h                     # Complete BST implementation with iterators
├── modalidade.h/cpp          # Sports disciplines implementation
├── competicao.h/cpp          # Competition management
├── prova.h/cpp               # Event implementation
├── resultado.h/cpp           # Results tracking
├── data.h/cpp                # Date handling utilities
├── menu.h/cpp                # Enhanced user interface
├── util.h/cpp                # General utility functions
└── docs/                     # Documentation
```

## 🚀 Getting Started

### Prerequisites

- C++ compiler with C++11 support
- CMake 3.10 or higher
- STL library support

### Building the Project

1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/advanced-olympic-games-management.git
   cd advanced-olympic-games-management
   ```

2. Build using CMake:
   ```bash
   mkdir build
   cd build
   cmake ..
   make
   ```

3. Run the application:
   ```bash
   ./AdvancedOlympicGamesManagement
   ```

## 📊 Data Structures Implementation

### Binary Search Tree (BST)
```cpp
template <class Comparable>
class BST {
    // Complete implementation with:
    // - Custom iterators (In-order, Pre-order, Post-order, Level-order)
    // - Efficient insertion, deletion, and search operations
    // - Memory management and tree balancing
};
```

### Priority Queue for Staff Management
```cpp
priority_queue<Funcionario> fila;
// Staff ordered by availability (least busy first)
// Enables optimal task assignment
```

### Hash Table for Personnel Lookup
```cpp
struct funcHash {
    int operator() (const Funcionario & f) const {
        return f.getPassaporte() % 7919;  // Custom hash function
    }
};
typedef unordered_set<Funcionario, funcHash, funcHash> tabFunc;
```

## 💾 Advanced Data Management

### Records System
- **Storage**: BST for efficient record organization
- **Search**: O(log n) record lookup by various criteria
- **Traversal**: Multiple iteration methods for different reporting needs

### Staff Availability
- **Priority System**: Automatic staff scheduling based on workload
- **Hash Lookup**: Instant staff information retrieval
- **Availability Tracking**: Real-time monitoring of staff working hours

## 📝 Usage Examples

### Adding a Record
```cpp
Recorde novoRecorde(Data(15, 8, 2021), "Tokyo", "João Silva", 
                   "Swimming", "100m Freestyle");
Jogosol::recordes.insert(novoRecorde);
```

### Finding Available Staff
```cpp
// Get least busy staff member
if (!Jogosol::fila.empty()) {
    Funcionario staffMember = Jogosol::fila.top();
    Jogosol::fila.pop();
    // Assign task to staffMember
}
```

### Fast Personnel Search
```cpp
Funcionario searchFunc("Name", "Service", 0);
auto it = Jogosol::tabela.find(searchFunc);
if (it != Jogosol::tabela.end()) {
    // Staff member found instantly
}
```

## 🔍 Performance Analysis

- **Records Search**: O(log n) with BST vs O(n) with linear search
- **Staff Lookup**: O(1) average with hash table vs O(n) with vector search
- **Staff Scheduling**: O(log n) with priority queue vs O(n) with manual sorting
- **Memory Usage**: Optimized with efficient data structure choices

## 🎓 Academic Context

This project demonstrates advanced concepts from the Algorithms and Data Structures (AEDA) course:
- Custom data structure implementation
- Template programming in C++
- Iterator design patterns
- Hash function design
- Tree traversal algorithms
- Performance optimization techniques

## 👥 Contributors

- Advanced Data Structures Team

## 📄 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
