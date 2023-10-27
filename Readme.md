This repo contain all stack related basic Implementation along with stack creation 
<h1>Implementation (using STL Library) </h1>
<ul type="dots">
    <li>Infix To Postfix</li>
    <li>Infix To Prefix</li>
    <li>Postfix Evaluation</li>
    <li>Prefix Evaluation</li>
</ul>
<h1>Algorithms Are As Follows : </h1>
<h2>1) Infix to Postfix : </h2>
<pre>
1. Here first create 3 data structure which can use for  a) Input Infix Expression (String) , b) Stack which use for iteration (Stack) , c) lastly one for storing Output which is Postfix Expression (Vector)
2. Now we iterate the input string character by character for that I use 'i' iterator whose initial value is 0.
3. After that create a while Loop which active till end of the input string 
4. In that input string it continuoulsly checking the character in the string <b>if the incomming character is operator it pushes into the stack if it is a operand then it pushes that one in output vector </b>simple!!
5. Now lets talk about the Precedence, there are 3 different cases for precedence and this consider when a operator is come as a character 
     i) If operator at stack top have less precedence than incomming operator then simply push the incomming operator in the stack
     ii) If operator at stack top have higher precedence than incomming operator then first push that top operator into output vector then pop the stack top and now push the incomming operator into stack but this operations are different not be simultanuoulsy done that's why i use goto function here
     iii) If operator precedence is same but associativity is Left-Right then also first we push stack top into output vector and then pop the stack top and then push the incomming operator on the stack
6. For precedence here I make a function which returns integer value after passing the operator for 
'+' & '-' it returns 1 , similary for '*' & '/' returns 2 , and for '^' returns 3.
7. after all of this we push all remaing character in stack into output vector and print the output 
</pre>

<img src="https://prepinsta.com/wp-content/uploads/2023/02/Infix-to-Postfixin-in-java-using-Stacks-.webp" height="50%" width="50%" ></img>

<h2>2) Infix to Prefix : </h2>
<pre>
All Algorithm is same as infix to postfix but small difference is that we perform iteration on reverse of inputed string or expression and after performing and generating final output the required output is also reverse of final output
</pre>
<img src="https://prepinsta.com/wp-content/uploads/2023/02/Infix-to-prefix-conversion.webp" height="50%" width="50%" ></img>

<h2>3) Prefix Evaluation : </h2>
<pre>
1. Here we create 1 interger type stack in which we store the all operands and ther result and one string for Input Expression(prefix)
2. After getting input prefix expression we revert it and use it for iteration here we do reverse process which we do in expression conversion here we store operands in stack
3. while store operands we first convert them into integer since they are in char datatype for that we simply substract that char number from '0' characater means substracting ascii value of incoming character from ascii value of '0'

character = 1 ascii(49)
character = 0 ascii(48)
so by substracting 49 from 48 we get 1 (int) 

4. after doing that when any operator is come as character first pop the top and copy the value of top into operand 2 and after that pop again and copy the value of new stack top into operand 1 
5. And now pass this to evaluate function which take parameters as op1,op2 and operator character and returns the result in interger and we push this integer into the stack 
6. this process go on and on till the complete input string exaust 
7. at last we print the output which is answer of expression which is at stack top 
</pre>

<h2>4) Postfix Evaluation : </h2>
<pre>
1.Here all Algorithms is same as above only 2 changes one is there is no requirement of reversing the input expression and one more is when we pop the stack first operand 1 get filled after that operand 2 get filled 
rest all algo is same as above
</pre>