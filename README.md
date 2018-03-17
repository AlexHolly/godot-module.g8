## [giter8](http://github.com/n8han/giter8) template for Godot c++ module

Godot 3.0 module

#godot module
http://docs.godotengine.org/en/latest/reference/custom_modules_in_c++.html

### Linux:
http://www.foundweekends.org/conscript/setup.html
    sudo apt-get install openjdk-8-jdk
    wget https://raw.githubusercontent.com/foundweekends/conscript/master/setup.sh -O - | sh
    export CONSCRIPT_HOME="$HOME/.conscript"
    export CONSCRIPT_OPTS="-XX:MaxPermSize=512M -Dfile.encoding=UTF-8"
    export PATH=$CONSCRIPT_HOME/bin:$PATH

### usage:
Follow g8 [installation instructions](http://github.com/n8han/giter8#readme), [Install Issue](https://github.com/n8han/conscript/issues/72#issuecomment-156680186) or when using homebrew:

    brew install giter8

Go to your favourite shell and enter

    g8 alexholly/godot-module
    cd [app-name]
