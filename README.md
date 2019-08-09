# C++ Tutorial Project


## Building

```bash
mkdir build
cd build
cmake ..
make
ctest
```
## Run Unit Tests

```bash
cd build
ctest
```
## Package Source in ZIP

```bash
cd build
make package_source
```

## Create a DEB package for Ubuntu

```bash
cd build
cpack -G DEB
```

You can install the package with:

```bash
sudo dpkg -i *.deb
```
