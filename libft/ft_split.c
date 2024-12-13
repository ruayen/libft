/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raissaou <raissaou@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-13 13:55:32 by raissaou          #+#    #+#             */
/*   Updated: 2024-12-13 13:55:32 by raissaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int count_words(char const *str, char delimiter) {
    int count = 0;
    int in_word = 0;

    while (*str != '\0') {
        if (*str == delimiter) {
            in_word = 0;
        } else if (in_word == 0) {
            in_word = 1;
            count++;
        }
        str++;
    }
    return count;
}

// Cuenta la cantidad de caracteres en una palabra desde la posición i
static int word_length(char const *str, char delimiter, int start) {
    int length = 0;
    
    while (str[start] != delimiter && str[start] != '\0') {
        length++;
        start++;
    }
    return length;
}

// Libera la memoria asignada en caso de error
static char **free_memory(char **result, int words) {
    while (words > 0) {
        words--;
        free(result[words]);
    }
    free(result);
    return NULL;
}

// Asigna las palabras en la matriz resultante
static char **assign_words(char const *str, char **result, char delimiter, int total_words) {
    int i = 0;
    int word_index = 0;

    while (str[i] != '\0' && word_index < total_words) {
        int char_index = 0;

        while (str[i] == delimiter) {
            i++;
        }

        result[word_index] = (char *)malloc(sizeof(char) * (word_length(str, delimiter, i) + 1));
        if (result[word_index] == NULL) {
            return free_memory(result, word_index);
        }

        while (str[i] != '\0' && str[i] != delimiter) {
            result[word_index][char_index++] = str[i++];
        }

        result[word_index][char_index] = '\0';
        word_index++;
    }
    result[word_index] = 0;
    return result;
}

// Función principal para dividir la cadena en palabras
char **ft_split(char const *str, char delimiter) {
    char **result;
    int total_words;

    if (str == NULL) {
        return NULL;
    }

    total_words = count_words(str, delimiter);
    result = (char **)malloc(sizeof(char *) * (total_words + 1));
    if (result == NULL) {
        return NULL;
    }

    return assign_words(str, result, delimiter, total_words);
}