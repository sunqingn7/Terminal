# AGENTS.md - Guidelines for Agentic Coding in Terminal Emulator Project

This document provides guidelines for AI agents working on the Terminal Emulator codebase. It includes build commands, testing, linting, and comprehensive code style guidelines to ensure consistency and quality.

## Project Overview

This is a Qt6-based terminal emulator written in C++ using qtermwidget. It features tabbed terminals, SSH connections, color scheme customization, and font settings.

## Build Commands

### Full Build
```bash
cd build && cmake .. && make
```
- Configures the project with CMake and compiles with make.
- Requires Qt6 and lxqt-build-tools to be installed.
- Output executable: `build/TerminalEmulator`

### Clean Build
```bash
cd build && rm -rf * && cmake .. && make
```
- Completely cleans the build directory before rebuilding.

### Debug Build
```bash
cd build && cmake -DCMAKE_BUILD_TYPE=Debug .. && make
```
- Enables debug symbols for debugging.

### Release Build
```bash
cd build && cmake -DCMAKE_BUILD_TYPE=Release .. && make
```
- Optimizes for performance.

## Testing

The project uses Qt Test framework for unit testing. Tests are located in `src/tests/`.

### Running Tests
```bash
cd build && ctest  # Run all tests
cd build && ctest -R TestName  # Run specific test
cd build && ./test_app  # Run test executable directly
```

### Adding Tests
- Create test classes inheriting `QObject`
- Use `Q_OBJECT` macro and `private slots` for test methods
- Use `QTEST_MAIN(TestClass)` in main file
- Include `test_main.moc` at end

For now, focus on manual verification of features.

## Linting and Formatting

### Code Formatting
Use clang-format for C++ files:
```bash
clang-format -i src/*.cpp src/*.h
```
- Style: Based on LLVM style with Qt extensions.
- Applies consistent indentation, spacing, and line breaks.

### Static Analysis
Use clang-tidy for linting:
```bash
clang-tidy src/*.cpp -- -I/usr/include/qt6 -Ibuild/3rdparty/qtermwidget/lib
```
- Checks for code quality issues, potential bugs, and style violations.
- Focus on Qt-specific warnings and modern C++ practices.

### Qt-Specific Tools
- Use `qmlint` for any QML files (none currently).
- Ensure MOC (Meta-Object Compiler) runs without warnings.

## Code Style Guidelines

### General Principles
- Write clean, readable, maintainable code.
- Follow Qt coding conventions where applicable.
- Prefer modern C++ features (C++17).
- Keep functions short and focused (single responsibility).
- Use meaningful names; avoid abbreviations.

### File Structure
- `src/`: Source files (.cpp, .h)
- `src/color-schemes/`: Custom color scheme files (.colorscheme)
- `3rdparty/`: Third-party libraries (qtermwidget submodule)
- `CMakeLists.txt`: Build configuration
- Build output in `build/` directory

### Naming Conventions
- **Classes**: PascalCase (e.g., `MainWindow`, `SSHDialog`)
- **Methods/Functions**: camelCase (e.g., `createTerminalTab()`, `changeColorScheme()`)
- **Variables**: camelCase (e.g., `tabWidget`, `hostEdit`)
- **Constants**: UPPER_CASE (e.g., `QT_MINIMUM_VERSION`)
- **Files**: PascalCase for classes (e.g., `MainWindow.h`, `SSHDialog.cpp`)
- **Qt Signals/Slots**: camelCase, prefixed with `on_` for auto-connected slots
- **Private Members**: camelCase, no prefix (Qt style)

### Includes and Imports
- Use `#include` for Qt headers: `<QWidget>`, `<QVBoxLayout>`
- Use quotes for local headers: `"MainWindow.h"`
- Group includes: Qt headers first, then local, then third-party
- Avoid unnecessary includes; use forward declarations where possible
- Include order:
  1. Qt headers (alphabetical)
  2. Standard library
  3. Local headers

Example:
```cpp
#include <QAction>
#include <QVBoxLayout>

#include "SSHDialog.h"
#include "ColorSchemeDialog.h"
```

### Formatting
- Indentation: 4 spaces (no tabs)
- Line length: 100 characters maximum
- Braces: Same line for functions/classes, new line for control statements
- Spaces: Around operators, after commas, before/after braces in control statements
- Pointer/Reference: `*` and `&` with type (e.g., `QWidget *parent`)

Example:
```cpp
void MainWindow::createTerminalTab(const QString &program, const QStringList &args) {
    QWidget *tab = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(tab);

    if (!program.isEmpty()) {
        term->setShellProgram(program);
        if (!args.isEmpty()) {
            term->setArgs(args);
        }
    }
}
```

### Types and Variables
- Use `auto` when type is obvious or for iterators
- Prefer smart pointers where appropriate (Qt handles memory management)
- Use Qt types: `QString`, `QStringList`, `QVector` over STL equivalents
- Initialize variables at declaration
- Use const-correctness: Mark parameters and methods const when possible

### Control Structures
- Use braces for all control statements, even single lines
- Prefer early returns to reduce nesting
- Use range-based for loops when possible

Example:
```cpp
for (int i = 0; i < tabWidget->count(); ++i) {
    QWidget *tab = tabWidget->widget(i);
    QTermWidget *term = tab->findChild<QTermWidget*>();
    if (term) {
        term->setColorScheme(scheme);
    }
}
```

### Error Handling
- Use Qt's error handling: Check return values, use `Q_ASSERT` for debug
- For user-facing errors, use `QMessageBox` or status messages
- Handle exceptions minimally; Qt uses return codes
- Log errors to console or Qt's logging system when appropriate

Example:
```cpp
if (!host.isEmpty() && !username.isEmpty()) {
    // Valid input
} else {
    QMessageBox::warning(this, "Error", "Host and username are required.");
    return;
}
```

### Qt-Specific Guidelines
- Use Qt's signal-slot mechanism for communication
- Follow Qt's object hierarchy and parent-child relationships
- Use Qt's resource system for assets (if added)
- Prefer Qt containers over STL for Qt objects
- Use `Q_OBJECT` macro in classes with signals/slots
- Connect signals/slots in constructor or setup methods

### Memory Management
- Qt uses parent-child relationships for automatic cleanup
- Use `QPointer` for optional pointers
- Avoid raw pointers; use Qt's ownership model
- Delete objects manually only when necessary

### Comments and Documentation
- Use `//` for single-line comments
- Use `/* */` for multi-line
- Document classes, public methods with brief descriptions
- Use TODO comments for future work
- Keep comments concise and up-to-date

Example:
```cpp
// Creates a new terminal tab with optional program and arguments
void MainWindow::createTerminalTab(const QString &program, const QStringList &args)
```

### Git and Version Control
- Commit frequently with descriptive messages
- Use feature branches for new functionality
- Follow conventional commit format: `feat:`, `fix:`, `docs:`, etc.
- Ensure builds pass before committing

### Performance Considerations
- Qt is efficient; avoid unnecessary repaints or updates
- Use lazy initialization where appropriate
- Profile with Qt Creator's analyzer if performance issues arise

### Security
- Validate user input (e.g., SSH parameters)
- Use secure practices for any network operations
- Avoid logging sensitive information

### Testing Guidelines
- Write tests for new features using Qt Test framework
- Test edge cases: empty inputs, invalid data
- Verify UI elements and user interactions
- Run tests on different Qt versions if possible

### Dependencies
- Qt6: Core, Widgets
- qtermwidget: Terminal widget library
- lxqt-build-tools: For translations and build (optional)

### File Templates
- Header files: Include guards with `#ifndef`, class declaration
- Source files: Includes, then implementation
- CMakeLists.txt: Standard Qt project structure

This document should be updated as the codebase evolves. Follow these guidelines to maintain code quality and consistency.