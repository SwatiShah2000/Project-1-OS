# Skeleton Multiple Processe

## Project Overview
This project is designed to help familiarize you with managing multiple processes using Linux system calls like `fork()`, `exec()`, and `wait()`. The main task is to create two executables: `oss` (the parent process) and `user` (the child process). The `oss` process is responsible for launching multiple `user` processes, controlling how many can run simultaneously, and ensuring proper synchronization.

## How to Compile and Run

### Compiling the Project
To compile the project, simply run the following command in the project directory:

```bash
make
This will generate two executables: oss and user.

Running the Program
Use the following command to run the program with the required parameters:

bash
Copy
Edit
./oss -n <num_of_children> -s <simul_processes> -t <iterations_per_child>
Parameters:

-n <num_of_children>: Number of user processes to launch.
-s <simul_processes>: Maximum number of child processes allowed to run simultaneously.
-t <iterations_per_child>: Number of iterations each user process will execute.
Example:

bash
Copy
Edit
./oss -n 5 -s 3 -t 7
This command will launch 5 user processes, with no more than 3 running simultaneously, and each user process will run for 7 iterations.

Running the User Process (for testing purposes)
You can also run the user process directly for testing by passing a single argument:

bash
Copy
Edit
./user <iterations>
This will run the user process for the specified number of iterations, outputting its PID, parent PID, and the iteration status.

Project Details
oss (Parent Process): The oss program is responsible for launching child processes (user) using fork() and managing process execution using wait() to ensure synchronization. It limits the number of child processes running at any given time, as specified by the -s parameter.

user (Child Process): The user program executes a loop for a specified number of iterations. In each iteration, it outputs the PID, parent PID, and the iteration number, then sleeps for 1 second before repeating the output. This is done to simulate process activity.

Challenges
Ensuring the synchronization between oss and user processes using wait() to manage the simultaneous process limit.
Debugging the proper handling of command-line arguments and the execution flow for oss and user.
Known Issues
None at this time.
Version Control
This project uses Git for version control. Regular commits were made to keep track of progress and changes.

Conclusion
This project provided valuable experience in process management and synchronization in a Linux environment. Through implementing the oss and user processes, I became familiar with the use of fork(), exec(), and wait() for process control. The project also helped reinforce the importance of managing concurrency and synchronization between processes.

pgsql
Copy
Edit

This `README.md` file covers all necessary aspects of your project, including compiling, running the program, and a brief explanation of the purpose and design of the `oss` and `user` processes. It also includes some information about the challenges you encountered and how you used version control for the project>
