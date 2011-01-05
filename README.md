AVR(Arduino) Platform for Xcode
===============================

This is my attempt at seeing if I can get a platform built to allow development of Arduino code within Xcode.  It's compiling & linking so far but it's unfinished and doesn't do the hex command yet.  Currently it includes a static library for atmega328p that is the core code, I'm not sure if it's best to just build these or figure out a way to build it on demand.

Todo
====

* Update & include Xcode project template to use proper platform settings
* Properly label object file types elf (probably not necessary, OCD)
* Add phase to handle doing the ihex stuff
* Figure why SDK shows as Unknown OS
* **BLOCKER**: Get target to specify our custom linker, overriding apple's makes it break mac/ios apps
* Include the standard libraries


Requirements
============

* Xcode 3 (tested on 3.2, might not work with earlier or Xcode DP)
* [CrossPack for AVR](http://www.obdev.at/products/crosspack/index.html) (hoping to include it in the SDK later)

Installation
============

* Install [CrossPack for AVR](http://www.obdev.at/products/crosspack/index.html)
* Copy AVR.platform to /Developer/Platforms/
* Copy AVRCompiler.xcplugin to /Developer/Library/Xcode/Plug-ins/ (compiler plugins don't seem to work right elsewhere)


Notes
=====

* Strings file for compiler plugin seems ignored
* Can't define a standalone compiler spec, seems to need BasedOn = "apples identifier", might require actual plugin code
* Not sure how you can control what build settings are in the UI, might be plug-in code based
* Not sure how to define what linker is used by the platform (if linker has our identifier)
