find . -type f -name "*.sh" | sed "s#.*/##" | cut -d "." -f 1
