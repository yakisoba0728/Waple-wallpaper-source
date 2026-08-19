// Function: FUN_1404b91fc
// Addr: 1404b91fc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b91fc(char *param_1,uint *param_2)

{
  byte *in_RAX;
  uint unaff_EBP;
  
  *param_2 = *param_2 & unaff_EBP;
  if ((CONCAT71((int7)((ulonglong)in_RAX >> 8),(byte)in_RAX | *in_RAX) & 0x1a0005d4) != 0) {
    *param_1 = *param_1 + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

