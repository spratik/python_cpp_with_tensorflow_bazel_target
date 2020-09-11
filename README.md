# Python_CPP_Bazel_target

# Below step User need to follow in order to execute this bazel target.

1) Install tensorflow 2.2 by using below command through anaconda enviornment.

        pip install tensorflow-gpu==2.2

2) Once tensorflow 2.2 installed then copy below paths.

       <tensorflow2.2>\include
       <tensorflow2.2>\libs

and Past into below path.
           
         <path>/Python_CPP_Bazel_target/thirdParty/tensorflow/

3) Open file(Python_CPP_Bazel_target\main\python_cpp.cc) and modify line number 11 (tensorflow env path with your tensorflow env path) 

         std::string tensoflow_env = "C:\\Users\\PRATIK\\anaconda3\\envs\\tensorflow_GPU\\";

4) Open cmd.exe and go to below path.
      
         <path>/Python_CPP_Bazel_target



5) Execute below bazel target.wait for some time to complete bazel target execution.
        
         bazel build //main:python_cpp

6) Once bazel target executed succussfully then #"bazel-out" folder will be created inside Python_CPP_Bazel_target folder.
   inside bazel-out folder multiple folder also created so go to below path. 
         
         <path>\Python_CPP_Bazel_target\bazel-out\x64_windows-fastbuild\bin\main

7) Copy sample.py file and past into below path.

         <path>\Python_CPP_Bazel_target\bazel-out\x64_windows-fastbuild\bin\main

8) Go to below path and execute "python_cpp.exe"


       <path>\Python_CPP_Bazel_target\bazel-out\x64_windows-fastbuild\bin\main




