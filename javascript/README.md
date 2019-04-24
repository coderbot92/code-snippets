# JavaScript Snippets

This folder contains the basic project that uses Gulp.js build system. There are some sample implementations of common data structures and algorithms to understand documentation and code writing patterns.

Tools used in the project:

- [Node.js](https://nodejs.org/en/) as JavaScript run-time environment
- [npm](https://www.npmjs.com/) as package manager
- [Jasmine](https://jasmine.github.io/) as JavaScript testing framework
- Use of [Gulp.js](https://gulpjs.com/) for build automation
- Code documentation with [JSDoc](http://usejsdoc.org/)

## Installation Instructions

``` bash
# install Node.js and npm
$ sudo apt-get -y install python-software-properties
$ curl -sL https://deb.nodesource.com/setup_8.x | sudo -E bash -
$ sudo apt-get -y install nodejs

$ node --version
$ nodejs --version
$ npm --version

# MUST RUN THIS
# To install all dev dependencies
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

## Structure
```
.
├── doc-config.json
|
├── gulpfile.js
│
├── .eslintrc.json
│
├── package.json, package-lock.json
│
└── src
│
└── test
```

## File Placements

- Sources in [src/](src/)
- Tests in [test/](test/)

## Building

``` bash
# The scripts are defined in package.json

# To run all tests (all *.spec.js files will be executed)
$ npm run test

# To generate documentation
$ npm run gendocs

# To check code by linter and run tests
$ npm run build
```

## JavaScript Naming Conventions

Package names are all lowerCamelCase. For example, my.exampleCode.deepSpace, but not my.examplecode.deepspace or my.example_code.deep_space

| Construct                  | Naming Rule        |
|:--------------------------:|:------------------:|
| function name              | lowerCamelCase     |
| variables, function params | lowerCamelCase     |
| class data member          | lowerCamelCase     |
|                            |                    |
| class name (and file name) | UpperCamelCase     |
| enum name                  | UpperCamelCase     |
|                            |                    |
| constants                  | UPPER_SNAKE_CASE   |
| enum variables             | UPPER_SNAKE_CASE   |

## Git Commit Style

**feat**: a new feature <br/>
**fix**: a bug fix <br/>
**docs**: changes to documentation <br/>
**style**: formatting, style corrections, no code change <br/>
**refactor**: refactoring production code <br/>
**test**: adding tests, refactoring test; no production code change <br/>
**chore**: updating build tasks, no production code change <br/>

