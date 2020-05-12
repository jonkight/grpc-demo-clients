# gRPC Demo Clients
This is a monorepo that contains protobuf definitions and the generated clients for the purpose of a demo.

The intentional workflow for this repository is that a developer will update proto files and create a pull request. The workflow automation will then format the proto files, generate the gRPC stubs, and update the pull request.

This takes the burden of formatting the proto files and generating the stubs away from the developer. It also ensures the code generation commit is separated from the developer commit, making the changes easier to review.

The automation will also check for breaking changes and ensure the style guidelines are upheld (e.g. naming conventions). Ideally a developer could use a web editor to modify this repo safely.

## Local Tool Setup

### prototool
Working with proto files can be tricky, especially when trying to enforce style guidelines and patterns. Luckily, there's an amazing tool that makes it much easier called [prototool](https://github.com/uber/prototool). It provides the management of [protoc](https://github.com/protocolbuffers/protobuf), standardization of building proto files which is enforced by configuration, and more. 

The proto files in this repository abide by the [Uber v2 Style Guidelines](https://github.com/uber/prototool/blob/dev/style/README.md). It's a really well thought out style guide that's hard to mess up.

Configuration is enforced by prototool.yaml files. For details on the supported settings see the [docs](https://github.com/uber/prototool/tree/dev/docs).

The preferred method of running the [prototool](https://github.com/uber/prototool) is with the [docker image](https://github.com/uber/prototool/blob/dev/docs/docker.md). For more installation opions see [here](https://github.com/uber/prototool/blob/dev/docs/install.md).

```
docker run -v "$(pwd):/work" uber/prototool:latest prototool all
```

### Vim
Vim support is provided by [prototool](https://github.com/uber/prototool).

### Visual Studio Code
[Visual Studio Code](https://code.visualstudio.com/Download) can be used to edit the protobuf files. However, it cannot enforce the required style guidelines, so it's best to use [prototool](https://github.com/uber/prototool) when developing.

The following extensions can also be used to offer syntax highlighting, autocompletion, and more when using Visual Studio Code.

- [vscode-proto3](https://github.com/zxh0/vscode-proto3) - This provides syntax highlighting and code completion. Requires [protoc](https://github.com/protocolbuffers/protobuf) to be in PATH.
- [clang-format](https://github.com/xaverh/vscode-clang-format-provider) - Used to override the default column limit that vscode-proto3 enforces.