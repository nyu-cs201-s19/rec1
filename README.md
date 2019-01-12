# Computer Systems Organization : Recitation 01
-----------------------------------------------

The purpose of these exercises is to get you up and running with the tools & environment you will be using over the course of the semester. 

You will do the following...

* Install the Virtual Machine (VM) 
* Confirm that Git is installed on your VM
* Create a Github repository that is a 'fork' of this 'repository'.
* 'Push' some commits to your new Github repository.   
* Compile and execute some programs in C. 

Detailed instructions on how to do these things are below. 

** For all things that require your email, please use your NYU email only.

Step 1: Virtual Machine
-----------------------

A virtual machine (VM) is an operating system OS or application environment that is installed on a 'host' computer which imitates dedicated hardware. The end user has the (roughtly) same experience on a virtual machine as they would have on dedicated hardware.

You are required to do all labs on the class virtual machine (VM) based on Ubuntu Linux. To get the virtual machine running on your personal desktop or laptop,  follow the steps listed on the [course website](https://joannakl.github.io/cs201_s18/daily.html).

To login to your virtual machine use the login name *cso* and the password *spring18*.


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
