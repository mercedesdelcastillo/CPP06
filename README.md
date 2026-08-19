# CPP06

## 📚 Description
This project intruduces the different types of explicit casting you can use in C++98

## 🧠 Key Concepts
- Static Casting: performs a compile-time checked conversion between compatible types. It is commonly used for converting numeric types, converting pointers within an inheritance hierarchy when the relationship is known, and explicitly calling a conversion that the compiler could otherwise perform implicitly.
- Dinamic Casting: performs a runtime-checked conversion, mainly between pointers or references of polymorphic classes. It is used when you need to determine whether an object is actually an instance of a derived class. It checks if the conversion is valid and returns a null pointer if it fails.
- Interpret Casting: performs a low-level conversion that reinterprets the memory representation of an object as another type. It is mainly used for low-level programming, such as manipulating memory addresses or converting between unrelated pointer types. Unlike static_cast and dynamic_cast, it does not check whether the conversion makes semantic sense.
