if [ $# -ne 2 ]; then 
	echo "Incorrect No of paramerts: $#"
	exit 1
fi

dirpath=$(dirname "$1")
if [ ! -d $dirpath ]; then
	mkdir -p $dirpath 
fi

echo "$2" > $1

