projeto(proj1).
projeto(proj2).
projeto(proj3).

membro(joao).
membro(maria).
membro(pedro).
membro(ana).

funcao(joao, desenvolvedor).
funcao(maria, gerente).
funcao(pedro, analista).
funcao(ana, desenvolvedor).

trabalha_em(joao, proj1).
trabalha_em(maria, proj1).
trabalha_em(pedro, proj2).
trabalha_em(ana, proj3).
trabalha_em(joao, proj3).

funcao_em(proj1, joao, desenvolvedor).
funcao_em(proj1, maria, gerente).
funcao_em(proj2, pedro, analista).
funcao_em(proj3, ana, desenvolvedor).
funcao_em(proj3, joao, desenvolvedor).

gerente_de_projeto(Projeto, Membro) :-
    trabalha_em(Membro, Projeto),
    funcao_em(Projeto, Membro, gerente).

desenvolvedores_do_projeto(Projeto, Desenvolvedor) :-
    trabalha_em(Desenvolvedor, Projeto),
    funcao_em(Projeto, Desenvolvedor, desenvolvedor).

projetos_de_joao(Projeto) :-
    trabalha_em(joao, Projeto).

analistas_do_projeto(Projeto, Analista) :-
    trabalha_em(Analista, Projeto),
    funcao_em(Projeto, Analista, analista).

membros_do_projeto(Projeto, Membro) :-
    trabalha_em(Membro, Projeto).
