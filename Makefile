all: build

build:
	ufbt

flash:
	ufbt flash

run launch:
	ufbt launch

clean:
	ufbt -c
	rm -rf dist/
