package javareadtextfile;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.Set;

/**
 * Este é uma classe Wrapper, que encapsula o conjunto de dados em um HaspMap.
 *
 * @author Sobjak
 */

// Como dito acima, foi o prof Sobjak que fez inicialmente, e me imprestou
// Devidos créditos a ele, e se tiver alguma duvida, não me procure
public class Dataset extends HashMap<String, ArrayList> {
    
    public String[] getColumnNamesArray() {
        String[] names = new String[keySet().size()];
        return keySet().toArray(names);
    }
    
    public Set getColumnNames() {
        return keySet();
    }

    public HashMap<String, ArrayList> getData() {
        return this;
    }
}
