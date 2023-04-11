cat /etc/passwd | grep -v '#' | sed -n 'n;p'| cut -f1 -d: | rev | sort -r | sed -n "${FT_LINE1=2},${FT_LINE2=50}p" | tr "\n" ", " | sed 's/,/, /g' | sed 's/, $/./'
