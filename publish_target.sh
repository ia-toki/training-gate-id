#!/bin/bash

# Inspired by http://benlimmer.com/2013/12/26/automatically-publish-javadoc-to-gh-pages-with-travis-ci/

if [ "$TRAVIS_REPO_SLUG" == "ia-toki/training-gate-id" ] && [ "$TRAVIS_PULL_REQUEST" == "false" ] && [ "$TRAVIS_BRANCH" == "master" ]; then

    cd target
    git init
    git config user.email "travis@travis-ci.org"
    git config user.name "travis-ci"
    git add *.pdf
    git commit -m "Publish target from commit $TRAVIS_COMMIT" -m "[ci skip]"
    git push -f "https://${GH_TOKEN}@github.com/ia-toki/training-gate-id.git" master:target > /dev/null 2>&1

fi
