echo -n "Enter the number :"
read n
echo -n "Number of digits :"
read c
((temp = n))
((c=c-1))
while((n>0));
do
((rem = n%10))
((power = 10**$c))
((sum = $rem*$power))
((total = total + $sum))
((n=n/10))
((c=c-1))
done
echo "The reversed number is, "$total
if(($total == $temp))
then
echo "So,It's a palindrome!"
else
echo "So,It's not a palindrome"
fi