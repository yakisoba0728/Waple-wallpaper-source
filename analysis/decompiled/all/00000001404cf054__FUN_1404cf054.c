// Function: FUN_1404cf054
// Addr: 1404cf054
// Size: 1 bytes


void FUN_1404cf054(char *param_1,byte *param_2)

{
  char *in_RAX;
  char unaff_R12B;
  
  if (!SBORROW1((byte)in_RAX,*in_RAX)) {
    *param_1 = *param_1 + unaff_R12B;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  *param_2 = *param_2 | (byte)in_RAX;
  *in_RAX = *in_RAX + (char)param_1;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

