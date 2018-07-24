/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fight.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apluzhni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 10:15:12 by apluzhni          #+#    #+#             */
/*   Updated: 2018/07/20 10:15:24 by apluzhni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FIGHT_H
# define FT_FIGHT_H
# define PUNCH "punch"
# define KICK "kick"
# define HEADBUTT "headbutt"
# include "ft_perso.h"

void	ft_fight(t_perso *attacker, t_perso *defense, char *attack);

#endif
