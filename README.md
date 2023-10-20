# OTFCocoapodSpecs

The OTFCocoapodSpecs repository contains the podspecs for the Open TheraForge SDK's frameworks. Pod specifications (podspecs) and their syntax are defined in the [CocoaPods documentation](https://guides.cocoapods.org/syntax/podspec.html).

## Change Log
<details open>
<summary>Release 1.0.3-beta</summary>

 - **Addition of new pod OTFUtalitiies**
   - Addition of helper methods for enchance logging with oslog
   - Addition of Swift Sodium helper function forr end-to-end encryption
</details>

<details >
<summary>Release 1.0.2-beta</summary>
<ul>
<li>Set default configuration of OTFToolBox to include the Care compilation flag</li>
<li>Added configuration of OTFToolBox to include the CareHealth compilation flag</li>
</ul>
</details>

<details>
<summary>Release 1.0.0-beta</summary>
<ul>
<li>First beta release of the pods</li>
</ul>
</details>

## Table of contents
* [Overview](#Overview)
* [Installation](#Installation)
* [Read More](#License)
* [License](#License)

## Theraforge frameworks
* [OTFToolBox](https://github.com/TheraForge/OTFToolBox)
* [OTFTemplateBox](https://github.com/TheraForge/OTFTemplateBox)
* [OTFCDTDatastore](https://github.com/TheraForge/CDTDatastore)
* [OTFCareKit](https://github.com/TheraForge/OTFCareKit)
* [OTFCloudantStore](https://github.com/TheraForge/OTFCloudantStore)
* [OTFCloudClientAPI](https://github.com/TheraForge/OTFCloudClientAPI)

## Overview <a name="Overview"></a>
The OTFCocoapodSpecs manages Theraforge frameworks dependencies for your Xcode projects. It creates different build targets in Cocoapods. 
The dependencies for your projects are specified in a single text file called a Podfile. OTFCocoapodspecs will resolve dependencies between libraries, fetch the resulting source code, then link it together in an Xcode workspace to build your project.

The following Theraforge frameworks dependencies are Integrated in this OTFCocoapodSpecs.

* OTFToolBox
* OTFToolBoxCore
* OTFTemplateBox
* OTFCDTDatastore
* OTFCareKit
* OTFResearchKit
* OTFCloudantStore
* OTFCloudClientAPI

## Installation <a name="Installation"></a>

Installing and updating CocoaPods is very easy.

####  First you need to install Cocoapods, if you have not already. Go to Terminal on your computer and write the below command to install cocoapods.

``` 
$ sudo gem install cocoapods 
```

<img width="536" alt="Screenshot 2021-05-18 at 16 12 21" src="https://user-images.githubusercontent.com/19572922/118638022-aee41680-b7d6-11eb-8827-5a0d43a4c752.png">

 Now you have successfully installed the cocoapods.
 
#### In the terminal go to the root of your project directory and execute pod init command. 

``` 
$ pod init
```

<img width="501" alt="Screenshot 2021-05-18 at 19 33 37" src="https://user-images.githubusercontent.com/19572922/118665809-ec569d00-b7f2-11eb-9bd1-14e6eb18f112.png">

This will add a default pod file in your project directory. Add the external dependencies that you have to this Podfile by editing it.

#### Add whichever podspec you nedd to install under target in Podfile and run pod install from the terminal root of your project directory, which will fetch all the external dependencies mentioned by you.

``` 
$ pod install
```

<img width="805" alt="Screenshot 2021-05-18 at 19 49 22" src="https://user-images.githubusercontent.com/19572922/118668283-02fdf380-b7f5-11eb-99c9-1425df4d9965.png">

## Read More
For more details about the CocoaPods please refer to the [CocoaPods](https://github.com/CocoaPods/Specs) docs.

## License <a name="License"></a>

This project is made available under the terms of a modified BSD license. See the [LICENSE](LICENSE.md) file.