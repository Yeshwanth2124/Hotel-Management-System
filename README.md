# Hotel Management System

A simple console-based Hotel Management System implemented in C. This application simulates a restaurant ordering system for "Hotel Taj", allowing users to browse a menu, place orders for various biryanis, and calculates the total bill.

## 📋 Project Overview

This project serves as a demonstration of fundamental C programming concepts, including:
- Control flow (loops, switch statements)
- User input handling
- Basic arithmetic operations
- Console manipulation (legacy Turbo C++ style)

**Note:** This project was originally designed for the **Turbo C++** environment and uses the `conio.h` library (e.g., `clrscr()`, `gotoxy()`). To run this on modern systems, you may need a compatible environment (like DOSBox) or port the code to standard C.

## 📂 Project Structure

The project is organized as follows:

```
Hotel-Management-System/
├── src/
│   └── main.c          # Source code of the application
├── assets/             # Screenshots and output images
└── README.md           # Project documentation
```

## 🚀 How to Run

### Legacy Environment (Turbo C++)
1. Open Turbo C++.
2. Load `src/main.c`.
3. Compile (`Alt + F9`) and Run (`Ctrl + F9`).

### Modern Environments (GCC/Clang/VS)
*Note: The code requires modification to work with modern compilers due to dependency on `conio.h`.*

To port to a modern environment:
1. Replace `#include <conio.h>` with `#include <windows.h>` (on Windows) or `ncurses` (on Linux).
2. Replace `clrscr()` with `system("cls")` or equivalent.
3. Replace `gotoxy()` with a custom implementation using standard console APIs.

## 📸 Screenshots

Here is a glimpse of the application in action:

![Menu Selection](assets/Screenshot%202024-09-18%20142126.png)
*The main menu display*

![Order Summary](assets/Screenshot%202024-09-18%20144059.png)
*Final bill calculation*

## 📜 Menu Items

- **Panner Briyani**: ₹250
- **Veg Briyani**: ₹100
- **Kaju Briyani**: ₹200
- **Mushroom Briyani**: ₹300

## 🤝 Contributing

Feel free to fork this repository and submit pull requests. You can also open issues if you find bugs or have suggestions for improvements.

## 📄 License

This project is open-source and available for educational purposes.
