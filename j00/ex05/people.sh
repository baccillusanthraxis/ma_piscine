ldapsearch -LLL "(uid=z*)" cn | grep "^cn:" | cut -d ':' -f2 | sort -r | cut -c2-
