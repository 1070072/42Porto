a=$(echo "$FT_NBR1 + $FT_NBR2")
b=$(echo "$a" | tr "\'\\\\\"?\!" '01234')
c=$(echo "$b" | tr 'mrdoc' '01234')
d="ibase=5; obase=23; $c"
e=$(echo "$d" |bc)
f=$(echo "$e" | tr '0123456789ABC' 'gtaio luSnemf')
echo "$f"
