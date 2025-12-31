#!/bin/bash

# Directory containing the RISC-V executables
BIN_DIR="/home/savvina/Desktop/RISC-V_Benchmarks/bin/hpmcount_overhead"

# Emulator or runtime for RISC-V binaries
RISCV_EMULATOR="./simulator-chipyard.harness-PerfCountRocketConfig"  # Adjust this as per your setup

# Directory to store log files
LOG_DIR="/home/savvina/Desktop/RISC-V_Benchmarks/logs/hpmcount_overhead"

# Create the log directory if it does not exist
mkdir -p "$LOG_DIR"

# Check if the bin directory exists
if [ ! -d "$BIN_DIR" ]; then
    echo "Error: Directory $BIN_DIR does not exist."
    exit 1
fi

# Iterate over all files in the bin directory
for executable in "$BIN_DIR"/*; do
    if [ -f "$executable" ]; then
        # Extract the base name of the executable (e.g., "myprogram" from "bin/myprogram")
        base_name=$(basename "$executable")

        # Create a log file name by appending ".log" to the executable base name
        log_file="$LOG_DIR/${base_name}.log"

        echo "Running: $executable"
        echo "Logging output to: $log_file"

        # Run the RISC-V executable with the emulator and redirect output to the log file
        $RISCV_EMULATOR "$executable" > "$log_file" 2>&1

        # Check if the command succeeded
        if [ $? -ne 0 ]; then
            echo "Error running $executable (see $log_file for details)"
        else
            echo "$executable ran successfully (output logged to $log_file)"
        fi
    fi
done
