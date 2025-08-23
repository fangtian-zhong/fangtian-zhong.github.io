---
title: "CSCI 591: Malicious Code Analysis"
collection: teaching
type: "Graduate course"
venue: "Montana State University, Computer Science"
date: 2025-08-21
location: "Bozeman, Montana"
---

## Instructor
     Fangtian Zhong, email: fangtian.zhong@montana.edu, office hours: Tuesdays/Thursdays:10:50am-12:10pm (not available during holiday/university day)
     
## Announcement


## Quiz

## Course schedule

<!---
 <> (Schedule subject to change. Find all lecture videos in [this Panopto folder](https://montana.hosted.panopto.com/Panopto/Pages/Sessions/List.aspx?folderID=5772861a-1645-42f4-b27e-b04b011b0c4a).)
 -->

|Date|Lecture Topic (notes linked)|Assignments |Projects|
|:---|:---|:---|:---|
|<span style="color:red;">Week1</span>||||
|Thursday 08/21|[Course Introduction & Roadmap](./lectures/ppts/Introduction_to_CSCI_591.pdf) / [course slack](https://join.slack.com/t/csci591malici-mu01461/shared_invite/zt-3brlngqf7-G5hBx9pSBn6RP~FuomA_~w)|||
|<span style="color:red;">Week2</span>|[environment setup](./lectures/ppts/setup.pdf)|||
|Tuesday 08/26|Intro to Assembly Language: Grammar||||
|Thursday 08/28|Intro to Assembly Language: Grammar||||
|<span style="color:red;">Week3</span>|||||
|Tuesday 09/02|Intro to Assembly Language: Grammar||||
|Thursday 09/04|[PE Structure](./lectures/ppts/CSCI_591_Malicious_Code_Analysis_4.pdf)|[Assignment 1](./assignments/assignment1)||
|<span style="color:red;">Week4</span>|||||
|Tuesday 09/09|PE Structure||||
|Thursday 09/11|Import Table, Import Address Table, and Bound Import Table|[Assignment 2](./assignments/assignment2)||
|<span style="color:red;">Week5</span>|||||
|Tuesday 09/16|Relocation Table and Export, Retrofitting||[Project 1](./projects/project1)|
|Thursday 09/18|Review ||||
|<span style="color:red;">Week6</span>|||||
|Tuesday 09/23|Virus and Worms||||
|Thursday 09/25|Logic Bombs and Trojan Horse||||
|<span style="color:red;">Week7</span>|||||
|Tuesday 09/30|Rootkits and Backdoors||[Project 2](./projects/project2)|
|Thursday 10/02|Bots and Botnets||||
|<span style="color:red;">Week8</span>|||||
|Tuesday 10/07|Spyware and Adware||||
|Thursday 10/09|Self-study||||
|<span style="color:red;">Week9</span>|||||
|Tuesday 10/14|Mid-term||[Project 3]|
|Thursday 10/16|||||
|<span style="color:red;">Week10</span>|||||
|Tuesday 10/21|Prerequisite for Understanding angr|[Assignment 3](./assignments/assignment3)|||
|Thursday 10/23|angr Environment Setup and angr Basics||||
|<span style="color:red;">Week11</span>||||
|Tuesday 10/28|Analyzing Malicious Program|||
|Thursday 10/30|User Mode Debugging with Angr|[Assignment 4]||
|<span style="color:red;">Week12</span>|||||
|Tuesday 11/04|WinDbg and Environment Setup|||
|Thursday 11/06|Kernel Debugging with WinDbg||[Project 4]|
|<span style="color:red;">Week13</span>||||
|Tuesday 11/11|Veteran's Day, No Class||||
|Thursday 11/13|Static Analysis|[Assignment 5]||
|<span style="color:red;">Week14</span>|||||
|Tuesday 11/18|Static Analysis|||
|Thursday 11/20|Dynamic Analysis|[Assignment 6]||
|<span style="color:red;">Week15</span>|||||
|Tuesday 11/25|Fall Break, No Class||||
|Thursday 11/27|Fall Break, No Class||||
|<span style="color:red;">Week16</span>|||||
|Tuesday 12/02|Dynamic Analysis||[Project 5]|
|Thursday 12/04|Self-study|||
|<span style="color:red;">Final Week</span>|||||
|Thursday 12/11|Final Exam at 12:00pm - 1:50pm|||

## Catalog description

3 Credits. PREREQUISITE: 

* CSCI 112 — C Programming (Required)
* CSCI 232 — Data Structures and Algorithms (required)
* CSCI 460 — Operating Systems (required)
* CSCI 107 — Python Programming (Required)


## Course Info

This course meets for lectures on Tuesdays and Fridays from
12:15pm to 13:30pm in REID 453. We will use Slack as the primary method of course communication, and all course information will be posted on this website or on the Slack server; Canvas will
be used *only* for grading.

## Course Resources

### Textbook

The textbook is optional for this course, but is a good resource for anyone who
is interested. Most lectures are based on the content in the book.

* Practical Malware Analysis: The Hands-On Guide to Dissecting Malicious Software* by Michael Sikorski, Andrew Honig, No Starch Press, 2012 
* Windows 64-bit Assembly Language Programming Quick Start: Intel X86-64, SSE, AVX* by Robert Dunne,Gaul Communications, 2018. 

You can find free PDFs of the textbook online.


### Slack server

All course communication will be through our course Slack server. See Canvas
announcement for link. Please change your nickname to your full name (first
and last). Additionally, I suggest managing your notification settings. You may also need to manage the application notification settings on your device.

## Course outcomes
By the end of the course, students should be able to:
* Master the interaction between assembly codes and registers, and memory and manually analyze the changes in the stack by instruction execution.
* Grasp the rationale for the malware taxonomy and learn to classify malware files manually.
* Grasp binary retrofitting techniques to modify malware binaries.
* Analyze and predict the potential malicious operations in different types of malware.

## Grading

You will be graded on the following:
* 6 assignments: 20%
* 5 projects: 40%
* 2 Exams: 30%
* Quizzes/Absence (Lowest 5 dropped): 10%

Your grade will be determined by your [total score](https://catalog.montana.edu/curriculum-enrollment-graduation/) as follows:
93+: A; 90+: A-; 87+: B+; 83+: B; 80+: B-; 77+: C+; 73+: C; 70+: C-; 67+: D+; 63: D; 60: D-.

### Bonus

There are two ways to earn bonus points in this class.

#### Catch errors in course materials

If you find an error in any of the course materials (typo, incorrect statement, etc.), post in the `#errors-capture` channel on Slack. I will decide whether
it's truly an error and not a duplicate. If it is really an error, you get half a point. Only the first person to post about an error gets the points. You can earn a max of 3 total points toward your 100 for the course (for 6 errors).

#### Course evaluation

If 75% or more of the class completes the course evaluation, the whole
class gets 1 bonus point. 

### Late assignment policies
To run a course of this size we cannot accommodate individual requests for
extensions on assignments; therefore, we have strict rules for when assignments
are due, but have some leeway built in. Please read the bullet points below carefully,
respect the policy, and *get help early if
you are having any problems.* We want you to succeed!

* You are responsible for any announcements about assignments  made in class, on Slack, on Canvas,  and here
	on the course website.
* All projects/assignments are due on their due date by the [Anywhere on Earth (AoE)
	timezone](https://www.timeanddate.com/time/zones/aoe), which is 6 hours behind Bozeman (Actually, it's only 5 hours behind during standard time, but we'll go with 6 hours behind at all times). This means that the real due
	date is 6am the following day. If you submit projects and programs  within 24 hours of the due date, you get 25% off of whatever score you earn. If you
	submit within two days of the due date you get 50% off.
	Otherwise, no points are possible.
* You can submit as many times as you would like; only your last submission will be
	graded.
* Assignments cannot be submitted late.

### Missed quiz policy

Note that quizzes are taken in-class.
Any conflicts with a quiz must be discussed with me prior to missing the quiz.
I follow University policy on makeups, which allows that serious illness or a
serious family emergency are valid reasons requiring an accommodation.

### Collaboration policy
On all assignments, you may:
* Share ideas with others.
* Help others debug their code (or receive help debugging your code from someone
	else).

You may not (unless the assignment explicitly says you can):
* Share your code with other people.
* Submit code that you did not write.
* Use generative AI (e.g., ChatGPT) to search for approaches or ideas to
	assigned coding problems.
* Modify someone else's solution and claim it as your own.
* Post your own solutions on the internet.
* Post the course assignments or quizzes on the internet.

### Academic misconduct

In line with the [MSU student code of conduct](https://www.montana.edu/policy/student_conduct/#academichonesty), if I or the teaching assistants suspect that you have committed academic misconduct, we will schedule a meeting with you to discuss. If, after the meeting, we believe that you did commit academic misconduct, you will receive a 0 on the assignment and I will submit a report to the Dean of Students. It's just not worth it to cheat in this course.

## Important dates
See the full
[add/drop schedule](https://www.montana.edu/registrar/add_drop_schedule.html)
for more information.


## Diversity statement
Montana State University's campuses are committed to
providing an environment that emphasizes the dignity and worth of every member
of its community and that is free from harassment and discrimination based upon
race, color, religion, national origin, creed, service in the uniformed
services (as defined in state and federal law), veteran's status, sex, age,
political ideas, marital or family status, pregnancy, physical or mental
disability, genetic information, gender identity, gender expression, or sexual
orientation. Such an environment is necessary to a healthy learning, working,
and living atmosphere because discrimination and harassment undermine human
dignity and the positive connection among all people at our University. Acts of
discrimination, harassment, sexual misconduct, dating violence, domestic
violence, stalking, and retaliation will be addressed consistent with this
policy.

## Accommodations
If you have a documented disability for which
you are or may be requesting an accommodation(s), please contact
me and the Office of Disability Services as soon as possible.

## How to succeed in this class
What you can do:
* Keep up with the course by attending class,
checking Slack, being aware of the course
schedule, and doing all assignments on time.
* Be an active participant in class. This means asking and
answering questions in class and on Slack, seeking help
when needed,
and contacting the instructor or the course assistants using Slack if you have any questions outside of class
time.
* Be respectful of your classmates, your instructor, and the course assistants.
* Do your own work.

What I can do:
* Grade promptly (exact guarantees TBD).
* Respond to all Slack messages and emails within one business day.
* Create a course atmosphere conducive to learning by respecting
all of my students and being
enthusiastic about course material and my role in helping you learn.

## Copyright statement

This syllabus, course lectures and presentations, and any course materials provided throughout this term are protected by U.S. copyright laws.  Students enrolled in the course may use them for their own research and educational purposes.  However, reproducing, selling or otherwise distributing these materials without written permission of the copyright owner is expressly prohibited, including providing materials to commercial platforms such as Chegg or CourseHero.  Doing so may constitute a violation of U.S. copyright law as well as MSU’s Code of Student Conduct.

Instructors are free to use this material in their own courses. Feel free to
drop me a line if you do but no need.
