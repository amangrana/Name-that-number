Name-that-number
================

#遇到的问题：temp[MAXLEN]在进行转换时被改变了


#Analysis里面的算法：

    map['A'] = map['B'] = map['C'] = '2';
    map['D'] = map['E'] = map['F'] = '3';
    map['G'] = map['H'] = map['I'] = '4';
    map['J'] = map['K'] = map['L'] = '5';
    map['M'] = map['N'] = map['O'] = '6';
    map['P'] = map['R'] = map['S'] = '7';
    map['T'] = map['U'] = map['V'] = '8';
    map['W'] = map['X'] = map['Y'] = '9';
    


然后

     for (p=word, q=num; *p && *q; p++, q++) {
        if (map[*p] != *q)
            break;
    }

巧妙运用数组，把待分类的量放进数组方括号里，进行分类、赋值并最终实现比较
