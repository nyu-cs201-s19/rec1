# Computer Systems Organization : Recitation 01
-----------------------------------------------

The purpose of these exercises is to get you up and running with the tools & environment you will be using over the course of the semester. All of the tools that you should be using for this course are available in a standard Linux
distribution. You may be able to install them on your own machine (and in some cases you should), but since there are many different setups and systems, we cannot provide support for the tools on your own system. 
The graders and instructors will be using the provide Linux systems and your code has to function properly on those systems. 
__Any code that you write this semester (for recitaions and for projects) has to _work_ (i.e., compile and run according to the specification) in those Linux environments.__ 

You will do the following...

* Setup a workspace on Cloud9 (if not done already) 
* Use a few basic Unix/Linux (or rather `bash` commands 
* Confirm that `git` is installed in the workspace
* Clone this repository to your workspace  
* Compile and execute some programs in C 

Detailed instructions on how to do these things are below. 

** For all things that require your email, please use your NYU email only.

## Part 1: Cloud9 Workspace 

This week you should setup a Cloud9 workspace that allows you to create and run programs in a very simple Linux environment that is based on the Ubuntu distribution. 

Next week you will be given an account on the CIMS Linux server. 

- Login to Cloud9 at https://cs.nyu.edu/~joannakl/cs201_s19/ . You should have received an email invitation to join the team for the course. 
- Under _Your Team Subsctiptions_ you should see the _cs201_ team. Click on in. 
- You should now see a workspace with the description "ubuntu machine for use in cs201". __Do NOT open__ that workspace. 
  Use the _Clone_ button to create your own workspace. (WARNING: this may take some time. ) 
  


## Part 2: `git` & Github 

`git` is a “version control system”. It provides, among other things, change tracking for source files. It comes preinstalled the Linux platforms that you will be using for the course. 

- You can test the install of git on your system by running the command `git` from terminal. This should display the basic help for the command. 

- Run the following commands from terminal:<br>
   ```git config --global user.email "YOUR_EMAIL"```<br>
   ```git config --global user.name "YOUR NAME"```<br>
   (The email should be the same email you used to register your github account. Your name should be your name or nickname    - just make sure that it is proper since the instructors and graders will read it. )
(You will need to perform the above two steps on the CIMS Linux server next week. These instructions basically setup your `git` identity on a particular computer.) 

Github is `git` hosting service. This means they run the servers that host our remote `git` repositories. A repository is just  some source code organized into a collection. 

Github has donated an 'organization' for our class. An organization is just a private site for us to share repositories as a group. Our organization is called 'nyu-cs201-s19'.

Github will contain repositories for each of homeworks, in-class code, etc. We will effectively download the code from Github to work on it, then we will upload the code back to Github so it can be graded. We will be dooing this all with `git` commands on the command line. This system also serves as a backup of your work. 

- To learn more about git version control, watch the [git basics videos](http://git-scm.com/videos).
- To learn more about Github, watch [this YouTube video](https://www.youtube.com/watch?v=0fKg7e37bQE).
- A [simple git cheatsheet](http://rogerdudler.github.io/git-guide/). 
- A [complete reference](http://www.git-scm.com/book/en/v2).
- A few other tutorials that may be useful:
    * [An Intro to Git and GitHub for Beginners](http://product.hubspot.com/blog/git-and-github-tutorial-for-beginners) by Meghan Nelson
    * [GitHub for Beginners: Don't Get Scared, Get Started](http://readwrite.com/2013/09/30/understanding-github-a-journey-for-beginners-part-1/) by Lauren Orsini  
    

More on `git` & Github will be covered in lectures and recitations later on, but you should use the above tutorials to learn as much as you can ahead of time.   
  
  
## Part 3: Unix/Linux Commands 

Most of you are used to interacting with computers and smartphones by GUI and
the touch interface.  As a developer / programmer / advanced user, you
can do your job more efficiently by mastering the commandline interface.  In
UNIX, most of the interesting things you want to do can be accomplished by skillfully combining
various commands.  

Your lab virtual machine is a Linux box.  Your MacOS laptop is based on BSD
UNIX.  Most UNIX commands you learn apply to both, but there are
variations.


Please read this [Beginner's Guide to the Linux Command Line](https://www.techspot.com/guides/835-linux-command-line-basics/) and [Beginner's Guide to the Linux Command Line, Part II](https://www.techspot.com/guides/844-linux-command-line-part-ii/) for some basics about the command line tools. 
For a much more detailed guide you can use 
[The Art of Command Line ](https://github.com/jlevy/the-art-of-command-line).
Below is a short list of the most basic commands you will typically use on a day to day basis. This 
[cheatsheet](http://cheatsheetworld.com/programming/unix-linux-cheat-sheet/) may also come in handy until
your fingers memorize the most often used commands. 

- `man` command displays a manual page (or simply help) for the command (this is the easiest way to learn about options to the commands that you know and about new commands)
- `pwd` print the name of the present working directory
- `ls` list content of the current working directory
- `ls dir_name` list content of the directory named dir name
- `cd dir_name` change directory, changes the current working directory to dir name
- `cd ..` move one directory up in the directory tree
- `cd` change the current working directory to your home directory
- `cp file1 file2` copy `file1` into `file2`, where `file1` and `file2` can be either relative or complete path names
- `mv file1 file2` move `file1` into `file2`, where `file1` and `file2` can be either relative or complete path names
- `rm file` remove a file (there is no undoing it, so be very careful!)
- `mkdir path` make a directory at the specified path
- `rmdir path` remove the directory specified by the path (there is no undoing it, so be very careful!)
- `file file_name` determine the type of a file
- `less file_name` view the file in the terminal
- `more file_name` view the file in the terminal
- `cat file_name1 file_name2 ... file_nameN` concatenate files and print them to standard output
- `head fine_name` print the first 10 lines of the file
- `tail fine_name` print the last 10 lines of the file 
- `wget URL` download the file at the specified URL address 
- `wc file_name` print newline, word, and byte counts for each file
- `COMMAND_1 | COMMAND_2` (or pipe) redirect standard output produced by one command to the standard input of another command
- `COMMAND > file_name` redirect standard output from a command to a file
- `COMMAND < file_name`  use the content of the file in place of the standard input for a command 


### Exercises

If you completed the form with your GitHub username prior to Sunday night, you should see a repository called 
`YOUR_USERNAME-rec1` in the course organization. You should be working with that repository for this exercise. Use the name of that repository whenever it says "REPOSITORY_NAME" in the instrucitons below. 

If you did not complete the form with your GitHub username, than you will need to work with the shared repository called `rec1`. Use the name of that repository whenever it says "REPOSITORY_NAME" in the instrucitons below. You will not be able to complete the last few steps. You should get back to these instructions and repeat them once you get your own repository. 

Clone the recitation 1 repository to your own workspace (this time it is the workspace on Cloud9 instance):

   git clone https://github.com/nyu-cs201-s19/REPOSITORY_NAME 
   
You will be prompted for your username and password on GitHub. (Note that when you type the password, you will not see any text in the terminal. This is normal behavior on a Linux system.) 
   
Run `ls` to verify that a directory called REPOSITORY_NAME was created.    

__Complete each exercise below using command line instructions only!__

For each exercise there are suggested commands that might come in handy. You do not need to use those specific commands. There are many ways to achieve the same goal. Use the Linux manual 
pages to figure out how to use those commands (`man cp` gives you the manual page for `cp` command). <br>
(HINT: it may be useful to lookup what `history` command does to answer these questions). 

* Change your current working directory to the directory named REPOSITORY_NAME. 

* In the 'unix' directory in this repository make a subdirectory called 'backup'. Copy unix/foo.txt into it.
<br>(`cd`, `mkdir`, `cp` )

* Rename the file foo.txt to answers.txt using the command line. For all remaining unix exercises, write your answers into this file so we can use it for grading. Your answers should be  the commands that you used to solve the exercise (just type the command line commands into
the file answers.txt - you can use any text editor for that).
<br>(`mv`  )

* Under the root folder of the repository, create the directories `multiple/directories`. 
<br>(`mkdir`  )

* Create the empty file `test.txt` under `multiple/directories`.
<br>(`touch`  )

* Write "Hello !" into the file without opening it. 
<br>(`cat` and many other options  )

* Output the content of the file to the command line.
<br>(`more`, `less`  )

* Remove the folder multiple
<br>(`rm`, `rmdir` )

* The Linux kernel repository maintained by Linus Torvalds can be found at https://github.com/torvalds/linux/tree/master/kernel . Using commend line only, download and
extract the source code for one of the files located at: 
https://raw.githubusercontent.com/torvalds/linux/master/kernel/reboot.c
<br>(`wget` )

* Using the command line only (i.e., do not open the file itself in an editor), find out find out how many lines and how many characters are inside the reboot.c file.
<br>(`wc` ) 

Make sure you have all the commands that you run listed in `answers.txt`. Commit and push your changes. 




Step 2: Git & Github 
--------------------

Git is a “version control system”. It provides, among other things, change tracking for source files. It comes preinstalled on your VM. 

* You can test the install of git on your system by running the command `git` from terminal (Start Menu > Accessories > LXTerminal). 
* Run the following commands from terminal:<br>
   ```git config --global user.email "you@nyu.edu"```<br>
   ```git config --global user.name "Your Name"```<br>
   (The email should be the same email you used to register your github account)

Github is Git hosting service. This means they run the servers that host our remote Git repositories. A repository is just  some source code organized into a collection. 

Github has donated an 'organization' for our class. An organization is just a private site for us to share repositories as a group. Our organization is called 'nyu-cs201-s18'.

Github will contain repositories for each of homeworks, in-class code, etc. We will effectively download the code from Git to work on it, then we will upload the code back to Github so it can be graded. We will be dooing this all with git commands on the command line.

* To learn more about git version control, watch the [git basics videos](http://git-scm.com/videos).
* To learn more about Github, watch [this YouTube video](https://www.youtube.com/watch?v=0fKg7e37bQE).
* A [simple git cheatsheet](http://rogerdudler.github.io/git-guide/). 
* A [complete reference](http://www.git-scm.com/book/en/v2).
* A few other tutorials that may be useful:
    * [An Intro to Git and GitHub for Beginners](http://product.hubspot.com/blog/git-and-github-tutorial-for-beginners) by Meghan Nelson
    * [GitHub for Beginners: Don't Get Scared, Get Started](http://readwrite.com/2013/09/30/understanding-github-a-journey-for-beginners-part-1/) by Lauren Orsini  
    

More on Git & Github will be covered in lectures and recitations later on, but you should use the above tutorials to learn as much as you can ahead of time. 

Step 3: Fork the rec1 repository and push a commit
--------------------------------------------------

You should have received an email from Github notifying you that you have been added to the 'nyu-cs201-s18' organization. This means you have access to class repositories. This is where you will get your lab assignments as well as code used in class.

* In your VM, open a browser to this respository.
* Click the 'Fork' button on the top right corner. Select your username as the fork destination. (The forked repository contains your own private copy of the files for the recitation. Any changes you make to those files
do not affect the original repository that everybody else is looking at.)
* Once the repo is created, click HTTPS and then copy to your clipboard the 'HTTPS clone URL' from the text
box (the text should look as follows 'https://github.com/YOUR_GITHUB_USERNAME/rec1.git' - this will be 
different for different repositories).
* Choose a place on your VM for your homeworks to reside and open a terminal to that location (good locations 
are a dedicated directory in your home folder or a directory on your Desktop).
* Execute the following series of commands: <br/>
  ```git clone https://github.com/YOUR-GITHUB-USERNAME/rec1.git```<br/>
  ```cd rec1  ```<br/>
  ```touch cso-rocks.txt   ```<br/>
  
  `touch` creates an empty file named cso-rocks.txt in your rec1 directory. You can use a text editor to add some 
  content to it (there are a few text editors installed on the virtual machine: vim, emacs, geany, leafpad). 
  
  ```git add cso-rocks.txt    ```<br/>
  ```git commit -m "First commit" cso-rocks.txt   ```<br/>
  ```git push origin master   ```<br/>  

    You should now see a file 'cso-'rocks.txt' on the Github page for your fork of the rec1 repository. 

Step 4: 'Hello World'   
---------------------

You use the C compiler command `gcc`, to compile C programs. gcc comes preinstalled on your VM. 

`gcc`, as well as many key pieces of development software (e.g. the C library, `make`, `gdb`), have been developed by [GNU](http://www.gnu.org/). That's why you hear people sometimes refer to GNU/Linux since strictly speaking, Linux is just the kernel of the OS and not the complete system.

* Open and **read the comments** in `basic.c`
* Compile the `basic.c` C file, type `gcc basic.c` in the terminal. This generates an executable `a.out`. 
* Execute it by typing `./a.out`
* Repeat the above three steps for `standard.c`
* Edit the `basic.c` (using any text editor on the virutal machine) so that the program prints
"Hello CSO. My name is YOUR_NAME" message (replace YOUR_NAME with your actual name!). 
Save the files and commit the changes to your GitHub repository. 

Step 5: Install Sublime (Optional)
----------------------------------

We will need some editor into which we will write code. You can choose whatever editor you want, however we are going to stay away from full fledged IDE's for the most part during this course, we want to become command-line masters!

The obvious choices, VIM and Emacs are somewhat challenging to learn (though very powerful when you do!). So if you are not familiar with them, I suggest you use [Sublime 2](https://www.sublimetext.com/). Its easy to use and provides a number of nice features for developers. 

* In your VM, open a terminal and run the following series of commands<br/>
  ```sudo add-apt-repository -y ppa:webupd8team/sublime-text-2  ```<br/>
  ```sudo apt-get update  ```<br/>
  ```sudo apt-get install sublime-text  ```<br/>

Using an editor will be much more convenient than writing code into something that resembles notepad.
