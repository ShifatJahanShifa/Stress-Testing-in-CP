for((i=1; ;i++)); do
    echo $i
    ./random $i > input.txt
    diff -w <(./try < input.txt) <(./stress < input.txt) || break
done