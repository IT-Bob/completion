#ifndef COMPLETION_H
# define COMPLETION_H

# include "libft.h"
# include "libag.h"
# include "environment.h"

char	**completion(const char *word, const char **path);

int		cut_word_path(const char *command, char **word, char **path);
char	*cut_command(const char *command, int pos);

#endif
