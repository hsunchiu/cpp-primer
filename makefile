
clean:
	find . -not -type d -type f -not -path '*/\.*' -not -path '*.h' -not -path '*.cpp' -not -path '*.c' -perm +0100 -delete