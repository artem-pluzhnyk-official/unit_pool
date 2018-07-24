FT_LINE1=21
FT_LINE2=9
OUTPUT=$(cat /etc/passwd | grep -v "#" | cut -d ":" -f1 | rev | sort -r | sed -n "g;n;p" | head -n $FT_LINE1 | tail -n $FT_LINE2 | paste -s -d ',' - | sed 's/,/, /g')
echo "$OUTPUT."
