#!/bin/bash

# 检查是否提供了测试目录作为参数
if [ -z "$1" ]; then
    echo "Usage: $0 <directory-with-test-files>"
    exit 1
fi

# --- START OF MODIFICATION ---
# Get the directory where this script is located.
SCRIPT_DIR=$( cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd )
# The project root is one level up from the script's directory.
PROJECT_ROOT="$SCRIPT_DIR/.."
# Define the parser executable path relative to the project root.
PARSER_EXEC="$PROJECT_ROOT/jsparser"
# --- END OF MODIFICATION ---

TEST_DIR=$1

# 检查解析器可执行文件是否存在
if [ ! -f "$PARSER_EXEC" ]; then
    echo -e "${RED}Error: Parser executable '$PARSER_EXEC' not found. Please build it first with 'make'.${NC}"
    exit 1
fi

# 输出颜色定义
GREEN='\033[0;32m'
RED='\033[0;31m'
YELLOW='\033[1;33m'
NC='\033[0m' # No Color

PASSED=0
FAILED=0
TOTAL=0

echo "Running Comprehensive JavaScript Parser Tests on all files in '$TEST_DIR'"
echo "========================================================================"
echo ""

# 遍历指定目录下的所有条目
for test_file in "$TEST_DIR"/*; do
    # 确保它是一个文件，而不是目录
    if [ -f "$test_file" ]; then
        ((TOTAL++))
        printf "Testing %-45s... " "'$(basename "$test_file")'"
        
        # 运行解析器 (已移除 timeout 以确保 macOS 兼容性)
        output=$($PARSER_EXEC "$test_file" 2>&1)
        exit_code=$?
        
        if [ $exit_code -eq 0 ]; then
            echo -e "${GREEN}PASSED${NC}"
            ((PASSED++))
        else
            echo -e "${RED}FAILED (Exit Code: $exit_code)${NC}"
            ((FAILED++))
        fi
    fi
done

echo ""
echo "========================================================================"
if [ $TOTAL -eq 0 ]; then
    echo -e "${YELLOW}Warning: No test files found in '$TEST_DIR'.${NC}"
else
    echo -e "Test Summary: ${GREEN}$PASSED passed${NC}, ${RED}$FAILED failed${NC} out of $TOTAL total files."
fi
echo "========================================================================"

if [ $FAILED -eq 0 ] && [ $TOTAL -gt 0 ]; then
    exit 0
else
    exit 1
fi