# 👨‍💻 Developer Profile App - C++ Project

A simple OOP-based C++ console application that demonstrates multilevel inheritance through `clsPerson`, `clsEmployee`, and `clsDeveloper` classes.

---

## 🧠 Concept

This project shows how to:

- Create a class hierarchy using inheritance
- Share and reuse attributes/methods between classes
- Extend behavior from general (Person) to specific (Developer)
- Simulate sending communication via Email and SMS

---

## 🧱 Class Structure


### 🔹 `clsPerson`
- ID
- First Name / Last Name
- Email / Phone
- Full Name (auto-generated)
- Email/SMS send simulation

### 🔸 `clsEmployee` (inherits `clsPerson`)
- Title
- Salary
- Department

### 🔻 `clsDeveloper` (inherits `clsEmployee`)
- Main Programming Language

---
