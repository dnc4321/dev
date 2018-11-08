#!/usr/bin/python3

from subprocess import call
import sys


def _dflags():
    _dflags_list = []
    for item in sys.argv:
        if ('-' in item) and ('--' not in item):
            _dflags_list.append(item.replace('-',''))
    return list(set(_dflags_list))


def _ddflags():
    _ddflags_list = []
    for item in sys.argv:
        if '--' in item:
            _ddflags_list.append(item.replace('--',''))
    return list(set(_ddflags_list))


def _get_args(__key):
    _start = False
    _args = []
    for item in sys.argv:
        if __key == item:
            _start = True
            continue
        if ('-' in item) and _start:
                break
        if _start is True:
            _args.append(item)
    return _args

_prog_name = sys.argv[0]
_dflags_list = _dflags()
_bin_name = ''
_files = _get_args(_prog_name)
_exec = ['./']
_comp = []
_del = ['rm']

if len(_files)>0:
    _bin_name = _files[0] + '.out'
    if '.c' in _files[0]:
        _comp = ['gcc']
    if ('.cpp' in _files[0]) or ('.cc' in _files[0]):
        _comp = ['g++']
    _comp += _files
    _comp += ['-o',_bin_name]
    _exec[0] += _bin_name
    _del.append(_bin_name)
else:
    print('No files specified')
    exit(1)
_exec += _get_args('-a')

print(_comp)
print(_exec)
if 'd' not in _dflags_list:
    print(_del)
if call(_comp) is 0:
    print('[DEBUG] Executed \'_comp\'')
    if (call(_exec) is 0) and ('d' not in _dflags_list):
        print('[DEBUG] Executed \'_exec\'')
        call(_del)
        print('[DEBUG] Executed \'_del\'')