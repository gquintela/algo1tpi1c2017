# algo1tpi1c2017
Implementacion de sudoku

MODO DE TRABAJO

1- git clone {url de la repo] // te copia la repo en donde estes parado en tu pc.

2- git checkout -b branch-{nombreDelUser} // creas una rama paralela al proyecto principal. trabajamos siempre en ramas, nunca en el master.

se labura normalmente.

3- git add -A

4- git commit -m "{descripcion} "

// el primer comando agrega los archivos para comitear. // el segundo comitea propiamente dicho. (commit= guarda la version en tu pc)

// es CLAVE hacer esto seguido. esto guarda la version en tu pc. // cada vez q copian un ejericio del tp, hacer un commit. // ejemplo: commit -m "copiado ejercicios 2 y 3"

terminé de laburar, y tengo q subir a git todo asi lo podemos bajar todos.

5- git push origin {branchTuyo}

entro a la pagina de internet de git, y en la parte del repositorio, hago un pull request, para decir que quiero mandar mi laburo a la branch master y que los demas lo controlen para ver si esta bien. (es bastante intuitivo donde hacerlo en la pagina, busquenlo)

ahora digamos que aprobamos el cambio, se mergea el branch(eso lo hace guille q es el dungeon master) entonces queremos tener todos la nueva version del tp.

nos paramos en la consola en el branch master

git checkout master

git pull origin master

/actualiza todo lo q esta bien del master

git checkout {branchTuya} y ejecutamos este comando:

git merge --no-ff master // copia el master a tu branch, y ya tenes la ultima version en tu branch.

y ahi podes seguir laburando.

NOTA: para traerte la data de otros branchs y poder moverte a esos branchs, usar comando: "git fetch origin". esto es diferente de hacer un pull porque un pull te baja a tu pc todos los cambios del branch que le especificas, mientras que fetch origin te trae la data de los branchs existentes en el repo.

cualquier duda, pregunten! (preferentemente a Guille que es alto giteador)
