/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 13:26:48 by gasselin          #+#    #+#             */
/*   Updated: 2022/01/14 14:26:56 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
    : Form(DEF_SHRUB, 145, 137), target("Default")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string & _target)
    : Form(DEF_SHRUB, 145, 137), target(_target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & rhs)
    : Form(rhs.getName(), rhs.getSignGrade(), rhs.getExecGrade()), target(rhs.target)
{
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm & rhs){
    (void)rhs;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::execute(const Bureaucrat & executor) const {
    checkExecution(executor);
    
    std::ofstream   file(target + "_shrubbery");
    if (!file.is_open())
        return ;
    file <<"                               $ "<< std::endl;
	file <<"                              :$$ "<< std::endl;
	file <<"                         seeee$$$Neeee "<< std::endl;
	file <<"                           R$$$F$$$$F "<< std::endl;
	file <<"                             $$$$$$ "<< std::endl;
	file <<"                            @$$P*$$B "<< std::endl;
	file <<"                           z$#'  $#$b "<< std::endl;
	file <<"                           ' d   'N ' "<< std::endl;
	file <<"                            @'     ?r "<< std::endl;
	file <<"                          xF .       'N "<< std::endl;
	file <<"                       .$> P54.R       `$ "<< std::endl;
	file <<"                     $*   '*'$$$  uoP***~ "<< std::endl;
	file <<"                      #Noo '?$N'   #oL "<< std::endl;
	file <<"                         f       o$#$$'e. "<< std::endl;
	file <<"                        $  @b    hoR$$r ^'$$b "<< std::endl;
	file <<"                     .M   ?B$E   *.B$$       .R "<< std::endl;
	file <<"                   .*     */ *.4*R         ..* "<< std::endl;
	file <<"                oo#     ooL    d#R.     P##~ "<< std::endl;
	file <<"                $c    .""P#$  @   P     k "<< std::endl;
	file <<"                  R$r ''?L$$  P  'r     'N "<< std::endl;
	file <<"                    ^$ '$$$` $.....JL     'N. "<< std::endl;
	file <<"                  .$/           * P5'LR      $.. "<< std::endl;
	file <<"               ..* 4*R     xr    'PFN$$   .k    '*****. "<< std::endl;
	file <<"            od#'   d#*.  '*$$P~   '?$*' '#$$$'       u' "<< std::endl;
	file <<"         e''      f   M   @F'$  ec       x$'$.     :' "<< std::endl;
	file <<"         M        >  'd       $$$$?$           .$$F` "<< std::endl;
	file <<"          'P..  .$.....$L $$.4$$. '   @#3$$   $E. "<< std::endl;
	file <<"             '**..  *   R..$$ `R$*k.  fdM$$>     *.. "<< std::endl;
	file <<"               J'       *k$$$~  '*$**o$o$$P        '*oo. "<< std::endl;
	file <<"              P           #        '$$$#*o          >  '####*oooo "<< std::endl;
	file <<"           .e'            :e$$e.  F3  ^'$P  :$$s :e@$ee        s' "<< std::endl;
	file <<"         $P` M7>    $P$$k '$'?$3 @'#N      CxN$$> .$$$       .P "<< std::endl;
	file <<"      M$~   J/##   44N>$$  .d$.$d   @&      `$$$  F  .8..$$$* "<< std::endl;
	file <<"  .***     :   JM   *d$$*.$$.P  M  .P5     M          **. "<< std::endl;
	file <<"  'oo      J  .dP    ud$$od#   $oooooo$  oo$oo           ###ou "<< std::endl;
	file <<"     '####$beeeee$.'$eeP#~        ''      $$$.    e$$$o       #heeee "<< std::endl;
	file <<"        :'    ' z$r ^            o$N     ''  '   4$z>$$             '''#$$$ "<< std::endl;
	file <<"       .~      F$4$B       r    F @#$.       ..   $8$$P M7                $ "<< std::endl;
	file <<"     .*  $     8 $$B     .J$..  hP$$$F     .'PB$       J~##             .d~ "<< std::endl;
	file <<"   .P  *$$$*    '*'       $$$    #**~      hdM$$>     <   JM.......***** "<< std::endl;
	file <<" .P     $#*k       .o#>  P" "k   ..         '$$P      d  .JP'h "<< std::endl;
	file <<"'''hr ^        xe""  >          ""c           ee    @beeeee$.) "<< std::endl;
	file <<"      '''t$$$$F'      M        $`   R          > '$r     '     'c "<< std::endl;
	file <<"                              oooooooooo "<< std::endl;
	file <<"                              z        z "<< std::endl;
	file <<"                              z.,ze.$$$z "<< std::endl;
}