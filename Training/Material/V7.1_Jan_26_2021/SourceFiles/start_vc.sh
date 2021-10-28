#!/bin/bash
# SETUP_DIR - Environment variable point to this script's directory
export SETUP_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" >/dev/null && pwd )"

# TRAINING_DIR - Environment variable pointing to the training base directory
export TRAINING_DIR=$SETUP_DIR/..
# This'll expand the relative path to absolute path
export TRAINING_DIR="$( cd "$TRAINING_DIR" >/dev/null && pwd )"

# VECTORCAST_DIR - Environment variable pointing to the base directory for VectorCAST
export VECTORCAST_DIR=~/vcast

# VECTOR_LICENSE_FILE - Environment variable pointing to the license file
export LM_APP_DISABLE_CACHE_READ=1
export LM_LICENSE_FILE=
export VECTOR_LICENSE_FILE=$TRAINING_DIR/vector-DEMO.lic

# VCAST_COMPILER_DIR - Environment variable pointing to the base directory of compiler installation
export VCAST_COMPILER_DIR=/usr/bin

cd $TRAINING_DIR/MinGW_WorkDir
# PATH - Update the PATH environment variable
export PATH=$VCAST_COMPILER_DIR:$VECTORCAST_DIR:$PATH

$VECTORCAST_DIR/vcastqt &
