#!/bin/sh
#git_ignore

git status --ignored -s | grep '!!'  | cut -c 4-
