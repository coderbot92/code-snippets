# Python Snippets

This folder contains the basic project for python snippets and unit tests. Pip is a package management system used to install and manage software packages written in Python.

Note: Packages installed using pip or any other package manager are installed in /usr/local/lib/pythonX.Y/dist-packages/

``` bash

# to see package version and installed location e.g for nose
$ pip show nose
$ pip3 show nose

# to see installed packages and versions
$ pip freeze
$ pip3 freeze

```

## Installation Instructions

- Make sure you have Python 3.x and pip3 installed
- Note: Normally in Linux, Python 2.x and pip as well as Python 3.x and pip3 are preinstalled

``` bash
# update system
$ sudo apt-get update

# check pip versions and locations
$ python --version
$ python3 --version
$ which python
$ which python3

# check pip versions and locations
$ pip --version
$ pip3 --version
$ which pip
$ which pip3

# if pip3 not present then install
$ sudo apt-get -y install python3-pip
$ sudo apt-get -y install build-essential libssl-dev libffi-dev python-dev

# to launch interpreters inside terminal
$ python
$ python3

```

## Structure
```
.
|
├── src
│   └── __init__.py
|── tests
│   └── __init__.py
|
├── .coveragerc
│
└── readme

```

## File Placements

- Sources go in [src/](src/) folder
- Tests in [tests/](tests/) (Note: All test scripts should named as test_<modulename>.py)

## Running tests

``` bash

# To run all tests
$ make test

```
## Naming Conventions
![Naming](https://raw.github.com/coderbot92/code-snippets/master/python/readme/python_naming.jpg)

## Git Commit Style

**feat**: a new feature <br/>
**fix**: a bug fix <br/>
**docs**: changes to documentation <br/>
**style**: formatting, style corrections, no code change <br/>
**refactor**: refactoring production code <br/>
**test**: adding tests, refactoring test; no production code change <br/>
**chore**: updating build tasks, no production code change <br/>


