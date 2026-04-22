all:
	gcc src/engine.c -o engine
	gcc src/cpu_hog.c -o cpu_hog
	gcc src/memory_hog.c -o memory_hog
	gcc src/io_pulse.c -o io_pulse
	gcc src/monitor.c -o monitor

clean:
	rm -f engine cpu_hog memory_hog io_pulse monitor
