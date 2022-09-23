echo -n "Enter the student name :"
read name
echo -n "Enter Maths marks :"
read t1
echo -n "Enter Physics marks :"
read t2
echo -n "Enter Chemistry marks :"
read t3 
echo -n "Enter Computers marks :"
read t4 
echo "---------STUDENT MARKLIST---------"
echo "Name :"$name
echo "Maths :"$t1"/100"
echo "Physics :"$t2"/100"
echo "Chemistry :"$t3"/100"
echo "Computers :"$t4"/100"
((total = t1+t2+t3+t4))
((avgg = $total*100))
((avg = $avgg/400))
echo 
echo "---------Final Results---------"
echo "Final marks scored : "$total"/400"
echo "Average marks obtained : "$avg"%"
if(($total>=350));
then
echo "GRADE A+"
elif(($total>=300));
then
echo "GRADE A"
elif(($total>=250));
then
echo "GRADE B"
elif(($total>=200));
then
echo "GRADE C"
elif(($total>=150));
then
echo "GRADE D"
elif(($total>=100));
then
echo "GRADE E"
fi
if(($t1<25 || $t2<25 || $t3<25 || $t4<25 ));
then
echo "FAILED \(^_^)/"
else
echo "PASSED!"
fi
echo "----------------------------------"
