## General

Q: _What does this enum result in when printed to the console?_

```
enum Example {
    FOO,
    BAR,
    BASH
}

printf("%i\n", FOO);
printf("%i\n", BAR);
```

A: `0`, `1`

## Chapter 0

## Chapter 1

## Chapter 2

## Chapter 3

Q: _What is the difference between the two operations on the variable x: `x++` and `++x`?_
A: `x++` returns the value of x. `++x` returns the incremented value of x.

Q: _What is the symbol for EOF?_
A: There is no symbol for EOF. To signify EOF

Q: _What is an invariant? And, what's its purpose?_
A: An invariant is a condition which is always true at a certain point in your application, no matter how the variables change. The biggest value of an invariant is that it helps the developer understand the codes logic, which leads to code that is easier to understand for future developers leading to fewer bugs during future maintenance.

Q: _What's the `typedef` keyword do in C++? Why is it useful?_
A: `typedef` allows the developer to create a short name for a namespaced type definition. It's useful because it allows the developer to abbreviate definition names that are often quite long i.e. `someNameSpace::some_type`. Creating typdefs helps make code more potentially more readable and easier to understand.

Q: _What is the name of the `%` operator in C++? In other languages?_
A: In C++ it's called the `remainder` operator.

Q: _What is an `unsigned integral type`?_
A: A type which can only be non negative whole numbers

Q: _What is the implication when subracting from `unsigned integral types`?_
A: If a value greater than the integer is subtracted from the value it will still be a non negative number.

Q: _What happens to a local variable if it's defined without an initializer?_
A: Local variables have a default initializer that sets the value to undefined.

## Chapter
