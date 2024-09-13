# CMake on Mac

In a terminal window, execute the following command:

```
cmake --version
```

If CMake is installed correctly, this command will display the version of CMake you have installed. If that is the case, you are good to go. No further action is needed.

If you get an error that says something like "command not found", then you need to install CMake.

## Installing CMake

There are multiple ways to do this. Two options are shown below. If you don't know which one to pick, pick the first option.

### 1. Manual Install

- Download [cmake-3.30.3-macos-universal.dmg](https://github.com/Kitware/CMake/releases/download/v3.30.3/cmake-3.30.3-macos-universal.dmg) (or go to the CMake [download page](https://cmake.org/download/) and select the appropriate file for your Mac).
- Open the `.dmg` file once it finishes downloading and drag the CMake app into the Applications folder.
- Open a terminal window and execute the following command:

```
sudo "/Applications/CMake.app/Contents/bin/cmake-gui" --install
```

- Close the terminal window and then open a new one.
- Execute the following command to verify CMake is installed correctly:

```
cmake --version
```

### 2. Homebrew

- Install the Homebrew utility: https://brew.sh/ (follow the instructions on the site)
- Open a terminal window and execute the following command:

```
brew install cmake
```

- Close the terminal window and then open a new one.
- Execute the following command to verify CMake is installed correctly:

```
cmake --version
```

## Visual Studio Code

If you installed CMake as directed above, things should work without issue from there. However, if you still have problems building the assignment projects in VS Code, try the following:

- Open a terminal window and execute the following command:

```
where cmake
```

- This will output the path to where CMake is installed on your computer. Copy that path.
- Open your assignment repository in VS Code.
- Open the file `/.vscode/settings.json`.
- Add the following entry to the JSON file:

```
"cmake.cmakePath": "/path/to/your/cmake"
```

- Replace the path with the path you copied earlier.
- Save the `settings.json` file and try configuring the project again.

_Here is an example `settings.json` (the contents of your file may vary):_

```
{
  "files.associations": {
    "iostream": "cpp",
    "string": "cpp"
  },
  "cmake.cmakePath": "/path/to/your/cmake"
}
```
