# Template Challenge
This is a template challenge for the eLearninga Embedded Challenge Platform.

## Getting started
### Installing
1. Install [Visual Studio Code](https://code.visualstudio.com/download)
2. Open VS Code
3. Install [PlatformIO](https://platformio.org/install/ide?install=vscode)
4. Create an account for PlatformIO (You can do it directly in VS Code)
5. Send us an email to ingaelearn@gmail.com to get access to our boards

### Setup
1. Clone this repository
2. Open it with VS Code
3. Setup the platformio.ini file
   - Select a board to use 
     - you can share your own board
	   - look up your board, platform, framework info [here](https://platformio.org/boards).
	   - Let us know, that you want to share via ingaelearn@gmail.com, and send us your platformio.ini file.
	 - use a board from the community
       - Send us your pio email address to ingaelearn@gmail.com
	   - We will give you access to the boards (It may take a few hours)
4. The challenge.h file contains the challenge description, and a function, that the student should solve. (There can be more functions, and more challenge files btw, but the rest of the code should be adapted).
   - Write what is the challenge in comments
   - Write the function signature and body, with a dummy return, so you can build and test your code.
5. The testing/inc/testing.h and testing/inc/testing.cpp are containing the testing functions that tests the students solution. Here you have to define the test functions, that tests the students code, if it is correct or not. If you have your own implementation of the challenge (a solution for the challenge), so you can easily test the students code, you should put it in the testing.cpp, because it will be archived, and the student won’t be able to read it easily.
   - Write the test in the testing.h and testing.cpp
   - You can use the challenge.h in the testing.cpp file (else it will fail)
6. The sample_tests/sample_tests.cpp contains the calling of the tests you wrote in testing.h and testing.cpp. This file will be called, when the student runs the unit tests.
   - Call your test functions with RUN_TEST() between UNITY_BEGIN(); and UNITY_END();
   - All the tests that are called in the sample_test.cpp, will be run in the same run of the microcontroller
   - But if you need to do tests after fresh flashin, you can create a new folder under test/ like sample_test2, and copy the content of the sample_tests.cpp, but change the functions it calls. Each subfolder under test, will have a fresh reflashing of the microcontroller. Each folder will be executed independently, after reflashing.
7. If you are ready with all the files, test it if it runs on the microcontroller, you want to use. If it does not work, debug it.
   - All tests will fail, because you did not solve the challenge
   - If you want to make sure the tests are good, add you solution into the challenge file, and test it, if all the tests are passing.
8. If it works, you should change the content of the lib/testing folder, like the following:
   - Delete the cpp file under lib/testing/src (you can save it elsewhere, maybe you will need it later)
   - Go to .pio/build/<env_name>, and look for the libtesting.a, and copy it to the lib/testing folder.
   - Uncomment (remove semicolon) in the platformio.ini file the following line:
```
;build_flags = -Ilib/testing/inc -Llib/testing -llibtesting
```
9. You are done! Zip this folder, or push it to git, and you can send it around.
10. If you want to submit to the community, then please send us the link for the git repo, or just the source, and we will create the git repo, then share it with the community. Thanks for sharing :)


## Built With

* [Visual Studio Code](https://code.visualstudio.com) - Programming IDE
* [PlatformIO](https://platformio.org) - Ecosystem for Embedded Development