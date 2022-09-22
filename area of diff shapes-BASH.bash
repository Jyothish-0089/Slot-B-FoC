echo "1-Traingle"
echo "2-Rectangle"
echo "3-Square"
echo "4-Circle"
echo -n "What is the shape?"
read shape

if(($shape == 1))
then
echo -n "Enter the base of triangle :"
read base
echo -n "Enter the height of traingle :"
read height
((bh=$base*$height))
((area = $bh/2))
echo "The area of traingle is "$area" sq.units"

elif(($shape == 2))
then
echo -n "Enter the length of the rectangle :"
read length
echo -n "Enter the breadth of the rectangle :"
read breadth
((area = $length*$breadth))
echo "The area of rectangle is "$area" sq.units"

elif(($shape == 3))
then
echo -n "Enter the side of the square :"
read side
((area = $side*$side))
echo "The area of square is :"$area" sq.units"

elif(($shape == 4))
then 
echo -n "Enter the radius of the circle :"
read radius
((r2=$radius*$radius))
((area1 = 22*$r2))
((area = $area1/7))
echo "The area of the circle is "$area" sq.units"
fi