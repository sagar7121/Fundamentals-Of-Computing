echo "enter num"
read num
if [ $num -lt 2 ]
then 
	echo "not a prime number"
else
	for((i=2;i<=num;i++))
	do
	if [ $((num%i)) -eq 0 ]
	then
		echo "prime number"
		exit
	fi
done 
fi
