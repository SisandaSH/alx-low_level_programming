<<<<<<< HEAD
	global   main
	  extern    printf
=======
       global    main
          extern    printf
>>>>>>> 9b30ec1f79ec3ef9f9d1a3c5321a4b2005ed732a
main:
	  mov   edi, format
	  xor   eax, eax
	  call  printf
<<<<<<< HEAD
	  mov   eax, 0
=======
	  mov 	eax, 0
>>>>>>> 9b30ec1f79ec3ef9f9d1a3c5321a4b2005ed732a
	  ret
format: db `Hello, Holberton\n`,0
