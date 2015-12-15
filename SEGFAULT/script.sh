b=$(ps -ax | grep System\ Events | head -n 1 | cut -c-5)
until [$a != 0]
do
	b=$(ps -ax | grep System\ Events | head -n 1 | cut -c-5)
	kill $a
	kill $b
done
