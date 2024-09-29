<h1 align="center">🖨️ Ft_Printf 🖨️</h1>

###

<div align="center">
  <img height="500" src="https://i.imgur.com/rmoBlKT.png"  />
</div>

###

<p align="center">The goal of this project is pretty straightforward. You will recode printf().<br><br>You will mainly learn about using a variable number of arguments. How cool is that??<br><br>It is actually pretty cool :)</p>

###

<h2 align="left">Introduction</h2>

###

<h3 align="left">Allowed Functions 🔓</h3>

###

<h4 align="left">🗝️ printf<br>🗝️ va_list<br>🗝️ va_start<br>🗝️ va_end<br>🗝️ va_arg<br>🗝️ va_copy</h4>

###

<h3 align="left">Difficulty ⚔️</h3>

###

<h4 align="left">Moderate 🟡</h4>

###

<p align="left">Tip: The key to a successful ft_printf is a well-structured and extensible code.</p>

###

<h3 align="left">Reward 💎</h3>

###

<h4 align="left">🏆Acheivment Unlock: ft_printf()</h4>

###

<p align="left">Note: Once this assignment passed, you will be allowed to add your ft_printf() to your libft so you can use it in your school C projects.</p>

###

<h2 align="left">Rules</h2>

###

<p align="left">☛ C Language🗣️<br><br>☛ Pass Norminette ✅<br><br>☛ Functions should NOT quit unexpectedly 🚫😵<br><br>☛  Free memory 🕊️<br><br>☛  No leaks 🚫🚰<br><br>☛ Makefile flags 🚩:  flags -Wall, -Wextra and -Werror, use cc<br><br>☛ Makefile must NOT relink 🚫⛓️‍💥<br><br>☛ Makefile rules 📝: rules $(NAME), all, clean, fclean and re.<br><br>☛ Use Libft 🏛️ (if allowed)<br>⤷ Copy its sources and its associated Makefile in a libft folder with its associated Makefile. Your project’s Makefile must compile the library by using its Makefile, then compile the project.<br><br>☛ Create test programs 🔬🧪<br>⤷ DO NOT SUBMIT 🚫📨<br><br>☛ Submit in git repository 📫<br>⤷  Only the work in the git repository will be graded<br><br>☛ Deepthought graded after peer-evaluations 🧐🧠<br>⤷ If an error happens in any section of your work during Deepthought’s grading, the evaluation will stop. 🛑</p>

###

<h1 align="left">Ready, Set, Go! 🏁</h1>
<p align="right">┊<br></p>
<h1 align="left">Variadic Functions</h1>

###

<p align="left">🧙‍♂️ 🙶 Variadic functions take a variable number of arguments. 🙷<br><br>i.e printf, which can handle  different types and numbers of arguments.</p>

###

<h2 align="left">Library 🏫</h2>

###

<h4 align="left">📖 stdarg.h</h4>

###

<p align="left">⤷ va_list : : Type to store the variable arguments : :<br>⤷ va_start : : Initializes the va_list : :<br>⤷ va_arg : : Retrieves the next argument : :<br>⤷ va_end : : Cleans up the va_list : :</p>

###

<h2 align="left">📌Exercise 1:<br>Simple Sum Function ➕</h2>

###

<p align="left">🧙‍♂️ 🙶 Let's start with a simple example. 🙷</p>

###

<p align="left">📍Objective: Create a function to sum a variable number of integers.</p>

###

<h3 align="left">📋Step-by-Step Task</h3>

###

<p align="left">① Create sum(int count, ...) <br>⤷ 1st parameter = number of integers to sum<br>⤷ 2nd parameter++ = variable list of integers.<br><br>② Use va_list and related macros to retrieve and sum the integers.</p>

###

<h2 align="left">📌Exercise 2:<br>Find the Largest Number 🌌</h2>

###

<p align="left">🧙‍♂️ 🙶 Now let's get a little more practice! 🙷</p>

###

<p align="left">📍Objective: Write a function called 'find_max' that returns the largest number from a variable list of integers.</p>

###

<h3 align="left">📋Step-by-Step Task</h3>

###

<p align="left">① Create a function prototype like int find_max(int count, ...) <br><br>② Iterate over the arguments using va_list, va_start, and va_arg to find the largest number.</p>

###

<h2 align="left">📌Exercise 3:<br>Mixed Data Types 🔢🔠</h2>

###

<p align="left">🧙‍♂️ 🙶 So far, we've dealt with only integers. Let's make it more interesting by working with mixed data types! 🙷</p>

###

<p align="left">📍Objective: Create a function that can print different types of data (like a very basic printf).</p>

###

<h3 align="left">📋Step-by-Step Task</h3>

###

<p align="left">① Create a function 'print_all(char *format, ...)' where format is a string that specifies the type of each argument:<br>⤷ ' i ' for int<br>⤷ ' c ' for char<br>⤷ ' f ' for double<br>⤷ ' s ' for char *<br><br>② Use 'va_arg' to handle different data types.</p>

###

<p align="right">┊<br>┊<br>┊<br>┊<br>┊<br>┊<br>┊<br>┊<br>┊<br>┊<br>┊<br>┊<br>┊</p>

###

<h2 align="left">Solution</h2>

###

<h3 align="left">🖋️ Exercise 1: Simple Sum Function</h3>

###

<h3 align="left">📄 Main.c<br>--------------------------------</h3>

###

<p align="left">int main()<br>{<br>    printf("Sum of 1, 2, 3: %d\n", sum(3, 1, 2, 3));       // Should print 6<br>    <br>printf("Sum of 5, 10, 15: %d\n", sum(3, 5, 10, 15));   // Should print 30<br>    <br>printf("Sum of 7, 14: %d\n", sum(2, 7, 14));           // Should print 21<br><br>    return 0;<br>}</p>

###

<h3 align="left">--------------------------------</h3>

###

<h3 align="left">📄 Sum.c<br>--------------------------------</h3>

###

<p align="left">#include <stdarg.h><br>#include <stdio.h><br><br>int sum(int count, ...)<br>{<br>    va_list args;          // Declare a va_list type variable<br>    va_start(args, count); // Initialize args to store all values after count<br><br>    int total = 0;<br>int i = 0;<br>while (i < count)<br>{<br>int num = va_arg(args, int); // Retrieve the next integer<br>total += num;<br>i++;<br>}<br><br>    va_end(args); // Clean up the va_list<br><br>    return total;<br>}</p>

###

<h3 align="left">--------------------------------</h3>

###

<h3 align="left">🖋️ Exercise 2: Find the Largest Number</h3>

###

<h3 align="left">📄 Main.c<br>--------------------------------</h3>

###

<p align="left">int main() <br>{<br>    printf("Max of 1, 2, 3: %d\n", find_max(3, 1, 2, 3));       // Should print 3<br><br>    printf("Max of 5, 10, 15: %d\n", find_max(3, 5, 10, 15));   // Should print 15<br><br>    printf("Max of -7, -14: %d\n", find_max(2, -7, -14));       // Should print -7<br><br>    return 0;<br>}</p>

###

<h3 align="left">--------------------------------</h3>

###

<h3 align="left">📄 Find_Max.c<br>--------------------------------</h3>

###

<p align="left">#include <stdarg.h><br>#include <stdio.h><br><br>int find_max(int count, ...)<br>{<br>    va_list args;<br>    va_start(args, count);<br><br>    int max = va_arg(args, int); // Assume the 1st number is the largest<br><br>int i = 1;  // Since 1st number is assumed the largest, we start at the 2nd<br><br>    while ( i < count )<br>{<br><br>        int num = va_arg(args, int);<br>        <br>if (num > max)<br>{<br>            max = num;<br>        }<br><br>i++;<br>    }<br><br>    va_end(args);<br>    return max;<br>}</p>

###

<h3 align="left">🖋️ Exercise 3: Mixed Data Types</h3>

###

<h3 align="left">📄 Main.c<br>--------------------------------</h3>

###

<p align="left">int main()<br>{<br>    print_all("icfs", 10, 'A', 3.14, "Hello");<br>    // Output: "10 A 3.140000 Hello "<br><br>    print_all("sci", "Test", 'Z', 99);<br>    // Output: "Test Z 99"<br><br>    return 0;<br>}</p>

###

<h3 align="left">--------------------------------</h3>

###

<h3 align="left">📄 Print_All.c<br>--------------------------------</h3>

###

<p align="left">#include <stdarg.h><br>#include <stdio.h><br><br>void print_all(char *format, ...) {<br>    va_list args;<br>    va_start(args, format);<br><br>    while (*format)<br>{<br><br>        switch (*format)<br>{<br>            case 'i': // int<br>                printf("%d ", va_arg(args, int));<br>                break;<br><br>            case 'c': // char<br>                printf("%c ", (char) va_arg(args, int)); // Note: char is promoted to int<br>                break;<br><br>            case 'f': // double<br>                printf("%f ", va_arg(args, double));<br>                break;<br><br>            case 's': // string<br>                printf("%s ", va_arg(args, char *));<br>                break;<br>        }<br><br>        format++;<br>    }<br><br>    va_end(args);<br>    printf("\n");<br>}</p>

###

<h3 align="left">--------------------------------</h3>

###

<p align="left">🧙‍♂️ 🙶 By working through these exercises, you’ll get a practical understanding of how variadic functions operate. 🙷</p>

###
