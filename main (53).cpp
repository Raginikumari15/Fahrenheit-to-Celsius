int printTable( int start, int end, int step){
    int c;
    
while(start<= end ){
         c = ((start -32)*5)/9;
          cout<< start<< "\t"<< c<<endl;
            start= start + step;
        //return c; 
    } 
}
    
    
    