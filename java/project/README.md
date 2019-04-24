# Java Snippets

This repo contains the basic project that uses Gradle build system. I preferred it over Ant or Maven because you do <b>NOT</b> need to install Gradle in order to use it because you download a wrapper. This greatly simplifies the install process. As an example I have implemented a queue with
a single test file to show how you want to organize your files. I have also
added a `Main.java` class for you to run your application.

Tools used in the project:

- [JUnit](http://junit.org/) for testing
- Use of [Gradle](https://gradle.org/) for much easier compiling
- Code documentation with [Javadoc](https://en.wikipedia.org/wiki/Javadoc)


## Installation Instructions

- Update the project settings in build.gradle file
- Make sure you have JDK, junit and gradle installed

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

# install junit for unit testing
$ sudo apt-get -y install junit

# The following steps should only be done 
# if you need an updated wrapper otherwise skip them

# download gradle
$ sudo wget https://services.gradle.org/distributions/gradle-4.3.1-bin.zip

# install gradle
$ sudo mkdir /opt/gradle
$ sudo unzip -d /opt/gradle gradle-4.3.1-bin.zip
$ export PATH=$PATH:/opt/gradle/gradle-4.3.1/bin
$ gradle -v

# installing wrapper
$ sudo gradle wrapper --gradle-version 2.0

# or the following as we have made wrapper task in build.gradle file
$ sudo gradle wrapper
```

## Structure
```
.
├── build.gradle
├── gradle
│   └── wrapper
├── gradlew, gradlew.bat
│
└── src
    ├── main/java
    |   └── Main.java
    |   └── Queue.java
    └── test/java
        └── QueueTest.java
```

## File Placements

- Sources and Main in [src/main/java/](src/main/java/)
- Tests in [src/test/java/](src/test/java/)

## Building

``` bash
# Give execution permissions to gradlew
$ sudo chmod a+x gradlew

# To run all tests
$ sudo ./gradlew clean # cleans old compiled code
$ sudo ./gradlew test

# For windows
$ gradlew.bat clean
$ gradlew.bat test

# To run Main.java through command line
$ sudo ./gradlew run

# To create documentation
$ sudo ./gradlew javadoc

# For windows
$ gradlew.bat run
```
## Java Naming Conventions

Package names are all lowercase, with consecutive words simply concatenated together (no underscores). For example, com.example.deepspace

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

Each type variable (used in generics) is named in one of two styles:
1. A single capital letter, optionally followed by a single numeral (such as E, T, X, T2)
2. A name in the form used for classes, followed by the capital letter T (examples: RequestT, FooBarT).

## Git Commit Style

**feat**: a new feature <br/>
**fix**: a bug fix <br/>
**docs**: changes to documentation <br/>
**style**: formatting, style corrections, no code change <br/>
**refactor**: refactoring production code <br/>
**test**: adding tests, refactoring test; no production code change <br/>
**chore**: updating build tasks, no production code change <br/>

## Queue Implementation strategy

The `Queue.java` class is in `src/main/java/Queue.java`
The `QueueTest.java` class is in `src/test/java/QueueTest.java`

To optimize for algorithmic runtime, memory usage, and memory throughput. I
have implemented the bounded queue as an array based circular queue.

By implementing the queue as drifting within a circular array both the
`enqueue()` and `dequeue()` methods will have O(1) or constant runtime.

Additionally an array based implementation of a Queue has been used over a
linked list implementation of a Queue to optimize memory usage. Since the Queue
will be holding small elements(4 byte integers) and the constructor requires
a size we can assume the purpose of this bounded Queue is to store
a known max size of integers. By not using the pointers used in a linked list
Queue this array based Queue is more space efficient if the maxSize
of the Queue is known initially.
