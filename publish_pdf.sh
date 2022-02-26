#!/bin/bash

cd target
git init
git config init.defaultBranch master
git config user.email "ia-toki@ia-toki.org"
git config user.name "ia-toki"
git add *.pdf
git commit -m "Publish PDFs from commit ia-toki/training-gate-id@$GITHUB_SHA"
git push -f "https://${GH_TOKEN}@github.com/ia-toki/training-gate-id-pdf.git" master > /dev/null 2>&1
