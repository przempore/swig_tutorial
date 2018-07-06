#!/usr/bin/python

import _example as ex

w = ex.new_Word("meat")
print ex.Word_getWord(w)
ex.Word_updateWord(w,"beef")
print ex.Word_getWord(w)
