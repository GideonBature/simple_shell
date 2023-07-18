# 0x16. C - Simple Shell

<div react-class="tags/Tags"
react-props="{&quot;tags&quot;:[{&quot;id&quot;:7,&quot;value&quot;:&quot;C&quot;,&quot;author_id&quot;:null,&quot;created_at&quot;:&quot;2022-06-16T01:59:38.000Z&quot;,&quot;updated_at&quot;:&quot;2022-06-16T01:59:38.000Z&quot;},{&quot;id&quot;:16,&quot;value&quot;:&quot;Group project&quot;,&quot;author_id&quot;:null,&quot;created_at&quot;:&quot;2022-06-16T01:59:38.000Z&quot;,&quot;updated_at&quot;:&quot;2022-06-16T01:59:38.000Z&quot;},{&quot;id&quot;:20,&quot;value&quot;:&quot;Syscall&quot;,&quot;author_id&quot;:null,&quot;created_at&quot;:&quot;2022-06-16T01:59:38.000Z&quot;,&quot;updated_at&quot;:&quot;2022-06-16T01:59:38.000Z&quot;}]}"
react-cache-id="tags/Tags-0">

<div class="align-items-center d-flex flex-wrap gap-3 my-2">

<span class="label label-primary" style="font-size: 14px;">C</span><span
class="label label-primary" style="font-size: 14px;">Group
project</span><span class="label label-primary"
style="font-size: 14px;">Syscall</span>

</div>

</div>

<div react-class="projects/ProjectMetadata"
react-props="{&quot;metadata&quot;:{&quot;author&quot;:&quot;Julien Barbier&quot;,&quot;weight&quot;:10,&quot;correction&quot;:{&quot;released&quot;:false,&quot;auto_correction_available_at&quot;:&quot;2023-07-26T01:12:00.000+01:00&quot;,&quot;requires_auto_correction&quot;:true,&quot;requires_manual_correction&quot;:false},&quot;bpi&quot;:{&quot;current&quot;:true,&quot;started&quot;:false,&quot;in_second_deadline&quot;:false,&quot;starts_at&quot;:&quot;2023-07-12T06:00:00.000+01:00&quot;,&quot;ends_at&quot;:&quot;2023-07-27T06:00:00.000+01:00&quot;,&quot;second_deadline_at&quot;:&quot;2023-07-29T06:00:00.000+01:00&quot;},&quot;team&quot;:{&quot;in_team_of&quot;:2,&quot;members&quot;:[&quot;Gideon Bature&quot;,&quot;Wright OGUNDIYA&quot;]}}}"
react-cache-id="projects/ProjectMetadata-0">

-    By: Julien Barbier
-    Weight: 10
-    Project to be done in teams of 2 people (your team: Gideon Bature,
    Wright OGUNDIYA)
-    Project will start <span container="body" html="false"
    placement="auto top" toggle="tooltip" title=""
    original-title="2023-07-12 06:00 (GMT+01:00)"><span
    class="datetime">Jul 12, 2023 6:00 AM</span></span>, must end by
    <span container="body" html="false" placement="auto top"
    toggle="tooltip" title=""
    original-title="2023-07-27 06:00 (GMT+01:00)"><span
    class="datetime">Jul 27, 2023 6:00 AM</span></span>
-    Checker will be released at <span container="body" html="false"
    placement="auto top" toggle="tooltip" title=""
    original-title="2023-07-26 01:12 (GMT+01:00)"><span
    class="datetime">Jul 26, 2023 1:12 AM</span></span>
-    An auto review will be launched at the deadline

</div>

<div id="project_id" style="display: none" project-id="235">

</div>

<div class="panel panel-default">

<div class="panel-heading">

### Concepts

</div>

<div class="panel-body">

*For this project, we expect you to look at these concepts:*

-   [Everything you need to know to start coding your own
    shell](https://intranet.alxswe.com/concepts/64)
-   [Approaching a Project](https://intranet.alxswe.com/concepts/350)

</div>

</div>

<div id="project-description" class="panel panel-default">

<div class="panel-body">

## Background Context

Write a simple UNIX command interpreter.

<img
src="./Project_%200x16.%20C%20-%20Simple%20Shell%20_%20Lagos%20Intranet_files/shell.jpeg"
loading="lazy" style="" />

*^ “The Gates of Shell”, by
<a href="https://intranet.alxswe.com/rltoken/AtYRSM03vJDrko9xHodxFQ"
target="_blank" title="Spencer Cheng">Spencer Cheng</a>, featuring
<a href="https://intranet.alxswe.com/rltoken/-ezXgcyfhc8qU1DeUInLUA"
target="_blank" title="Julien Barbier">Julien Barbier</a>*

## Important message from Julien

It’s time for the famous Simple Shell project. This is one of the most
anticipated project and also one that will challenge you a lot about
everything you have learn so far:

-   Basics of programming
-   Basics of C
-   Basics of thinking like an engineer
-   Group work
-   and Learning how to learn

I would like to take this moment to remind you about a few important
things.

First, remember the framework. If you do not know it by heart already,
it is probably a good idea to read it again:
<a href="https://intranet.alxswe.com/rltoken/a08_c01OP1XHY3awtkdFRA"
target="_blank"
title="https://intranet.alxswe.com/concepts/559">https://intranet.alxswe.com/concepts/559</a>

Note that there is no point in this framework that says it is ok to look
at code from other people. It is not allowed to look at other people’s
code, either other students or online articles or videos. At ALX SE we
do not copy solutions and we do not look at it when we start a project.

In the context of learning (some of these will no longer be true when
you work):

-   NEVER copy any code, never look at solution (and never give any
    solution to your friends, you are not helping them by doing so)
-   ALWAYS write code alone from scratch after you get help to check
    that you have actually understood. If you can not do it, you have
    not understood enough, and need to study more. Do not rewrite code
    from memory, but from understanding.

I saw some of you sharing resources with each other already. Tutorials
on how to do the shell step by step with all the code associated with
these, or even video and documents with the solution without even any
explanation. This is not the right way to learn. Please do not be
tempted by these links. They will only push you to take shortcuts and /
or cheat. And trust me, you will be caught.
<a href="https://intranet.alxswe.com/rltoken/3nocfYiMMxjbhlMllUqLxg"
target="_blank" title="Kimba">Kimba</a> is not a joke and he is here to
remind you why you are here.

While we encourage the use of ChatGPT and co in the framework (also, not
right away, but at the right step, see framework), it is important to
understand that the same rules apply to these AI tools (again, in the
context of learning. When you will work it will be completely different,
but context matters). At no point does it say that you are allowed to
use copilot or ChatGPT to code the solution. If you do, you will get
200% (for a few hours), understand 0, learn 0, and you will be caught
for cheating 100%, and then your score for both you and your partner
will be 0%. If you don’t get how to use ChatGPT and other AI tools in
the context of learning, simply do not use them.

The reality is that at this point of the program, if you have not
cheated before, you have everything you need to complete the project
with what you have learned + the page “Everything you need to know to
start coding your own shell”
<a href="https://intranet.alxswe.com/rltoken/e6Nw3W01-33JDxlCyKX-Kw"
target="_blank"
title="https://intranet.alxswe.com/concepts/64">https://intranet.alxswe.com/concepts/64</a>

Actually, you do not even need to open Google once. Focus on your
whiteboarding, and everything will fall in place. Remember, at ALX SE
you never learn the solution, you learn how to walk toward the solution.
You learn to create the tutorial, so if you follow one, you are looking
at the solution, you are taking a very serious shortcut that will
undermine your learning.

Last thing about the framework. Note that the first thing to do is “0.
Read”. Every detail counts. Make sure you read and test everything.

The shell project is a group project. That means you will be paired with
someone. You already did this with printf, so please apply everything
you have learned from the printf experience here. A quick reminder, that
a group project is NOT:

-   I do nothing and cross fingers for my partner to do everything so I
    can have a good score
-   I do everything because I am so much better than my partner and I
    don’t care about them

A group project at ALX SE is a project that both of you are responsible
for. Everything anyone pushes to Github is the responsibility of both
partners. It is not ok to say later “I didn’t cheat it’s my partner I
didn’t know they didn’t tell me”.

So you are supposed to work TOGETHER. And you should both understand
every single line of code that any of you pushes. Here is a link for you
to read about pair programming:
<a href="https://intranet.alxswe.com/rltoken/G52zDoV1f2dmmMl3ngchyw"
target="_blank"
title="https://intranet.alxswe.com/concepts/121">https://intranet.alxswe.com/concepts/121</a>

If you plan on not working on the shell project (or if at any point in
time you can’t), it is your responsibility to tell both the staff and
your partner so that they can find another partner who will work with
them asap.

If your group gets caught for plagiarism we will not tolerate “I didn’t
do anything, so I should not be flagged”. Yes you should be flagged,
because you are someone who doesn’t care about others and thought it was
ok to let your partner down and to maybe get the score without doing
anything.

The shell is an incredibly cool project. GL HF!

Julien

## Resources

**Read or watch**:

-   <a href="https://intranet.alxswe.com/rltoken/f0YU9TAhniMXWlSXtb64Yw"
    target="_blank" title="Unix shell">Unix shell</a>
-   <a href="https://intranet.alxswe.com/rltoken/7LJOp2qP7qHUcsOK2-F3qA"
    target="_blank" title="Thompson shell">Thompson shell</a>
-   <a href="https://intranet.alxswe.com/rltoken/wTSu31ZP1f7fFTJFgRQC7w"
    target="_blank" title="Ken Thompson">Ken Thompson</a>
-   **Everything you need to know to start coding your own shell**
    concept page

**man or help**:

-   `sh` (*Run `sh` as well*)

## Learning Objectives

At the end of this project, you are expected to be able to
<a href="https://intranet.alxswe.com/rltoken/9LNz86CtOTos9oL3zxIO3A"
target="_blank" title="explain to anyone">explain to anyone</a>,
**without the help of Google**:

### General

-   Who designed and implemented the original Unix operating system
-   Who wrote the first version of the UNIX shell
-   Who invented the B programming language (the direct predecessor to
    the C programming language)
-   Who is Ken Thompson
-   How does a shell work
-   What is a pid and a ppid
-   How to manipulate the environment of the current process
-   What is the difference between a function and a system call
-   How to create processes
-   What are the three prototypes of `main`
-   How does the shell use the `PATH` to find the programs
-   How to execute another program with the `execve` system call
-   How to suspend the execution of a process until one of its children
    terminates
-   What is `EOF` / “end-of-file”?

### Copyright - Plagiarism

-   You are tasked to come up with solutions for the tasks below
    yourself to meet with the above learning objectives.
-   You will not be able to meet the objectives of this or any following
    project by copying and pasting someone else’s work.
-   You are not allowed to publish any content of this project.
-   Any form of plagiarism is strictly forbidden and will result in
    removal from the program.

## Requirements

### General

-   Allowed editors: `vi`, `vim`, `emacs`
-   All your files will be compiled on Ubuntu 20.04 LTS using `gcc`,
    using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
-   All your files should end with a new line
-   A `README.md` file, at the root of the folder of the project is
    mandatory
-   Your code should use the `Betty` style. It will be checked using
    <a href="https://github.com/alx-tools/Betty/blob/master/betty-style.pl"
    target="_blank" title="betty-style.pl">betty-style.pl</a> and
    <a href="https://github.com/alx-tools/Betty/blob/master/betty-doc.pl"
    target="_blank" title="betty-doc.pl">betty-doc.pl</a>
-   Your shell should not have any memory leaks
-   No more than 5 functions per file
-   All your header files should be include guarded
-   Use system calls only when you need to
    (<a href="https://intranet.alxswe.com/rltoken/EU7B1PTSy14INnZEShpobQ"
    target="_blank" title="why?">why?</a>)
-   Write a `README` with the description of your project
-   You should have an `AUTHORS` file at the root of your repository,
    listing all individuals having contributed content to the
    repository. Format, see
    <a href="https://intranet.alxswe.com/rltoken/UL8J3kgl7HBK_Z9iBL3JFg"
    target="_blank" title="Docker">Docker</a>

### GitHub

\**There should be one project repository per group. If you and your
partner have a repository with the same name in both your accounts, you
risk a 0% score. Add your partner as a collaborator. \**

## More Info

### Output

-   Unless specified otherwise, your program **must have the exact same
    output** as `sh` (`/bin/sh`) as well as the exact same error output.
-   The only difference is when you print an error, the name of the
    program must be equivalent to your `argv[0]` (See below)

Example of error with `sh`:

    $ echo "qwerty" | /bin/sh
    /bin/sh: 1: qwerty: not found
    $ echo "qwerty" | /bin/../bin/sh
    /bin/../bin/sh: 1: qwerty: not found
    $

Same error with your program `hsh`:

    $ echo "qwerty" | ./hsh
    ./hsh: 1: qwerty: not found
    $ echo "qwerty" | ./././hsh
    ./././hsh: 1: qwerty: not found
    $

### List of allowed functions and system calls

-   `access` (man 2 access)
-   `chdir` (man 2 chdir)
-   `close` (man 2 close)
-   `closedir` (man 3 closedir)
-   `execve` (man 2 execve)
-   `exit` (man 3 exit)
-   `_exit` (man 2 \_exit)
-   `fflush` (man 3 fflush)
-   `fork` (man 2 fork)
-   `free` (man 3 free)
-   `getcwd` (man 3 getcwd)
-   `getline` (man 3 getline)
-   `getpid` (man 2 getpid)
-   `isatty` (man 3 isatty)
-   `kill` (man 2 kill)
-   `malloc` (man 3 malloc)
-   `open` (man 2 open)
-   `opendir` (man 3 opendir)
-   `perror` (man 3 perror)
-   `read` (man 2 read)
-   `readdir` (man 3 readdir)
-   `signal` (man 2 signal)
-   `stat` (\_\_xstat) (man 2 stat)
-   `lstat` (\_\_lxstat) (man 2 lstat)
-   `fstat` (\_\_fxstat) (man 2 fstat)
-   `strtok` (man 3 strtok)
-   `wait` (man 2 wait)
-   `waitpid` (man 2 waitpid)
-   `wait3` (man 2 wait3)
-   `wait4` (man 2 wait4)
-   `write` (man 2 write)

### Compilation

Your shell will be compiled this way:

    gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh

### Testing

Your shell should work like this in interactive mode:

    $ ./hsh
    ($) /bin/ls
    hsh main.c shell.c
    ($)
    ($) exit
    $

But also in non-interactive mode:

    $ echo "/bin/ls" | ./hsh
    hsh main.c shell.c test_ls_2
    $
    $ cat test_ls_2
    /bin/ls
    /bin/ls
    $
    $ cat test_ls_2 | ./hsh
    hsh main.c shell.c test_ls_2
    hsh main.c shell.c test_ls_2
    $

### Checks

The Checker will be released at the end of the project (1-2 days before
the deadline). We **strongly** encourage the entire class to work
together to create a suite of checks covering both regular tests and
edge cases for each task. See task `8. Test suite`.

</div>

</div>

## Tasks

<div id="task-num-0" data-role="task1033" position="1">

<div id="task-1033" class="panel panel-default task-card">

<span id="user_id" data-id="295751"></span>

<div class="panel-heading panel-heading-actions">

### 0. Betty would be proud

<div>

<span class="label label-info"> mandatory </span>

</div>

</div>

<div class="panel-body">

<span id="user_id" data-id="295751"></span>

Write a beautiful code that passes the Betty checks

</div>

<div class="list-group">

<div class="list-group-item">

**Repo:**

-   GitHub repository: `simple_shell`

</div>

</div>

<div class="panel-footer">

<div class="align-items-center d-flex justify-content-between">

<div>

<span class="no"></span> <span class="yes"></span> <span
class="pending"></span> Done<span class="no pending">?</span><span
class="yes">!</span>

Help

<div id="task-1033-users-done-modal" class="modal fade users-done-modal"
task-id="1033" batch-id="92">

<div class="modal-dialog">

<div class="modal-content">

<div class="modal-header">

<span aria-hidden="true">×</span>

#### Learners who are done with "0. Betty would be proud"

</div>

<div class="modal-body">

<div class="list-group">

</div>

<div class="spinner">

<div class="bounce1">

</div>

<div class="bounce2">

</div>

<div class="bounce3">

</div>

</div>

<div class="error">

</div>

</div>

</div>

</div>

</div>

Get a sandbox

</div>

<div class="fs-4">

</div>

</div>

</div>

</div>

</div>

<div id="task-num-1" data-role="task1034" position="2">

<div id="task-1034" class="panel panel-default task-card">

<span id="user_id" data-id="295751"></span>

<div class="panel-heading panel-heading-actions">

### 1. Simple shell 0.1

<div>

<span class="label label-info"> mandatory </span>

</div>

</div>

<div class="panel-body">

<span id="user_id" data-id="295751"></span>

Write a UNIX command line interpreter.

-   Usage: `simple_shell`

Your Shell should:

-   Display a prompt and wait for the user to type a command. A command
    line always ends with a new line.
-   The prompt is displayed again each time a command has been executed.
-   The command lines are simple, no semicolons, no pipes, no
    redirections or any other advanced features.
-   The command lines are made only of one word. No arguments will be
    passed to programs.
-   If an executable cannot be found, print an error message and display
    the prompt again.
-   Handle errors.
-   You have to handle the “end of file” condition (`Ctrl+D`)

You don’t have to:

-   use the `PATH`
-   implement built-ins
-   handle special characters : `"`, `'`, `` ` ``, `\`, `*`, `&`, `#`
-   be able to move the cursor
-   handle commands with arguments

*`execve` will be the core part of your Shell, don’t forget to pass the
environ to it…*

    julien@ubuntu:~/shell$ ./shell 
    #cisfun$ ls
    ./shell: No such file or directory
    #cisfun$ /bin/ls
    barbie_j       env-main.c  exec.c  fork.c  pid.c  ppid.c    prompt   prompt.c  shell.c  stat.c         wait
    env-environ.c  exec    fork    mypid   ppid   printenv  promptc  shell     stat test_scripting.sh  wait.c
    #cisfun$ /bin/ls -l
    ./shell: No such file or directory
    #cisfun$ ^[[D^[[D^[[D
    ./shell: No such file or directory
    #cisfun$ ^[[C^[[C^[[C^[[C
    ./shell: No such file or directory
    #cisfun$ exit
    ./shell: No such file or directory
    #cisfun$ ^C
    julien@ubuntu:~/shell$ echo "/bin/ls" | ./shell
    barbie_j       env-main.c  exec.c  fork.c  pid.c  ppid.c    prompt   prompt.c  shell.c  stat.c         wait
    env-environ.c  exec    fork    mypid   ppid   printenv  promptc  shell     stat test_scripting.sh  wait.c
    #cisfun$ julien@ubuntu:~/shell$

</div>

<div class="list-group">

<div class="list-group-item">

**Repo:**

-   GitHub repository: `simple_shell`

</div>

</div>

<div class="panel-footer">

<div class="align-items-center d-flex justify-content-between">

<div>

<span class="no"></span> <span class="yes"></span> <span
class="pending"></span> Done<span class="no pending">?</span><span
class="yes">!</span>

Help

<div id="task-1034-users-done-modal" class="modal fade users-done-modal"
task-id="1034" batch-id="92">

<div class="modal-dialog">

<div class="modal-content">

<div class="modal-header">

<span aria-hidden="true">×</span>

#### Learners who are done with "1. Simple shell 0.1"

</div>

<div class="modal-body">

<div class="list-group">

</div>

<div class="spinner">

<div class="bounce1">

</div>

<div class="bounce2">

</div>

<div class="bounce3">

</div>

</div>

<div class="error">

</div>

</div>

</div>

</div>

</div>

Get a sandbox

</div>

<div class="fs-4">

</div>

</div>

</div>

</div>

</div>

<div id="task-num-2" data-role="task1036" position="3">

<div id="task-1036" class="panel panel-default task-card">

<span id="user_id" data-id="295751"></span>

<div class="panel-heading panel-heading-actions">

### 2. Simple shell 0.2

<div>

<span class="label label-info"> mandatory </span>

</div>

</div>

<div class="panel-body">

<span id="user_id" data-id="295751"></span>

Simple shell 0.1 +

-   Handle command lines with arguments

</div>

<div class="list-group">

<div class="list-group-item">

**Repo:**

-   GitHub repository: `simple_shell`

</div>

</div>

<div class="panel-footer">

<div class="align-items-center d-flex justify-content-between">

<div>

<span class="no"></span> <span class="yes"></span> <span
class="pending"></span> Done<span class="no pending">?</span><span
class="yes">!</span>

Help

<div id="task-1036-users-done-modal" class="modal fade users-done-modal"
task-id="1036" batch-id="92">

<div class="modal-dialog">

<div class="modal-content">

<div class="modal-header">

<span aria-hidden="true">×</span>

#### Learners who are done with "2. Simple shell 0.2"

</div>

<div class="modal-body">

<div class="list-group">

</div>

<div class="spinner">

<div class="bounce1">

</div>

<div class="bounce2">

</div>

<div class="bounce3">

</div>

</div>

<div class="error">

</div>

</div>

</div>

</div>

</div>

Get a sandbox

</div>

<div class="fs-4">

</div>

</div>

</div>

</div>

</div>

<div id="task-num-3" data-role="task1038" position="4">

<div id="task-1038" class="panel panel-default task-card">

<span id="user_id" data-id="295751"></span>

<div class="panel-heading panel-heading-actions">

### 3. Simple shell 0.3

<div>

<span class="label label-info"> mandatory </span>

</div>

</div>

<div class="panel-body">

<span id="user_id" data-id="295751"></span>

Simple shell 0.2 +

-   Handle the `PATH`
-   `fork` must not be called if the command doesn’t exist

<!-- -->

    julien@ubuntu:~/shell$ ./shell_0.3
    :) /bin/ls
    barbie_j       env-main.c  exec.c  fork.c  pid.c  ppid.c    prompt   prompt.c  shell_0.3  stat    test_scripting.sh  wait.c
    env-environ.c  exec    fork    mypid   ppid   printenv  promptc  shell     shell.c    stat.c  wait
    :) ls
    barbie_j       env-main.c  exec.c  fork.c  pid.c  ppid.c    prompt   prompt.c  shell_0.3  stat    test_scripting.sh  wait.c
    env-environ.c  exec    fork    mypid   ppid   printenv  promptc  shell     shell.c    stat.c  wait
    :) ls -l /tmp 
    total 20
    -rw------- 1 julien julien    0 Dec  5 12:09 config-err-aAMZrR
    drwx------ 3 root   root   4096 Dec  5 12:09 systemd-private-062a0eca7f2a44349733e78cb4abdff4-colord.service-V7DUzr
    drwx------ 3 root   root   4096 Dec  5 12:09 systemd-private-062a0eca7f2a44349733e78cb4abdff4-rtkit-daemon.service-ANGvoV
    drwx------ 3 root   root   4096 Dec  5 12:07 systemd-private-062a0eca7f2a44349733e78cb4abdff4-systemd-timesyncd.service-CdXUtH
    -rw-rw-r-- 1 julien julien    0 Dec  5 12:09 unity_support_test.0
    :) ^C
    julien@ubuntu:~/shell$ 

</div>

<div class="list-group">

<div class="list-group-item">

**Repo:**

-   GitHub repository: `simple_shell`

</div>

</div>

<div class="panel-footer">

<div class="align-items-center d-flex justify-content-between">

<div>

<span class="no"></span> <span class="yes"></span> <span
class="pending"></span> Done<span class="no pending">?</span><span
class="yes">!</span>

Help

<div id="task-1038-users-done-modal" class="modal fade users-done-modal"
task-id="1038" batch-id="92">

<div class="modal-dialog">

<div class="modal-content">

<div class="modal-header">

<span aria-hidden="true">×</span>

#### Learners who are done with "3. Simple shell 0.3"

</div>

<div class="modal-body">

<div class="list-group">

</div>

<div class="spinner">

<div class="bounce1">

</div>

<div class="bounce2">

</div>

<div class="bounce3">

</div>

</div>

<div class="error">

</div>

</div>

</div>

</div>

</div>

Get a sandbox

</div>

<div class="fs-4">

</div>

</div>

</div>

</div>

</div>

<div id="task-num-4" data-role="task1039" position="5">

<div id="task-1039" class="panel panel-default task-card">

<span id="user_id" data-id="295751"></span>

<div class="panel-heading panel-heading-actions">

### 4. Simple shell 0.4

<div>

<span class="label label-info"> mandatory </span>

</div>

</div>

<div class="panel-body">

<span id="user_id" data-id="295751"></span>

Simple shell 0.3 +

-   Implement the `exit` built-in, that exits the shell
-   Usage: `exit`
-   You don’t have to handle any argument to the built-in `exit`

</div>

<div class="list-group">

<div class="list-group-item">

**Repo:**

-   GitHub repository: `simple_shell`

</div>

</div>

<div class="panel-footer">

<div class="align-items-center d-flex justify-content-between">

<div>

<span class="no"></span> <span class="yes"></span> <span
class="pending"></span> Done<span class="no pending">?</span><span
class="yes">!</span>

Help

<div id="task-1039-users-done-modal" class="modal fade users-done-modal"
task-id="1039" batch-id="92">

<div class="modal-dialog">

<div class="modal-content">

<div class="modal-header">

<span aria-hidden="true">×</span>

#### Learners who are done with "4. Simple shell 0.4"

</div>

<div class="modal-body">

<div class="list-group">

</div>

<div class="spinner">

<div class="bounce1">

</div>

<div class="bounce2">

</div>

<div class="bounce3">

</div>

</div>

<div class="error">

</div>

</div>

</div>

</div>

</div>

Get a sandbox

</div>

<div class="fs-4">

</div>

</div>

</div>

</div>

</div>

<div id="task-num-5" data-role="task1042" position="6">

<div id="task-1042" class="panel panel-default task-card">

<span id="user_id" data-id="295751"></span>

<div class="panel-heading panel-heading-actions">

### 5. Simple shell 1.0

<div>

<span class="label label-info"> mandatory </span>

</div>

</div>

<div class="panel-body">

<span id="user_id" data-id="295751"></span>

Simple shell 0.4 +

-   Implement the `env` **built-in**, that prints the current
    environment

<!-- -->

    julien@ubuntu:~/shell$ ./simple_shell
    $ env
    USER=julien
    LANGUAGE=en_US
    SESSION=ubuntu
    COMPIZ_CONFIG_PROFILE=ubuntu
    SHLVL=1
    HOME=/home/julien
    C_IS=Fun_:)
    DESKTOP_SESSION=ubuntu
    LOGNAME=julien
    TERM=xterm-256color
    PATH=/home/julien/bin:/home/julien/.local/bin:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/local/games:/snap/bin
    DISPLAY=:0
    $ exit
    julien@ubuntu:~/shell$ 

</div>

<div class="list-group">

<div class="list-group-item">

**Repo:**

-   GitHub repository: `simple_shell`

</div>

</div>

<div class="panel-footer">

<div class="align-items-center d-flex justify-content-between">

<div>

<span class="no"></span> <span class="yes"></span> <span
class="pending"></span> Done<span class="no pending">?</span><span
class="yes">!</span>

Help

<div id="task-1042-users-done-modal" class="modal fade users-done-modal"
task-id="1042" batch-id="92">

<div class="modal-dialog">

<div class="modal-content">

<div class="modal-header">

<span aria-hidden="true">×</span>

#### Learners who are done with "5. Simple shell 1.0"

</div>

<div class="modal-body">

<div class="list-group">

</div>

<div class="spinner">

<div class="bounce1">

</div>

<div class="bounce2">

</div>

<div class="bounce3">

</div>

</div>

<div class="error">

</div>

</div>

</div>

</div>

</div>

Get a sandbox

</div>

<div class="fs-4">

</div>

</div>

</div>

</div>

</div>

<div id="task-num-6" data-role="task1035" position="9">

<div id="task-1035" class="panel panel-default task-card">

<span id="user_id" data-id="295751"></span>

<div class="panel-heading panel-heading-actions">

### 6. Simple shell 0.1.1

<div>

<span class="label label-info"> \#advanced </span>

</div>

</div>

<div class="panel-body">

<span id="user_id" data-id="295751"></span>

Simple shell 0.1 +

-   Write your own `getline` function
-   Use a buffer to read many chars at once and call the least possible
    the `read` system call
-   You will need to use `static` variables
-   You are not allowed to use `getline`

You don’t have to:

-   be able to move the cursor

</div>

<div class="list-group">

<div class="list-group-item">

**Repo:**

-   GitHub repository: `simple_shell`

</div>

</div>

<div class="panel-footer">

<div class="align-items-center d-flex justify-content-between">

<div>

<span class="no"></span> <span class="yes"></span> <span
class="pending"></span> Done<span class="no pending">?</span><span
class="yes">!</span>

Help

<div id="task-1035-users-done-modal" class="modal fade users-done-modal"
task-id="1035" batch-id="92">

<div class="modal-dialog">

<div class="modal-content">

<div class="modal-header">

<span aria-hidden="true">×</span>

#### Learners who are done with "6. Simple shell 0.1.1"

</div>

<div class="modal-body">

<div class="list-group">

</div>

<div class="spinner">

<div class="bounce1">

</div>

<div class="bounce2">

</div>

<div class="bounce3">

</div>

</div>

<div class="error">

</div>

</div>

</div>

</div>

</div>

Get a sandbox

</div>

<div class="fs-4">

</div>

</div>

</div>

</div>

</div>

<div id="task-num-7" data-role="task1037" position="10">

<div id="task-1037" class="panel panel-default task-card">

<span id="user_id" data-id="295751"></span>

<div class="panel-heading panel-heading-actions">

### 7. Simple shell 0.2.1

<div>

<span class="label label-info"> \#advanced </span>

</div>

</div>

<div class="panel-body">

<span id="user_id" data-id="295751"></span>

Simple shell 0.2 +

-   You are not allowed to use `strtok`

</div>

<div class="list-group">

<div class="list-group-item">

**Repo:**

-   GitHub repository: `simple_shell`

</div>

</div>

<div class="panel-footer">

<div class="align-items-center d-flex justify-content-between">

<div>

<span class="no"></span> <span class="yes"></span> <span
class="pending"></span> Done<span class="no pending">?</span><span
class="yes">!</span>

Help

<div id="task-1037-users-done-modal" class="modal fade users-done-modal"
task-id="1037" batch-id="92">

<div class="modal-dialog">

<div class="modal-content">

<div class="modal-header">

<span aria-hidden="true">×</span>

#### Learners who are done with "7. Simple shell 0.2.1"

</div>

<div class="modal-body">

<div class="list-group">

</div>

<div class="spinner">

<div class="bounce1">

</div>

<div class="bounce2">

</div>

<div class="bounce3">

</div>

</div>

<div class="error">

</div>

</div>

</div>

</div>

</div>

Get a sandbox

</div>

<div class="fs-4">

</div>

</div>

</div>

</div>

</div>

<div id="task-num-8" data-role="task1040" position="11">

<div id="task-1040" class="panel panel-default task-card">

<span id="user_id" data-id="295751"></span>

<div class="panel-heading panel-heading-actions">

### 8. Simple shell 0.4.1

<div>

<span class="label label-info"> \#advanced </span>

</div>

</div>

<div class="panel-body">

<span id="user_id" data-id="295751"></span>

Simple shell 0.4 +

-   handle arguments for the built-in `exit`
-   Usage: `exit status`, where `status` is an integer used to exit the
    shell

<!-- -->

    julien@ubuntu:~/shell$ ./shell_0.4.1
    $ exit 98
    julien@ubuntu:~/shell$ echo $?
    98
    julien@ubuntu:~/shell$ 

</div>

<div class="list-group">

<div class="list-group-item">

**Repo:**

-   GitHub repository: `simple_shell`

</div>

</div>

<div class="panel-footer">

<div class="align-items-center d-flex justify-content-between">

<div>

<span class="no"></span> <span class="yes"></span> <span
class="pending"></span> Done<span class="no pending">?</span><span
class="yes">!</span>

Help

<div id="task-1040-users-done-modal" class="modal fade users-done-modal"
task-id="1040" batch-id="92">

<div class="modal-dialog">

<div class="modal-content">

<div class="modal-header">

<span aria-hidden="true">×</span>

#### Learners who are done with "8. Simple shell 0.4.1"

</div>

<div class="modal-body">

<div class="list-group">

</div>

<div class="spinner">

<div class="bounce1">

</div>

<div class="bounce2">

</div>

<div class="bounce3">

</div>

</div>

<div class="error">

</div>

</div>

</div>

</div>

</div>

Get a sandbox

</div>

<div class="fs-4">

</div>

</div>

</div>

</div>

</div>

<div id="task-num-9" data-role="task1043" position="13">

<div id="task-1043" class="panel panel-default task-card">

<span id="user_id" data-id="295751"></span>

<div class="panel-heading panel-heading-actions">

### 9. setenv, unsetenv

<div>

<span class="label label-info"> \#advanced </span>

</div>

</div>

<div class="panel-body">

<span id="user_id" data-id="295751"></span>

Simple shell 1.0 +

Implement the `setenv` and `unsetenv` builtin commands

-   `setenv`
    -   Initialize a new environment variable, or modify an existing one
    -   Command syntax: `setenv VARIABLE VALUE`
    -   Should print something on stderr on failure
-   `unsetenv`
    -   Remove an environment variable
    -   Command syntax: `unsetenv VARIABLE`
    -   Should print something on stderr on failure

</div>

<div class="list-group">

<div class="list-group-item">

**Repo:**

-   GitHub repository: `simple_shell`

</div>

</div>

<div class="panel-footer">

<div class="align-items-center d-flex justify-content-between">

<div>

<span class="no"></span> <span class="yes"></span> <span
class="pending"></span> Done<span class="no pending">?</span><span
class="yes">!</span>

Help

<div id="task-1043-users-done-modal" class="modal fade users-done-modal"
task-id="1043" batch-id="92">

<div class="modal-dialog">

<div class="modal-content">

<div class="modal-header">

<span aria-hidden="true">×</span>

#### Learners who are done with "9. setenv, unsetenv"

</div>

<div class="modal-body">

<div class="list-group">

</div>

<div class="spinner">

<div class="bounce1">

</div>

<div class="bounce2">

</div>

<div class="bounce3">

</div>

</div>

<div class="error">

</div>

</div>

</div>

</div>

</div>

Get a sandbox

</div>

<div class="fs-4">

</div>

</div>

</div>

</div>

</div>

<div id="task-num-10" data-role="task1044" position="14">

<div id="task-1044" class="panel panel-default task-card">

<span id="user_id" data-id="295751"></span>

<div class="panel-heading panel-heading-actions">

### 10. cd

<div>

<span class="label label-info"> \#advanced </span>

</div>

</div>

<div class="panel-body">

<span id="user_id" data-id="295751"></span>

Simple shell 1.0 +

Implement the builtin command `cd`:

-   Changes the current directory of the process.
-   Command syntax: `cd [DIRECTORY]`
-   If no argument is given to `cd` the command must be interpreted like
    `cd $HOME`
-   You have to handle the command `cd -`
-   You have to update the environment variable `PWD` when you change
    directory

`man chdir`, `man getcwd`

</div>

<div class="list-group">

<div class="list-group-item">

**Repo:**

-   GitHub repository: `simple_shell`

</div>

</div>

<div class="panel-footer">

<div class="align-items-center d-flex justify-content-between">

<div>

<span class="no"></span> <span class="yes"></span> <span
class="pending"></span> Done<span class="no pending">?</span><span
class="yes">!</span>

Help

<div id="task-1044-users-done-modal" class="modal fade users-done-modal"
task-id="1044" batch-id="92">

<div class="modal-dialog">

<div class="modal-content">

<div class="modal-header">

<span aria-hidden="true">×</span>

#### Learners who are done with "10. cd"

</div>

<div class="modal-body">

<div class="list-group">

</div>

<div class="spinner">

<div class="bounce1">

</div>

<div class="bounce2">

</div>

<div class="bounce3">

</div>

</div>

<div class="error">

</div>

</div>

</div>

</div>

</div>

Get a sandbox

</div>

<div class="fs-4">

</div>

</div>

</div>

</div>

</div>

<div id="task-num-11" data-role="task1045" position="15">

<div id="task-1045" class="panel panel-default task-card">

<span id="user_id" data-id="295751"></span>

<div class="panel-heading panel-heading-actions">

### 11. ;

<div>

<span class="label label-info"> \#advanced </span>

</div>

</div>

<div class="panel-body">

<span id="user_id" data-id="295751"></span>

Simple shell 1.0 +

-   Handle the commands separator `;`

<!-- -->

    alex@~$ ls /var ; ls /var
    backups  cache  crash  lib  local  lock  log  mail  metrics  opt  run  spool  tmp
    backups  cache  crash  lib  local  lock  log  mail  metrics  opt  run  spool  tmp
    alex@~$ ls /hbtn ; ls /var
    ls: cannot access /hbtn: No such file or directory
    backups  cache  crash  lib  local  lock  log  mail  metrics  opt  run  spool  tmp
    alex@~$ ls /var ; ls /hbtn
    backups  cache  crash  lib  local  lock  log  mail  metrics  opt  run  spool  tmp
    ls: cannot access /hbtn: No such file or directory
    alex@~$ ls /var ; ls /hbtn ; ls /var ; ls /var
    backups  cache  crash  lib  local  lock  log  mail  metrics  opt  run  spool  tmp
    ls: cannot access /hbtn: No such file or directory
    backups  cache  crash  lib  local  lock  log  mail  metrics  opt  run  spool  tmp
    backups  cache  crash  lib  local  lock  log  mail  metrics  opt  run  spool  tmp
    alex@~$

</div>

<div class="list-group">

<div class="list-group-item">

**Repo:**

-   GitHub repository: `simple_shell`

</div>

</div>

<div class="panel-footer">

<div class="align-items-center d-flex justify-content-between">

<div>

<span class="no"></span> <span class="yes"></span> <span
class="pending"></span> Done<span class="no pending">?</span><span
class="yes">!</span>

Help

<div id="task-1045-users-done-modal" class="modal fade users-done-modal"
task-id="1045" batch-id="92">

<div class="modal-dialog">

<div class="modal-content">

<div class="modal-header">

<span aria-hidden="true">×</span>

#### Learners who are done with "11. ;"

</div>

<div class="modal-body">

<div class="list-group">

</div>

<div class="spinner">

<div class="bounce1">

</div>

<div class="bounce2">

</div>

<div class="bounce3">

</div>

</div>

<div class="error">

</div>

</div>

</div>

</div>

</div>

Get a sandbox

</div>

<div class="fs-4">

</div>

</div>

</div>

</div>

</div>

<div id="task-num-12" data-role="task1046" position="16">

<div id="task-1046" class="panel panel-default task-card">

<span id="user_id" data-id="295751"></span>

<div class="panel-heading panel-heading-actions">

### 12. && and \|\|

<div>

<span class="label label-info"> \#advanced </span>

</div>

</div>

<div class="panel-body">

<span id="user_id" data-id="295751"></span>

Simple shell 1.0 +

-   Handle the `&&` and `||` shell logical operators

<!-- -->

    alex@~$ ls /var && ls /var
    backups  cache  crash  lib  local  lock  log  mail  metrics  opt  run  spool  tmp
    backups  cache  crash  lib  local  lock  log  mail  metrics  opt  run  spool  tmp
    alex@~$ ls /hbtn && ls /var
    ls: cannot access /hbtn: No such file or directory
    alex@~$ ls /var && ls /var && ls /var && ls /hbtn
    backups  cache  crash  lib  local  lock  log  mail  metrics  opt  run  spool  tmp
    backups  cache  crash  lib  local  lock  log  mail  metrics  opt  run  spool  tmp
    backups  cache  crash  lib  local  lock  log  mail  metrics  opt  run  spool  tmp
    ls: cannot access /hbtn: No such file or directory
    alex@~$ ls /var && ls /var && ls /var && ls /hbtn && ls /hbtn
    backups  cache  crash  lib  local  lock  log  mail  metrics  opt  run  spool  tmp
    backups  cache  crash  lib  local  lock  log  mail  metrics  opt  run  spool  tmp
    backups  cache  crash  lib  local  lock  log  mail  metrics  opt  run  spool  tmp
    ls: cannot access /hbtn: No such file or directory
    alex@~$
    alex@~$ ls /var || ls /var
    backups  cache  crash  lib  local  lock  log  mail  metrics  opt  run  spool  tmp
    alex@~$ ls /hbtn || ls /var
    ls: cannot access /hbtn: No such file or directory
    backups  cache  crash  lib  local  lock  log  mail  metrics  opt  run  spool  tmp
    alex@~$ ls /hbtn || ls /hbtn || ls /hbtn || ls /var
    ls: cannot access /hbtn: No such file or directory
    ls: cannot access /hbtn: No such file or directory
    ls: cannot access /hbtn: No such file or directory
    backups  cache  crash  lib  local  lock  log  mail  metrics  opt  run  spool  tmp
    alex@~$ ls /hbtn || ls /hbtn || ls /hbtn || ls /var || ls /var
    ls: cannot access /hbtn: No such file or directory
    ls: cannot access /hbtn: No such file or directory
    ls: cannot access /hbtn: No such file or directory
    backups  cache  crash  lib  local  lock  log  mail  metrics  opt  run  spool  tmp
    alex@~$

</div>

<div class="list-group">

<div class="list-group-item">

**Repo:**

-   GitHub repository: `simple_shell`

</div>

</div>

<div class="panel-footer">

<div class="align-items-center d-flex justify-content-between">

<div>

<span class="no"></span> <span class="yes"></span> <span
class="pending"></span> Done<span class="no pending">?</span><span
class="yes">!</span>

Help

<div id="task-1046-users-done-modal" class="modal fade users-done-modal"
task-id="1046" batch-id="92">

<div class="modal-dialog">

<div class="modal-content">

<div class="modal-header">

<span aria-hidden="true">×</span>

#### Learners who are done with "12. && and \|\|"

</div>

<div class="modal-body">

<div class="list-group">

</div>

<div class="spinner">

<div class="bounce1">

</div>

<div class="bounce2">

</div>

<div class="bounce3">

</div>

</div>

<div class="error">

</div>

</div>

</div>

</div>

</div>

Get a sandbox

</div>

<div class="fs-4">

</div>

</div>

</div>

</div>

</div>

<div id="task-num-13" data-role="task1047" position="17">

<div id="task-1047" class="panel panel-default task-card">

<span id="user_id" data-id="295751"></span>

<div class="panel-heading panel-heading-actions">

### 13. alias

<div>

<span class="label label-info"> \#advanced </span>

</div>

</div>

<div class="panel-body">

<span id="user_id" data-id="295751"></span>

Simple shell 1.0 +

-   Implement the `alias` builtin command
-   Usage: `alias [name[='value'] ...]`
    -   `alias`: Prints a list of all aliases, one per line, in the form
        `name='value'`
    -   `alias name [name2 ...]`: Prints the aliases `name`, `name2`,
        etc 1 per line, in the form `name='value'`
    -   `alias name='value' [...]`: Defines an alias for each `name`
        whose `value` is given. If `name` is already an alias, replaces
        its value with `value`

</div>

<div class="list-group">

<div class="list-group-item">

**Repo:**

-   GitHub repository: `simple_shell`

</div>

</div>

<div class="panel-footer">

<div class="align-items-center d-flex justify-content-between">

<div>

<span class="no"></span> <span class="yes"></span> <span
class="pending"></span> Done<span class="no pending">?</span><span
class="yes">!</span>

Help

<div id="task-1047-users-done-modal" class="modal fade users-done-modal"
task-id="1047" batch-id="92">

<div class="modal-dialog">

<div class="modal-content">

<div class="modal-header">

<span aria-hidden="true">×</span>

#### Learners who are done with "13. alias"

</div>

<div class="modal-body">

<div class="list-group">

</div>

<div class="spinner">

<div class="bounce1">

</div>

<div class="bounce2">

</div>

<div class="bounce3">

</div>

</div>

<div class="error">

</div>

</div>

</div>

</div>

</div>

Get a sandbox

</div>

<div class="fs-4">

</div>

</div>

</div>

</div>

</div>

<div id="task-num-14" data-role="task1048" position="18">

<div id="task-1048" class="panel panel-default task-card">

<span id="user_id" data-id="295751"></span>

<div class="panel-heading panel-heading-actions">

### 14. Variables

<div>

<span class="label label-info"> \#advanced </span>

</div>

</div>

<div class="panel-body">

<span id="user_id" data-id="295751"></span>

Simple shell 1.0 +

-   Handle variables replacement
-   Handle the `$?` variable
-   Handle the `$$` variable

<!-- -->

    julien@ubuntu:~/shell$ ./hsh
    $ ls /var
    backups  cache  crash  lib  local  lock  log  mail  metrics  opt  run  snap  spool  tmp
    $ echo $?
    0
    $ echo $$
    5104
    $ echo $PATH
    /home/julien/bin:/home/julien/.local/bin:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/local/games:/snap/bin
    $ exit 
    julien@ubuntu:~/shell$ 

</div>

<div class="list-group">

<div class="list-group-item">

**Repo:**

-   GitHub repository: `simple_shell`

</div>

</div>

<div class="panel-footer">

<div class="align-items-center d-flex justify-content-between">

<div>

<span class="no"></span> <span class="yes"></span> <span
class="pending"></span> Done<span class="no pending">?</span><span
class="yes">!</span>

Help

<div id="task-1048-users-done-modal" class="modal fade users-done-modal"
task-id="1048" batch-id="92">

<div class="modal-dialog">

<div class="modal-content">

<div class="modal-header">

<span aria-hidden="true">×</span>

#### Learners who are done with "14. Variables"

</div>

<div class="modal-body">

<div class="list-group">

</div>

<div class="spinner">

<div class="bounce1">

</div>

<div class="bounce2">

</div>

<div class="bounce3">

</div>

</div>

<div class="error">

</div>

</div>

</div>

</div>

</div>

Get a sandbox

</div>

<div class="fs-4">

</div>

</div>

</div>

</div>

</div>

<div id="task-num-15" data-role="task1049" position="19">

<div id="task-1049" class="panel panel-default task-card">

<span id="user_id" data-id="295751"></span>

<div class="panel-heading panel-heading-actions">

### 15. Comments

<div>

<span class="label label-info"> \#advanced </span>

</div>

</div>

<div class="panel-body">

<span id="user_id" data-id="295751"></span>

Simple shell 1.0 +

-   Handle comments (`#`)

<!-- -->

    julien@ubuntu:~/shell$ sh
    $ echo $$ # ls -la
    5114
    $ exit
    julien@ubuntu:~/shell$ 

</div>

<div class="list-group">

<div class="list-group-item">

**Repo:**

-   GitHub repository: `simple_shell`

</div>

</div>

<div class="panel-footer">

<div class="align-items-center d-flex justify-content-between">

<div>

<span class="no"></span> <span class="yes"></span> <span
class="pending"></span> Done<span class="no pending">?</span><span
class="yes">!</span>

Help

<div id="task-1049-users-done-modal" class="modal fade users-done-modal"
task-id="1049" batch-id="92">

<div class="modal-dialog">

<div class="modal-content">

<div class="modal-header">

<span aria-hidden="true">×</span>

#### Learners who are done with "15. Comments"

</div>

<div class="modal-body">

<div class="list-group">

</div>

<div class="spinner">

<div class="bounce1">

</div>

<div class="bounce2">

</div>

<div class="bounce3">

</div>

</div>

<div class="error">

</div>

</div>

</div>

</div>

</div>

Get a sandbox

</div>

<div class="fs-4">

</div>

</div>

</div>

</div>

</div>

<div id="task-num-16" data-role="task1052" position="22">

<div id="task-1052" class="panel panel-default task-card">

<span id="user_id" data-id="295751"></span>

<div class="panel-heading panel-heading-actions">

### 16. File as input

<div>

<span class="label label-info"> \#advanced </span>

</div>

</div>

<div class="panel-body">

<span id="user_id" data-id="295751"></span>

Simple shell 1.0 +

-   Usage: `simple_shell [filename]`
-   Your shell can take a file as a command line argument
-   The file contains all the commands that your shell should run before
    exiting
-   The file should contain one command per line
-   In this mode, the shell should not print a prompt and should not
    read from `stdin`

</div>

<div class="list-group">

<div class="list-group-item">

**Repo:**

-   GitHub repository: `simple_shell`

</div>

</div>

<div class="panel-footer">

<div class="align-items-center d-flex justify-content-between">

<div>

<span class="no"></span> <span class="yes"></span> <span
class="pending"></span> Done<span class="no pending">?</span><span
class="yes">!</span>

Help

<div id="task-1052-users-done-modal" class="modal fade users-done-modal"
task-id="1052" batch-id="92">

<div class="modal-dialog">

<div class="modal-content">

<div class="modal-header">

<span aria-hidden="true">×</span>

#### Learners who are done with "16. File as input"

</div>

<div class="modal-body">

<div class="list-group">

</div>

<div class="spinner">

<div class="bounce1">

</div>

<div class="bounce2">

</div>

<div class="bounce3">

</div>

</div>

<div class="error">

</div>

</div>

</div>

</div>

</div>

Get a sandbox

</div>

<div class="fs-4">

</div>

</div>

</div>

</div>

</div>

<div id="container-specs-modal" class="modal fade">

<div class="modal-dialog modal-lg">

<div class="modal-content">

<div class="modal-header">

<span aria-hidden="true">×</span>

#### Recommended Sandbox

</div>

<div class="modal-body">

<div react-class="user_containers/ContainerSpecs"
react-props="{&quot;containerModelName&quot;:&quot;Sandbox&quot;,&quot;containerSpecs&quot;:[{&quot;description&quot;:&quot;\u003cp\u003eBasic Ubuntu 20.04, with vim, emacs, curl, wget and all needed for Foundations\u003c/p\u003e\n&quot;,&quot;id&quot;:39,&quot;name&quot;:&quot;Ubuntu 20.04&quot;,&quot;online&quot;:true,&quot;container&quot;:{&quot;container_id&quot;:null,&quot;id&quot;:406586,&quot;restart_uri&quot;:&quot;/user_containers/406586/restart.json&quot;,&quot;status&quot;:&quot;asleep&quot;,&quot;uri&quot;:&quot;/user_containers/406586.json&quot;,&quot;wake_uri&quot;:&quot;/user_containers/406586/wake.json&quot;,&quot;webterm_uri&quot;:&quot;/user_containers/406586/webterm&quot;,&quot;host&quot;:null,&quot;password&quot;:&quot;7a9cd2732763680311b1&quot;,&quot;ports&quot;:{&quot;3000&quot;:49971,&quot;4000&quot;:49969,&quot;443&quot;:49972,&quot;5000&quot;:49968,&quot;5001&quot;:49967,&quot;80&quot;:49973,&quot;8000&quot;:49966,&quot;8080&quot;:49965,&quot;22&quot;:49974,&quot;3306&quot;:49970}}}],&quot;containersLimit&quot;:2,&quot;csrfToken&quot;:&quot;jyII5pUME5F5K9WARq0YnWBZe1ms0PdMM_8UnK1Th9vJQHl0w2wPS_NH1YYe32uJrUVDMdU9JM8Ax7Ysboq5iA&quot;,&quot;startStatusURI&quot;:&quot;/user_containers/start_status.json&quot;,&quot;startURI&quot;:&quot;/user_containers/start.json&quot;}"
react-cache-id="user_containers/ContainerSpecs-0">

<div>

<div class="d-flex gap-4 sandboxes-filters">

<span class="btn btn-outline-primary"><span class="ml-2">Running
only</span></span>

<div class="align-items-center d-flex"
style="position: relative; width: 100%;">

</div>

</div>

<div class="mt-3">

### 1 image<span class="small">(1/2 Sandboxes spawned)</span>

</div>

<div class="mt-3">

<div class="panel panel-default">

<div class="panel-body border-left-info"
style="border-left: 6px solid;">

<div
class="align-items-center d-flex flex-wrap justify-content-between">

<div>

### <span class="ml-2">Ubuntu 20.04</span><span class="fs-4 label label-info ml-2">Asleep</span>

<div class="mt-2 text-muted">

Basic Ubuntu 20.04, with vim, emacs, curl, wget and all needed for
Foundations

</div>

</div>

<div class="d-flex flex-wrap gap-5">

<span class="btn btn-success"><span class="ml-2">Wake</span></span><span
class="btn btn-danger"><span class="ml-2">Destroy</span></span>

</div>

</div>

</div>

</div>

</div>

</div>

</div>

</div>

</div>

</div>

</div>

</div>

</div>

<div class="copyright">

Copyright © 2023 ALX, All rights reserved.

</div>

</div>

<div id="search-modal" class="modal fade" tabindex="-1" role="dialog"
aria-labelledby="search-modal-label">

<div class="modal-dialog modal-md">

<div class="modal-content">

<div class="modal-header">

<div id="search-bar-container">

</div>

</div>

<div class="modal-body">

<div id="modal-spinner" class="spinner gap">

<div class="bounce1">

</div>

<div class="bounce2">

</div>

<div class="bounce3">

</div>

</div>

<div id="search-results-container">

</div>

</div>

</div>

</div>

</div>

<div id="markdownGuideModal" class="modal fade" tabindex="-1"
role="dialog" aria-labelledby="markdownGuideModalLabel"
aria-hidden="true">

<div class="modal-dialog modal-md">

<div class="modal-content">

<div class="modal-header">

<span aria-hidden="true">×</span>

#### Markdown Guide

</div>

<div class="modal-body">

#### Emphasis

    **bold**
    *italics*
    ~~strikethrough~~

#### Headers

    # Big header
    ## Medium header
    ### Small header
    #### Tiny header

#### Lists

    * Generic list item
    * Generic list item
    * Generic list item

    1. Numbered list item
    2. Numbered list item
    3. Numbered list item

#### Links

    [Text to display](http://www.example.com)

#### Quotes

    > This is a quote.
    > It can span multiple lines!

#### Images

CSS style available: `width, height, opacity`

    ![](http://www.example.com/image.jpg)
    ![](http://www.example.com/image.jpg | width: 200px)
    ![](http://www.example.com/image.jpg | height: 124px | width: 80px | opacity: 0.6)

#### Tables

    | Column 1 | Column 2 | Column 3 |
    | -------- | -------- | -------- |
    | John     | Doe      | Male     |
    | Mary     | Smith    | Female   |

    Or without aligning the columns...

    | Column 1 | Column 2 | Column 3 |
    | -------- | -------- | -------- |
    | John | Doe | Male |
    | Mary | Smith | Female |

#### Displaying code

    `var example = "hello!";`

    Or spanning multiple lines...

    ```
    var example = "hello!";
    alert(example);
    ```

</div>

</div>

</div>

</div>
