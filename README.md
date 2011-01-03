AVR(Arduino) Platform for Xcode 3.x+
====================================

This is my attempt at seeing if I can get a platform built to allow development of Arduino code within Xcode.  It's compiling & linking so far but it's unfinished and doesn't do the hex command yet.  Currently it includes a static library for atmega328p that is the core code, I'm not sure if it's best to just build these or figure out a way to build it on demand.

Todo
====

* Update & include Xcode project template to use proper platform settings
* Separate compiler spec from apple's
* Properly label object file types elf (probably not necessary, OCD)
* Add phase to handle doing the ihex stuff
* Figure why SDK shows as Unknown OS
* Get target to specify our custom linker, currently overriding apple's identifier
