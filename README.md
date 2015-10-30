# win-print-commandline
[![Build status](https://ci.appveyor.com/api/projects/status/xac75j3av0cwpq47?svg=true)](https://ci.appveyor.com/project/StefanScherer/win-print-commandline)

A little Windows tool print the given commandline to stdout. Could be used inside
a Windows Docker container to see if and how the command string of a `RUN` command in a Dockerfile is modified until it reaches the Exe in the Container.

This tools is used to investigate quoting issues encountered in [docker/docker#17509](https://github.com/docker/docker/issues/17509).
