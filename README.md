# Why 

Sometimes i change my pc and do not have all the tools that i need for competitive programming.

This repo it's just to get as easy as possibile all my setup as fast as possbile and also trying github codespaces if i feel it.

You must have docker installed on your machine and visual studio to work with that.

## How to develop

Sometimes multiple reload of the docker it's needed.

I suggest the following workflow

1. _cd_ into `.devcontainer`.
2. Makes the required changes on `Dockerfile`.
3. On the terminal run `docker build -t test .` to build the image.
4. Run `docker run -it --rm test bash` to roam around the docker image.
5. Remove the created image with `docker rmi test`.

