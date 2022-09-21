echo -n "Enter a number :"
read a
echo -n "Enter another number :"
read b
((add = $a+$b))
((sub = $a-$b))
((mul = $a*$b))
((div = $a/$b))
((mod = $a%$b))
echo "Addition of two numbers -----> a + b = "$add
echo "Subtraction of two numbers --> a - b = "$sub
echo "Product of two numbers ------> a * b = "$mul
echo "Division of two numbers -----> a / b = "$div
echo "Modulus of two numbers ------> a % b = "$mod