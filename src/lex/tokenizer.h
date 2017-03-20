/* author: dongchangzhang */
/* time: Fri 03 Mar 2017 12:39:51 PM CST */

#ifndef SRC_TOKENIZER_H
#define SRC_TOKENIZER_H

/* Token defined in this file */
#include "utils.h"

#include <fstream>
#include <string>
#include <vector>


class Tokenizer {
    public:
        /* construct function */
        Tokenizer() : type(0), linenu(0) {  };
        // input a file
        Tokenizer(std::string f) : type(1), linenu(0), file(f) { in.open(f); };
        /* destruct function */
        ~Tokenizer() { if(in) in.close(); }
        /* get next token */
        Token next();

        bool isend() { return finished; }
        /* get line number */
        int get_linenu() { return linenu; }
    private:
        /* work type : type = 0 -> deal file */
        int type;

        /* line number */
        int linenu;

        /* save file name */
        std::string file;

        bool print_log = true;
        /* meet EOF when read file */
        bool finished = false;

        size_t cursor;

        size_t buffer_size;

        /* save token which will be return after scanning */
        Token token;
        /* buffer for every line */
        std::string buffer;
        /* file stream */
        std::ifstream in;
        /* skip blank char */
        void skip_ws();
        /* skip annotation */
        void skip_annotation();

        void check_buffer();

        void deal_word(std::vector<char> &vtoken, bool &reidentify);

        void deal_num(std::vector<char> &vtoken, bool &reidentify);

        void deal_symbol(std::vector<char> &vtoken, bool &reidentify);

        void deal_error(int error_type, bool &reidentify);

        Token do_next();

};

#endif


