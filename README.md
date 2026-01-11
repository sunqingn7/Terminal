# Terminal Emulator

This is a Qt6-based terminal emulator written in C++ using qtermwidget. It features tabbed terminals, SSH connections, color scheme customization, and font settings.

## Setup

This project was created using OpenCode with Ollama (qwen3-coder model). The development process involved:
- Using OpenCode for interactive coding assistance
- Leveraging local Ollama for code generation and completion
- qwen3-coder model for AI-powered terminal application development

## Features

- Tabbed terminal interface
- SSH connection support
- Customizable color schemes
- Font configuration options
- Qt6-based UI with modern widgets

## Build Instructions

### Prerequisites
- Qt6 development libraries
- lxqt-build-tools
- CMake

### Build
```bash
cd build && cmake .. && make
```

### Debug Build
```bash
cd build && cmake -DCMAKE_BUILD_TYPE=Debug .. && make
```

### Release Build
```bash
cd build && cmake -DCMAKE_BUILD_TYPE=Release .. && make
```

## Testing

The project uses Qt Test framework for unit testing. Tests are located in `src/tests/`.

### Running Tests
```bash
cd build && ctest  # Run all tests
cd build && ctest -R TestName  # Run specific test
cd build && ./test_app  # Run test executable directly
```
