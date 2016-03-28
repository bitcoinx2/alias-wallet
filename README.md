
[![Build Status](https://travis-ci.org/shadowproject/shadow.svg?branch=master)](https://travis-ci.org/shadowproject/shadow) [![Code Climate](https://codeclimate.com/github/shadowproject/shadow/badges/gpa.svg)](https://codeclimate.com/github/shadowproject/shadow) [![Test Coverage](https://codeclimate.com/github/shadowproject/shadow/badges/coverage.svg)](https://codeclimate.com/github/shadowproject/shadow/coverage) [![Issue Count](https://codeclimate.com/github/shadowproject/shadow/badges/issue_count.svg)](https://codeclimate.com/github/shadowproject/shadow)

![ShadowCash Logo](https://ip.bitcointalk.org/?u=http%3A%2F%2Fi.imgur.com%2FovemJA3.png&t=562&c=nyNSCCzYNV4Zhg)

Development process
===========================

Developers work in their own trees, then submit pull requests when
they think their feature or bug fix is ready.

The patch will be accepted if there is broad consensus that it is a
good thing.  Developers should expect to rework and resubmit patches
if they don't match the project's coding conventions (see coding.txt)
or are controversial.

The master branch is regularly built and tested, but is not guaranteed
to be completely stable. Tags are regularly created to indicate new
stable release versions of ShadowCash.

Feature branches are created when there are major new features being
worked on by several people.

From time to time a pull request will become outdated. If this occurs, and
the pull is no longer automatically mergeable; a comment on the pull will
be used to issue a warning of closure. The pull will be closed 15 days
after the warning if action is not taken by the author. Pull requests closed
in this manner will have their corresponding issue labeled 'stagnant'.

Issues with no commits will be given a similar warning, and closed after
15 days from their last activity. Issues closed in this manner will be 
labeled 'stale'.

Building Shadow
===========================

See [doc/readme-qt.rst](https://github.com/shadowproject/shadow/blob/master/doc/readme-qt.rst) for instructions on building **ShadowCoin QT** | *the intended-for-end-users, nice-graphical-interface, reference implementation of ShadowCash.*

See [doc/build-msw.txt](https://github.com/shadowproject/shadow/blob/master/doc/build-msw.txt) for instructions on building **shadowcoind (Windows)** | *the intended-for-services, no-graphical-interface, reference implementation of ShadowCash.*

See [doc/build-osx.txt](https://github.com/shadowproject/shadow/blob/master/doc/build-osx.txt) for instructions on building **shadowcoind (Mac)**

See [doc/build-unix.txt](https://github.com/shadowproject/shadow/blob/master/doc/build-unix.txt) for instructions on building **shadowcoind (UNIX)**


> For guides and technical documentation please refer to [doc.shadowproject.io (en)](https://shadowproject.io/en/documentation)
