# Makefile

CC = gcc
CFLAGS = -Wall -Wextra -std=c99
LDFLAGS = -L/usr/lib -lncurses -lm
INCLUDES = -I/usr/include

SRCS = main.c welcome.c load_logs_from_file.c create_profile.c calculate_bmi.c classify_health_status.c log_exercise.c log_food.c view_exercise_logs.c view_food_logs.c display_exercise_chart.c display_food_chart.c daily_calorie_intake.c display_fitness_progress.c nutritional_habits.c exercise_recommendations.c display_educational_content.c save_logs_to_file.c

OBJS = $(SRCS:.c=.o)

TARGET = health_assistant

all: $(TARGET)

$(TARGET): $(OBJS)
		$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

%.o: %.c
		$(CC) $(CFLAGS) $(INCLUDES) -c -o $@ $<

clean:
		rm -f $(OBJS) $(TARGET)
