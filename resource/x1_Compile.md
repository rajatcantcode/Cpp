## How the Compiler Checks the Code

The **compiler** follows several steps to check and convert the code into machine instructions.

<details>
  <summary>1. Preprocessing</summary>
  - Handles `#include`, `#define`, and macros before actual compilation.
  - Example: `#include <iostream>` is replaced with the actual content of the iostream file.
</details>

<details>
  <summary>2. Lexical Analysis (Tokenization)</summary>
  - Breaks code into **tokens** (smallest meaningful units like keywords, variables, operators).
  - Example:
    ```cpp
    int x = 5;
    ```
    is split into tokens: `int`, `x`, `=`, `5`, `;`
</details>

<details>
  <summary>3. Syntax Analysis (Parsing)</summary>
  - Checks **grammar rules** (whether the code follows C++ syntax).
  - Example: `int x 5;` is incorrect because `=` is missing.
</details>

<details>
  <summary>4. Semantic Analysis</summary>
  - Checks **meaning** and **type correctness**.
  - Example: `int x = "Hello";` is invalid because `"Hello"` is not an integer.
</details>

<details>
  <summary>5. Intermediate Code Generation</summary>
  - Converts the code into an internal **intermediate representation** (IR) for optimization.
</details>

<details>
  <summary>6. Optimization</summary>
  - Improves performance by removing **redundant calculations** or improving loops.
</details>

<details>
  <summary>7. Code Generation</summary>
  - Translates the optimized IR into **machine code** (binary instructions).
</details>

<details>
  <summary>8. Linking</summary>
  - Combines different **compiled files (object files)** and external libraries to create the final executable.
</details>

### **Final Output:**

- ✅ If all checks pass → The program compiles successfully.
- ❌ If there’s an error → The compiler gives an **error message** to fix it.

## That's how the compiler ensures the code is correct! 🚀
