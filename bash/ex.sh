#!/bin/bash 

find -mmin -3 -name flag | grep flag
if [ $? -eq 0 ];then
  echo "Import already have done"
  exit 1
fi



touch flag
echo "flag set"


