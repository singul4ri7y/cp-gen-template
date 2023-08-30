# Competitive Programming Template Generator

Generate Competitive Programming templates with a simple, cool command.

## How to use
This project is primarily designed for Linux/Unix and Darwin users, cause it is really convenient to run scripts as applications in terminal on these OS. Windows users also can use it in conjunction with 3rd party projects like [snaury/script-runner](https://github.com/snaury/script-runner) and use it in CMD or PowerShell alternatively.

To use the scripts of this projects, first you need to install Promit interpreter into your computer. The installation manual can be found [here](https://github.com/singul4ri7y/promit#install).

Go to `config.promit` and edit the configuration which befits you.

Move the `gen` and `config.promit` files to `/usr/local/bin` (Linux/Unix/Darwin) or in `PATH` (Windows).

<b>Usage</b>: `gen the_template output_file_name your_username preferred_extension`

If you provide none of the arguments, the program will resort to the default ones defined in `config.promit`.

## How it works

Your templates will be files inside of a folder you define as the template location in the config. When you generate a template, it will take the template name, find a file that has coherent/matching name (without extension) and copys the file content. Then it creates the output file and writes down author name, date when it was created etc. with the content of the template file. Simple.

Enjoy.