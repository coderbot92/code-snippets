[![Project Status: Active – The project has reached a stable, usable state and is being actively developed.](http://www.repostatus.org/badges/latest/active.svg)](http://www.repostatus.org/#active)
[![Repo Type: Snippets](https://img.shields.io/badge/repo%20type-snippets-yellowgreen.svg)](#code-snippets)
[![Build Status](https://travis-ci.org/coderbot92/code-snippets.svg?branch=master)](https://travis-ci.org/coderbot92/code-snippets)
[![Coverage Status](https://coveralls.io/repos/github/coderbot92/code-snippets/badge.svg?branch=master)](https://coveralls.io/github/coderbot92/code-snippets?branch=master)
[![HitCount](http://hits.dwyl.io/coderbot92/code-snippets.svg)](http://hits.dwyl.io/coderbot92/code-snippets)
[![Open Source Love](https://badges.frapsoft.com/os/v1/open-source.svg?v=103)](https://github.com/ellerbrock/open-source-badges/)
[![MIT licensed](https://img.shields.io/badge/license-MIT-blue.svg)](https://github.com/coderbot92/code-snippets/blob/master/LICENCE)

# Code Snippets
Various code snippets tested while learning different programming languages.

Tools used in the project:

- Continuous integration with [Travis-CI](https://travis-ci.org/)
- Code coverage with [Coveralls.io](https://coveralls.io/)

## Git Configurations
* The git configurations are present in the file .gitconfig in the repo root
* Change the configurations according to your needs
* After cloning repo the following command must be run to incorporate these configs locally:
```bash
$ git config --local include.path ../.gitconfig
```
* To verify and see the git configurations for current repository:
```bash
$ git config --list
```
* To see the list of remotes and see the details of a particular remote e.g. to see which branches are tracked:
```bash
$ git remote -v
$ git remote show origin
```

## Installing C++ Compiler and Compiling C++ Code (With C++2a)

### Updating to Latest GCC with Minimal Changes
``` bash
# Adds an apt repository
# Updates the list of available packages
# Installs the latest GCC (GCC 8 in this case)
$ sudo apt-get update -y && 
sudo apt-get install build-essential software-properties-common -y && 
sudo add-apt-repository ppa:ubuntu-toolchain-r/test -y && 
sudo apt-get update -y && 
sudo apt-get install gcc-8 g++-8 -y && 
sudo update-alternatives --install /usr/bin/gcc gcc /usr/bin/gcc-8 60 --slave /usr/bin/g++ g++ /usr/bin/g++-8;

# Select from installed gcc alternatives as terminal default
$ sudo update-alternatives --config gcc

# Optional command
$ select gcc-8

# Check versions
$ gcc -v
$ g++ --version
$ make -v
```
### Updating to Latest GCC with Whole Upgrade of Ubuntu
``` bash
# update the list of available packages and their versions but installs/upgrade nothing
$ sudo apt-get update
# upgrades the installed packages to newer versions 
# if the installed versions and versions on list do not match 
$ sudo apt-get upgrade

# Check versions
$ g++ --version
$ make -v

# package that installs g++, gcc and make (run only if you don't have these)
$ sudo apt-get install build-essential
```
### Compiling C++ Files
``` bash
# To compile all files
$ make all

# To clean up generated executables
$ make clean
```
## Installing Java JDK and Ant Build System
``` bash
# remove existing java installation
$ sudo apt-get -y autoremove openjdk-7-jre
$ sudo apt-get -y purge openjdk*
$ java -version

# update system
$ sudo add-apt-repository ppa:openjdk-r/ppa
$ sudo apt-get update

# install JDK
$ sudo apt-get -y install openjdk-8-jdk wget unzip # -y flag ensures automatic answer of yes to all prompts
$ java -version

# install apache ant
$ sudo apt-get update
$ sudo apt-get -y install ant
```
``` bash
# To compile all files in src/ to bin/
$ ant compile

# To remove binaries (i.e. delete bin/ directory)
$ ant clean

# To run
$ cd bin/
$ java <name-of-class-file>
```
## Installing Python3
``` bash
# Check old python3 version
$ python3 --version

# Install latest python3 (3.7 in this case)
$ sudo add-apt-repository ppa:deadsnakes/ppa
$ sudo apt-get update
$ sudo apt-get -y install python3.7

# Set python3 to point to new python3.7

# Sets the alternatives for python3
$ sudo update-alternatives --install /usr/bin/python3 python3 /usr/bin/python3.4 1 &&
$ sudo update-alternatives --install /usr/bin/python3 python3 /usr/bin/python3.7 2

# Check the alternatives for python3 and select the latest
$ sudo update-alternatives --config python3

# Check version
$ python3 --version
```
``` bash
# To run script
$ python3 <script-name>.py
```

## Installing Node.js as JavaScript Run-time Environment
``` bash
# install Node.js and npm
$ sudo apt-get -y install python-software-properties
$ curl -sL https://deb.nodesource.com/setup_8.x | sudo -E bash -
$ sudo apt-get -y install nodejs

$ node --version
$ nodejs --version
$ npm --version

# MUST RUN THIS
# To install all devDependencies and dependencies
$ npm install

# if new project
# to setup initial package.json file
$ npm init

# to install any new npm package and add to devDependencies in package.json
$ npm install <package-name> --save-dev

# to install any new npm package and add to dependencies in package.json
$ npm install <package-name> --save

# to install any new npm package globally in /usr/local/lib/node_modules
$ npm install -g <package-name>

# to see installed npm packages in node_modules folder
$ npm list --depth=0

# to see installed global npm packages in /usr/local/lib/node_modules folder
$ npm list -g --depth=0

# to uninstall any new npm package and remove from devDependencies in package.json
$ npm uninstall <package-name> --save-dev

# to uninstall any new npm package and remove from dependencies in package.json
$ npm uninstall <package-name> --save

# to uninstall npm package globally in /usr/local/lib/node_modules
$ npm uninstall -g <package-name>

# to see if any npm package has newer version
$ npm outdated

# to update all packages to latest
$ npm update
```

``` bash
# To run script
$ nodejs <script-name>.js
```
