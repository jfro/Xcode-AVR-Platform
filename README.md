AVR(Arduino) Platform for Xcode
===============================

This is my attempt at seeing if I can get a platform built to allow development of Arduino code within Xcode.  It's compiling & linking so far but it's unfinished and doesn't do the hex command yet.  Currently it includes a static library for atmega328p that is the core code, I'm not sure if it's best to just build these or figure out a way to build it on demand.

Todo
====

* Update & include Xcode project template to use proper platform settings
* Properly label object file types elf (probably not necessary, OCD)
* Add phase to handle doing the ihex stuff in target template
* Figure why SDK shows as Unknown OS
* **LINKER**: Linker is still a mess/hack, compiler feeds flags currently
* Include the standard libraries (and support linking)
* Include AVR toolchain in SDK (maybe in an Installer)
* Have an upload target or phase?
* Support .pde files
* Support dynamic compiling of core library (currently only atmega328p)


Requirements
============

* Xcode 3 (tested on 3.2, might not work with earlier or Xcode DP)
* 64-bit machine (or build your own gcc toolchain, I'll eventually include both 32 & 64)
* atmega328p until I figure out how best I want to handle the core source

Installation
============

* Click downloads and download the pkg installer
* Run the installer, installs:
	* AVR.platform to /Developer/Platforms
	* AVRCompilerPlugin.xcplugin to /Developer/Library/Xcode/Plug-ins

Notes
=====

* It's messy, not sure how to do proper linker class yet, methods aren't being called
* Projects using libraries will have to include library sources in their project
* **Uploading**: Edit the Upload target's build settings to make sure you use the proper settings for your board
* Only has atmega328p support since I statically compiled the core source files
