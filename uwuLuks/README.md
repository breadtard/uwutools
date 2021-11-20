# uwuLuks
[![forthebadge](https://forthebadge.com/images/badges/you-didnt-ask-for-this.svg)](https://forthebadge.com) [![forthebadge](https://forthebadge.com/images/badges/fuck-it-ship-it.svg)](https://forthebadge.com)

uwuLuks (or `LEL`) is a bash script for managing encrypted storage on Linux.

## Installation

Download the `uwuLuks` file from this repo. Its right there, above this readme

```bash
git clone https://github.com/breadtard/uwuTools --jobs 4 --depth 1
```

## Usage

```bash
$ uwuluks --create secrets 512M ext4
# This creates a 512MB ext4 image called "secrets". Its encrypted, of course.

$ uwuluks -c anime 100G btrfs
# Shorter version of the above. Makes an image called "anime", size 100GB, fs is btrfs.

$ uwuluks --list
# Lists all of your images. 

$ uwuluks --mount hentai /mnt/hentai
# Asks you for the password to "hentai.img" and mounts it at /mnt/hentai

$ uwuluks --unmount hentai
# Unmounts hentai.

$ uwuluks --unmount-unsafe /mnt/torrents
# Unsafely unmounts torrents. NOT RECOMMENDED, WILL PROBABLY CAUSE DATA LOSS

$ uwuluks -h
# shows help.
```

## Contributing
It would be awesome if you tested this for edge-cases, other filesystems, etc, mainly because i use regex here, and regex hard.

## TODO
- see if ntfs works. didnt try yet.
