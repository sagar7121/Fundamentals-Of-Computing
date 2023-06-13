echo "enter a year"
read year
a=$(($year%4))
if [ $a -eq 0 ]
then
	echo "year is leap"
else
	echo "year is not leap"
fi
