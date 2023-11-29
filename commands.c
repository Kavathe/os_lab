File & Directory Related Commands
1. cp <fromfile> <tofile>: Copy from the <fromfile> to the <tofile>

 
2. mv <fromfile> <tofile> : Move/rename the <fromfile> to the <tofile>
 
3. rm <file>:Remove the file named <file>
 
4. mkdir <newdir>:Make a new directory called <newdir>
 
5. rmdir <dir>:Remove an (empty) directory
 
7. pwd : Print (display) the working directory
 
8. cat > <file> :To create new file n save it by pressing ^d
 
9. cat >> <file>: To append contents into file
 
10. cat <file>:To see the contents of existing file
 
11. more <file>:Paging out the contents of file
 

12. file <file>:To check the type of file
 
13. wc <file>:To count lines,words,charaters of file
 
14. cmp <file1> <file2>:To compare two files
 
15. comm <file1> <file2>:To display common values between two files
 
16. diff <file1> <file2>:To convert one file to another
 
17. gzip <file>:To compress the file
 
18. gunzip <file>:To unzip the contents of zipped file
 
19. ls :List the files in the current working directory

advanced

1.	cd/etc/init.d/ : used to change the current working directory to the "init.d" directory located within the "/etc" directory.

Files and directories present in init.d are shown


2.	service –status-all: used to display the status of all available system services, showing whether each service is running (with a "+" symbol) or stopped (with a "-" symbol).

 
3.	ps: used to display a snapshot of the current processes running.

4.	ps -f: used to display a detailed list of the currently running processes, including information about their owners, resource usage, and parent- child relationships.



5.	ps -A: used to display a list of all running processes, regardless of the user or terminal association.

 
6.	ps -a: used to display a list of running processes for all users associated with the current terminal.

7.	ps -u: used to display a list of running processes owned by a specific user.

8.	wait: used to pause the execution of a script or shell until all background processes are finished.

9.	sleep: used to introduce a delay or pause in the execution of a script or shell for a specified amount of time.

By this command the shell has been paused for an interval of 5 seconds as here default unit is second.


10.	netstat -a: used to display all active network connections and listening ports.


 
11.	nslookup: used to query the Domain Name System (DNS) to obtain information about a specific domain name or IP address.

12.	dig: used to perform DNS (Domain Name System) queries to retrieve information about a specific domain name or DNS records.

13.	uptime: used to display the current time, how long the system has been running, and the average system load over the past 1, 5, and 15 minutes.

14.	ping: Test connectivity and measure round-trip time to a target host.

 
15.	history: Display a list of previously executed commands in the terminal.

16.	df -m: used to display disk space usage in megabytes for all mounted file systems.


