NAME="replacer"
FILES_FOLDER="./files/"
SUFFIXE=".replace"

echo "Agruments errors\n"
./${NAME}
./${NAME} "" "" ""
./${NAME} roger "" rabbit
./${NAME} roger "poeut" ""
./${NAME} roger rabbit rabbit

echo "\n\nFile errors\n"
./${NAME} roger lapin rabbit
chmod 000 "${FILES_FOLDER}no_perm.txt"
./${NAME} "${FILES_FOLDER}no_perm.txt" "pouet" "lol"
chmod 644 "${FILES_FOLDER}no_perm.txt"

echo "\n\nWorking\n"
./${NAME} "${FILES_FOLDER}lol.txt" "ce" "ca"
diff "${FILES_FOLDER}lol.txt" "${FILES_FOLDER}lol.txt${SUFFIXE}"

echo "\n"
./${NAME} "${FILES_FOLDER}au_cabaret_vert.txt" "Arthur Rimbaud" "Roger Rabbit"
diff "${FILES_FOLDER}au_cabaret_vert.txt" "${FILES_FOLDER}au_cabaret_vert.txt${SUFFIXE}"

echo "\n"
./${NAME} "${FILES_FOLDER}lorem512_char_line.txt" "Lorem" "Ce texte n'a aucun sens"
diff "${FILES_FOLDER}lorem512_char_line.txt" "${FILES_FOLDER}lorem512_char_line.txt${SUFFIXE}" 

echo "\n"
./${NAME} "${FILES_FOLDER}out.txt" "etlo" "hahahahaha"
diff "${FILES_FOLDER}out.txt" "${FILES_FOLDER}out.txt${SUFFIXE}"

echo "\n"
./${NAME} "${FILES_FOLDER}la.txt" "la" "sol"
#diff "${FILES_FOLDER}la.txt" "${FILES_FOLDER}la.txt${SUFFIXE}" 