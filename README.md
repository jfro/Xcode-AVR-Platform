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


Requirements
============

* Xcode 3 (tested on 3.2, might not work with earlier or Xcode DP)
* [CrossPack for AVR](http://www.obdev.at/products/crosspack/index.html) (hoping to include it in the SDK later)

Installation
============

* Install [CrossPack for AVR](http://www.obdev.at/products/crosspack/index.html)
* Copy AVR.platform to /Developer/Platforms/
* Build & Copy AVRCompilerPlugin.xcplugin to /Developer/Library/Xcode/Plug-ins/ (compiler plugins don't seem to work right elsewhere)


Notes
=====

* It's messy, not sure how to do proper linker class yet, methods aren't being called
* Projects using libraries will have to include library sources in their project
