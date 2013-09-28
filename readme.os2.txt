Changes made :

(1) getline.c was ported to IBM Cset. Look for __IBMC__ for the
    modifications.

(2) The keymapping was changed for the PC Keyboard under EMX and Cset
    so that :

		HOME   sends a ctrl-a, beginning of line
		END    sends a ctrl-e, end of line
		INSERT sends a ctrl-o, toggles insert mode
		DELETE sends a ctrl-d, delete character


V. Phaniraj   Email: phaniraj@badlands.nodak.edu
 
