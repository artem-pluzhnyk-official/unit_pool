# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    defuse.sh                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apluzhni <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/19 20:43:56 by apluzhni          #+#    #+#              #
#    Updated: 2018/07/19 20:48:59 by apluzhni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

touch -r bomb.txt -A '000001' bomb.txt && stat -r bomb.txt | cut -d " " -f9