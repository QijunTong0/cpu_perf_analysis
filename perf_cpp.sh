sudo perf stat -e "cycles,instructions,L1-dcache-load,L1-dcache-load-misses,branch-misses" $1