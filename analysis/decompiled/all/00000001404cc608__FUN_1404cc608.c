// Function: FUN_1404cc608
// Addr: 1404cc608
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cc608(char *param_1,undefined8 param_2)

{
  char *in_RAX;
  
  *in_RAX = *in_RAX + (char)param_1;
  cRam000000018d11e613 = cRam000000018d11e613 + (char)((ulonglong)param_2 >> 8);
  *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

