#ifndef	mylibrary
#define	mylibrary


int factorial (n){
	int result =1;
	while(n>0){
		
		result *= n;
		n--;
	}
	return result;
}

#endif
