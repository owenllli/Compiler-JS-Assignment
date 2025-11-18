#!/bin/bash

# --- START OF MODIFICATION ---
# Get the directory where this script is located.
SCRIPT_DIR=$( cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd )
# The project root is one level up from the script's directory.
PROJECT_ROOT="$SCRIPT_DIR/.."
# Define the parser executable path relative to the project root.
PARSER_EXEC="$PROJECT_ROOT/jsparser"
# --- END OF MODIFICATION ---

# Colors for output
GREEN='\033[0;32m'
RED='\033[0;31m'
YELLOW='\033[1;33m'
NC='\033[0m' # No Color

PASSED=0
FAILED=0

# Check if the parser executable exists
if [ ! -f "$PARSER_EXEC" ]; then
    echo -e "${RED}Error: Parser executable '$PARSER_EXEC' not found. Please build it first with 'make'.${NC}"
    exit 1
fi

echo "Running JavaScript Parser Tests"
echo "================================"
echo ""

# This script tests .js files inside its own directory ('tests/')
for test_file in "$SCRIPT_DIR"/*.js; do
    if [ -f "$test_file" ]; then
        echo -n "Testing $(basename "$test_file")... "
        # Use the robust path to the executable
        output=$($PARSER_EXEC "$test_file" 2>&1)
        exit_code=$?
        
        if [ $exit_code -eq 0 ]; then
            echo -e "${GREEN}PASSED${NC}"
            ((PASSED++))
        else
            echo -e "${RED}FAILED${NC}"
            echo -e "${YELLOW}Error output:${NC}"
            echo "$output" | head -20
            echo ""
            ((FAILED++))
        fi
    fi
done

echo ""
echo "================================"
echo "Results: $PASSED passed, $FAILED failed"
echo "================================"

if [ $FAILED -eq 0 ]; then
    exit 0
else
    exit 1
fi