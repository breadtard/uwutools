# uwuBot ecosystem
## WIP

### What is uwuBot?
uwuBot is a family of discord bots made in pythong, with specialized realeases.
For example:
- uwuBot (base version): admin commands + some misc commands like `^roll` or `^poll`
- uwuBot-s (Suckless uwuBot): uwuBot but bloatless (minified source, no useless commands, only the essentials)
- uwubot-m (Modular edition): uwuBot but with Cogs, so that you can turn commands on/off at your will. Based off of `uwuBot-f`
- schoolBot (School uwuBot): uwuBot but with a `^lessons` command, which shows the lesson plan for a given day. For example, you `^lessons monday` and it shows you lessons for monday. 
- schoolBot-h (School uwuBot Horny Edition): schoolBot but with `^hentai` and `^reddit` with support for nsfw subreddits (both in nsfw channels only). May or may noy include swear words
- uwubot-f (the Full uwuBot experience): uwuBot with bloat like `^mkembed`, a `^search` function, etc. Also includes `^lessons`.
<sub>Fun fact! These editions map perfectly to [windows 7 editions](https://cdn.discordapp.com/attachments/707186991372042240/927259297161822228/unknown.png)</sub>

### Aight, how use?
```bash
# to install
$ git clone https://github.com/breadtard/uwuTools --depth 1 --jobs 5
$ cd uwuTools/uwuBot
$ bash uwubot-inst.sh install <edition>

# to start
$ cd <edition>
$ nvim auth.json # enter token and stuff
$ python3 main.py
```

### Are you seriously going to maintain 6 bots at once?
yes

<sub>:wq</sub>
