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

<h2>1) Infix to Prefix : </h2>
<pre>
All Algorithm is same as infix to postfix but small difference is that we perform iteration on reverse of inputed string or expression and after performing and generating final output the required output is also reverse of final output
</pre>

