#!/usr/bin/python3

# from subprocess import call
import sys


def _dflags():
    _dflags_idx = []
    for idx, item in enumerate(sys.argv):
        if '-' in item & '--' not in item:
            _dflags_idx.append(idx)
    _dflags_list = []
    for idx, item in enumerate(_dflags_idx):
        _dflags_list.append(sys.argv[item])
    return _dflags_list


def _get_args(__key):
    _start = False
    _args = []
    for idx, item in enumerate(sys.argv):
        if __key == sys.argv[idx]:
            _start = True
            continue
        if '-' in sys.argv[idx] & _start:
            break
        if _start:
            _args.append(sys.argv[idx])
    return _args


_args = _get_args('-b')
print(_args)