# TestProgTemplate
This is the initial README for `my_new_prog`.

### Usage 
```
my_new_prog \ 
    [--debug] \
    [--hpc-mode] \
    [--container] \
    [--verbose | -v] \
    [--dryrun]
```

Command Line Arguments:
- `--debug` turns on debug mode, which prints absolutely everything it can to `stdout`.
- `--hpc-mode` identifies the program as being run from a supercomputer or HPC, often with job-scheduling.  Useful for ensuring jobs are not run on login nodes, etc.
- `--container` is when the program is installed within a container like Docker or Singularity - can be helpful for modifying input and output handling.
- `--verbose` or `-v` increases the amount of detail in the logging to `stdout`/`stderr`.  Not as much as `debug`, but more than the basics.
- `--dryrun` is a quick flag for situations when the program should simply report what it would be doing without necessarily doing those tasks - useful for ensuring expected behaviors before performing long tasks.
