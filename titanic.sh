: 'this is how
   you write a multi-line
   comment in bash'


survivors=$(cut -d"," -f2 abc|grep "0"| wc -l) #a count of the survivors
dead=$(cut -d"," -f2 abc|grep "1"| wc -l) #a count of the fatalities
dw=$(grep -w "female" abc | cut -d"," -f2 | grep "0"| wc -l) #a count of dead women
lw=$(grep -w "female" abc | cut -d"," -f2 | grep "1"| wc -l) #a count of women that lived
dm=$(grep -w "male" abc | cut -d"," -f2 | grep "0"| wc -l) #a count of dead men
lm=$(grep -w "male" abc | cut -d"," -f2 | grep "1"| wc -l) #a count of men that lived
tw=$(echo "$dw + $lw" | bc) #total amount of women on deck
tm=$(echo "$dm + $lm"| bc) #total amount of men
tob=$(echo "$tw + $tm"| bc) #total amount of passengers on board
tob2=$[$(wc -l abc | cut -d" " -f1)-1] #also gives the total amount of passengers on deck

echo -e "\n\n\n"

echo -e "----------Analytical Report of the sunken Titanic from 1912----------\n\n"

echo "Total passengers that boarded the Titanic: " $tob
echo "Total amount of survivors:           " $survivors
echo "Total amount of fatalities:          " $dead
echo "Total amount of females on Deck:     " $tw " of " $tob2 " passengers"
echo "Total amount of males on Deck:       " $tm " of " $tob " passengers"
echo "Total amount of women that died:     " $dw
echo "Total amount of women that survived: " $lw
echo "Total amount of men that died:       " $dm
echo "Total amount of men that survived:   " $lm
echo "Overall chance of survival:          " $(echo "scale=2; $dead/$survivors" | bc -l)
echo "Female chance of survival :          " $(echo "scale=2; $lw/$survivors" | bc -l)
echo "Male chance of survival   :          " $(echo "scale=2; $lm/$survivors" | bc -l)

echo -e "\n\n\n" 

#To present the info in an orderly manner

sed -r 's/, / /g' abc |sed -r 's/,,/, ,/g'| column -s, -t
