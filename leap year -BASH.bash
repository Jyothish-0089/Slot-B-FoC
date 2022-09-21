echo -n "Enter the year :"
read year
if (( $year%100==0 && $year%400!=0));
then
echo "It is not a leap year"
else
echo "It is a leap year"
fi