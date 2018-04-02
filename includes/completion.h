/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   completion.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguerin <aguerin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 14:16:27 by aguerin           #+#    #+#             */
/*   Updated: 2018/04/02 14:39:05 by aguerin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMPLETION_H
# define COMPLETION_H

# include "libft.h"
# include "libag.h"
# include "liberror.h"
# include <dirent.h>

/*
**	annexe.c
*/

char	*insert_backslash(char *command);
int		is_shellop(char c);
void	completion_error(void);
void	completion_del(void *content, size_t content_size);


/*
**	completion.c
*/

char	**completion(const char *word, const char **path,
						const char **builtin, const char **var);
/*
**	cut.c
*/

char	*delete_backslash(char *command);
int		find_begin(const char *command, int pos);
int		find_end(const char *command, int pos);
int		cut_path_word(const char *command, char **path, char **word);
char	*cut_command(const char *command, int pos);

#endif
