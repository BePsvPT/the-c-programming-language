# RECAP

- Page 12 - If an arithmetic operator has integer operands, an integer operation is performed. If an arithmetic operator has one floating-point operand and one integer operand, however, the integer will be converted to floating point before the operation is done.

- Page 16 - **getchar** returns a distinctibe value when there is no more input, a value that cannot be confused with an real character. This value is called **EOF**, for "end of file." We must declare c to be a type big enough to hold any vallue that **getchar** returns. We can't use **char** since c must be big enough to hold **EOF** in addition to any possible char. Therefore we use **int**.

- Page 19 - A character written between single quotes represents an integer value equal to the numerical value of the character in the machine's character set. This is called a **character constant**, although it is just another way to write a small integer. So, for example, **'A'** is a character constant; in the **ASCII** character set its value is 65, the internal representation of the character **A**.
