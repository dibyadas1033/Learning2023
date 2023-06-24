#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ENTRIES 100

struct LogEntry {
    int entryNo;
    char sensorNo[10];
    float temperature;
    int humidity;
    int light;
    char timestamp[9];
};

void extractLines(const char *fileName, struct LogEntry logEntries[], int *numEntries) {
    FILE *file = fopen(fileName, "r");
    if (file == NULL) {
        printf("Failed to open the file.\n");
        exit(1);
    }

    char line[100];
    *numEntries = 0;

    while (fgets(line, sizeof(line), file) != NULL) {
        if (line[0] != '\n' && line[0] != '-') {
            struct LogEntry entry;
            sscanf(line, "%d,%[^,],%f,%d,%d,%[^,\n]", &entry.entryNo, entry.sensorNo, &entry.temperature,
                   &entry.humidity, &entry.light, entry.timestamp);
            logEntries[*numEntries] = entry;
            (*numEntries)++;
        }
    }

    fclose(file);
}

void displayLogEntries(const struct LogEntry logEntries[], int numEntries) {
    printf("EntryNo\tSensorNo\tTemperature\tHumidity\tLight\tTimestamp\n");
    printf("-------------------------------------------------------------\n");

    for (int i = 0; i < numEntries; i++) {
        printf("%d\t%s\t\t%.2f\t\t%d\t\t%d\t%s\n", logEntries[i].entryNo, logEntries[i].sensorNo,
               logEntries[i].temperature, logEntries[i].humidity, logEntries[i].light, logEntries[i].timestamp);
    }
}

int main() {
    struct LogEntry logEntries[MAX_ENTRIES];
    int numEntries = 0;

    extractLines("data.csv", logEntries, &numEntries);
    displayLogEntries(logEntries, numEntries);

    return 0;
}
