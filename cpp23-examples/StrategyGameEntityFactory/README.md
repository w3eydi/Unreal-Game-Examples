# StrategyGameEntityFactory

## Purpose
A simple C++23 example demonstrating how to create and manage game entities using the Factory pattern, polymorphism, and smart pointers.

## Features
- Abstract enemy interface
- Concrete enemy types
- Factory-based object creation
- Polymorphic behavior
- Centralized enemy management
- Automatic memory management with `std::unique_ptr`
- Clean separation of interface and implementation

## Technologies
- C++23
- STL
- `std::unique_ptr`
- `std::vector`
- `std::string_view`
- `std::println`

## What this example demonstrates
- Abstract base class design
- Runtime polymorphism
- Factory pattern implementation
- Ownership transfer with `std::unique_ptr`
- Collection management with `std::vector`
- Forward declaration usage
- Clean code organization
- Extensible game-oriented architecture

## Project Structure
```text id="gbxa6a"
StrategyGameEntityFactory/
├── include/
│   ├── Enemy.h
│   ├── EnemyType.h
│   ├── Archer.h
│   ├── Warrior.h
│   ├── EnemyFactory.h
│   └── EnemyManager.h
├── src/
│   ├── Archer.cpp
│   ├── Warrior.cpp
│   ├── EnemyFactory.cpp
│   ├── EnemyManager.cpp
│   └── main.cpp
└── README.md
```

## Output
Example console output:

```text
Manager: New Archer spawned.
Manager: New Warrior spawned.
Manager: New Archer spawned.
--- Game Loop: Enemies Updating ---
Archer: Arrow fired!
Warrior: Attacked by sword.
Archer: Arrow fired!
```