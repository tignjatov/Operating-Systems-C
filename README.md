# Operating Systems - C

A collection of C programming exercises developed as part of the Operating Systems course.

The projects demonstrate fundamental concepts related to multithreading, synchronization and concurrent programming using POSIX threads.

## Topics

- POSIX Threads (`pthread`)
- Thread creation and management
- Mutex synchronization
- Semaphores
- Race conditions
- Deadlocks
- Producer-consumer synchronization
- Multithreaded matrix operations

## Project Structure

### Threads

Examples focused on creating and managing multiple threads.

- `niti.c` - basic multithreading concepts using POSIX threads
- `matrice.c` - matrix operations using multiple threads

### Synchronization

Examples demonstrating synchronization and common concurrency problems.

- `stanje_trke.c` - race condition example
- `prosti_mutex.c` - synchronization using mutexes
- `filozofi_naivno.c` - Dining Philosophers problem, naive implementation
- `filozofi_mutex.c` - Dining Philosophers using mutex synchronization
- `prosti_semafori.c` - semaphore synchronization
- `blokirajuci_red.c` - blocking queue / producer-consumer synchronization

## Technologies

- C
- POSIX Threads
- Mutexes
- Semaphores
- GCC
- Linux

## Course

Operating Systems university coursework.
