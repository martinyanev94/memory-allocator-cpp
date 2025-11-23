# Final Project: Memory Management in C++

## Project Overview

In this final project, students will apply the concepts learned throughout the course on memory management in C++. The project involves creating a memory management system that mimics simple allocation strategies used in real-world applications. Students will work in pairs or small groups to encourage collaboration and knowledge exchange.

## Objectives

By the end of this project, students should be able to:

1. Implement a basic memory allocator using different strategies (e.g., first-fit, best-fit).
2. Create and manage objects with careful attention to memory allocation and deallocation.
3. Demonstrate knowledge of memory leaks and implement techniques to detect and manage them.
4. Use smart pointers effectively to manage ownership in C++.
5. Explore and explain how C++ RAII (Resource Acquisition Is Initialization) principles help manage resources effectively.

## Project Tasks

### Task 1: Simple Memory Allocator

- Implement a basic memory allocator class that supports allocating and deallocating memory blocks. You can choose between different strategies (first-fit, best-fit).
- Ensure that the allocator can handle requests for different sizes of memory.

### Task 2: Object Management

- Create a sample class (e.g., an `Employee` class that holds attributes like name and ID) and demonstrate allocating objects of that class using your memory allocator.
- Implement logic to ensure that objects are properly deallocated when no longer needed.

### Task 3: Memory Leak Detection

- Develop a simple memory leak detector that checks for allocated memory that has not been deallocated.
- Create test scenarios that intentionally lead to memory leaks and demonstrate your detector's ability to identify them.

### Task 4: Smart Pointers

- Implement smart pointers (unique_ptr and shared_ptr) for handling dynamic memory safely.
- Show how these smart pointers can be used to manage the lifecycle of `Employee` objects created in Task 2.

### Task 5: Reporting and Documentation

- Prepare a report that includes:
  - An explanation of the memory allocator design.
  - The rationale for chosen strategies for memory management.
  - Challenges encountered during implementation.
  - How the approach adheres to RAII principles.
  
- Include screenshots or snippets of code demonstrating key parts of your implementation.

## Submission Guidelines

- Submit your code implementation in a zip file or push it to a shared repository (e.g., GitHub).
- Include the report as a PDF or markdown file.
- Ensure your code is well commented and follows standard C++ coding conventions.

## Evaluation Criteria

Projects will be assessed based on:

- Functionality: Does the memory allocator work correctly?
- Code Quality: Is the code clean and well-documented?
- Innovation: Are any creative or complex features implemented?
- Presentation: Is the report clear and does it effectively communicate the project details?
- Collaboration: Was there an evident teamwork spirit throughout the project?

## Deadline

- The project is due on [insert due date]. Please ensure timely submission.

---

*This project aims to consolidate your understanding of memory management in C++. It encourages you to think critically about memory allocation, object lifecycle, and best practices in C++ programming.*