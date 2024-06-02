g++ src/$1
sudo perf stat -e "task-clock,cycles,instructions,L1-dcache-load,L1-dcache-load-misses,branch-misses" ./a.out