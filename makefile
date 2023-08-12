
clean:
# https://bytefreaks.net/gnulinux/bash/how-to-execute-find-that-ignores-git-directories
#https://apple.stackexchange.com/questions/32593/how-to-search-text-in-files-of-all-types-including-binary
	find . -not -type d -type f -not -path '*/\.*' -not -path '*.h' -not -path '*.cpp' -not -path '*.c' -perm +0100 -delete
