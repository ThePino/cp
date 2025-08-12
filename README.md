# Why 

Sometimes i change my pc and do not have all the tools that i need for competitive programming.

This repo it's just to get as easy as possibile all my setup as fast as possbile and also trying github codespaces if i feel it.

You must have docker installed on your machine and visual studio to work with that.

* [docker](https://www.docker.com/)
* [visual-studio](https://code.visualstudio.com/)
* [test-container](https://marketplace.visualstudio.com/items?itemName=ms-vscode-remote.remote-containers)

## How to develop

If you need to update the docker image this is the the suggested workflow to test:

1. _cd_ into `.devcontainer`.
2. Makes the required changes on `Dockerfile`.
3. On the terminal run `docker build -t test .` to build the image.
4. Run `docker run -it --rm test bash` to roam around the docker image.
5. Remove the created image with `docker rmi test`.


[![Open in GitHub Codespaces](https://github.com/codespaces/badge.svg)](https://codespaces.new/ThePino/cp)