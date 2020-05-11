# gRPC Demo Clients
This is a monorepo that contains protobuf definitions and the generated clients for the purpose of a demo.

## Tool Setup

### prototool
Working with proto files can be tricky, especially when trying to enforce style guidelines and patterns. Luckily, there's an amazing tool that makes it much easier called [prototool](https://github.com/uber/prototool). It provides the management of [protoc](https://github.com/protocolbuffers/protobuf), standardization of building proto files which is enforced by configuration, and more. 

The proto files in this repository abide by the [Uber v2 Style Guidelines](https://github.com/uber/prototool/blob/dev/style/README.md). It's a really well thought out style guide that's hard to mess up.

Configuration is enforced by prototool.yaml files. For details on the supported settings see [this](https://github.com/uber/prototool/blob/dev/etc/config/example/prototool.yaml).

[prototool](https://github.com/uber/prototool) is only supported on Linux and macOS. For use on Windows, either use Windows Subsystem for Linux (WSL) or the [namely/prototool](https://github.com/namely/docker-protoc) docker image.

### Vim
Vim support is provided by [prototool](https://github.com/uber/prototool).

### Visual Studio Code
[Visual Studio Code](https://code.visualstudio.com/Download) can be used to edit the protobuf files. However, the style guidelines are enforced by [prototool](https://github.com/uber/prototool), so it's best to use it when developing.

The following extensions can also be used to offer syntax highlighting, autocompletion, and more when using Visual Studio Code.

- [vscode-proto3](https://github.com/zxh0/vscode-proto3) - This provides syntax highlighting and code completion. Requires [protoc](https://github.com/protocolbuffers/protobuf) to be in PATH.
- [clang-format](https://github.com/xaverh/vscode-clang-format-provider) - Used to override the default column limit that vscode-proto3 enforces.