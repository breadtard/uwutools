# uwuPlay
## A simple script that searches youtube for a video and plays it

### Why?
Well, because typing `uwuPlay <query>` is faster than `youtube-dl ytsearch:'<query>'`, and because uwuPlay supports custom mpv flags

### How?
uwuPlay basically does this:
- parses arguments
- - if `-f` is passed, asks for custom mpv flags
- uses youtube-dl to search for the query
- casts a magic spell from the Dark Lord `awk` to get the video ID from youtube-dl output
- `mpv`s the video url (with custom flags if passed)

### Installation
yeet the `uwuplay` script into your PATH. If you're not sure what a PATH is, just put it into `~/.local/bin/`

### Usage
```bash
uwuplay [-f] <query>
```
`[-f]` - Optional flag, if set, asks for custom mpv flags

`<query>` - The query that uwuPlay should search for, example `dogs` will play the first video that comes up if you search for `dogs`

### License
uwuPlay is licensed under the Simplified Bread License. The license can be found in the `LICENSE` file in this repo.

:wq
