# ConsoleInventorySystem

## Purpose
A simple C++23 example demonstrating a basic console-based inventory system.

## Features
- Item storage with `std::vector`
- Quantity tracking
- Item addition and usage logic
- Read-only lookup with `std::string_view`
- Separation of interface and implementation

## Technologies
- C++23
- STL
- `std::vector`
- `std::string`
- `std::string_view`
- `std::println`

## What this example demonstrates
- Basic class and struct design
- Collection management with `std::vector`
- Owned string storage with `std::string`
- Efficient read-only parameters with `std::string_view`
- Behavior-oriented member functions
- Clean code organization
- Rule of 0 friendly design

## Project Structure
```text
InventorySystem/
├── include/
│   ├── InventorySystem.h
│   └── Item.h
├── src/
│   ├── InventorySystem.cpp
│   └── Source.cpp
└── README.md
```

## Output
Example console output:

```text
Inventory:
- Potion (x5)
- Arrow (x10)
Using Potion...
Inventory:
- Potion (x4)
- Arrow (x10)
```