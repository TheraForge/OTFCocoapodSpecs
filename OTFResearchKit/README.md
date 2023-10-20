# Creating podspec

I've used the already existing podspec file inside the ResearchKit project. I've updated it according to our requirement.

## Issues found in modifying the podspec

 ## Issue - using ResearchKit framework into OCKCloudantStore, it is complaining about ResearchKit Not found in project. 

### Description - I fixed the issue by modifying the ResearchKit podspec. Initially, I've mentioned the source_files key outside the subspec scope, thinking it is common for all the subspecs and it worked in other projects as well. it was causing the problem and we didn't had any clue about it as there was no error or anything that can pointout this issue.


## Issue - Can't move podspec file anywhere outside the project folder. 

### Description - I didn't find the solution for this yet. Problem is in public and private script files that are mentioned in podspec. So podspec has path for those script files and those script files contain some code to find public and private headers inside the project, this script tries to open the ResearchKit.xcodeproj and its targets. 

### WHAT I TRIED - As per the description mentioned above, it looks like podspec only require the script folder path that could be placed anywhere along with the project files. So i tried to move podspec file out of the folder and mentioned the path for scripts. but it couldn't load them and even start throwing many errors. Will need to look into more to find solution.

## Issue -  "umbrella for module 'ResearchKit' already covers this directory."

### Description - I was facing this issue while moving the podspec file out of the project directory. This is also related with the path that is mentioned into podspec for finding the "ResearchKit.modulemap"


## Issue - Compilation Flag not working if used with other projects.

### Description - I've implemented the Swift compilation flags into the project and tested them by installing them in test project as developement pods. But if we're using them as a dependency of other project such as OCKCloudantStore , it was not working as expected and flags were not getting set. and this is because compilation flags not supported on objective c projects. somehow it was working on simple test project but fails when using as dependency on a swift project. So to resolve this issue I've used the "GCC_PREPROCESSOR_DEFINITIONS" in the ResearchKit's subspec. It solved the issue and OCKCloudantStore can now install the ResearchKit in different modes (Health, Care, CareHealth etc.).
