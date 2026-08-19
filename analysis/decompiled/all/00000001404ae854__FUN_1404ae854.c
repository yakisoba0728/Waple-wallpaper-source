// Function: FUN_1404ae854
// Addr: 1404ae854
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ae854(char *param_1)

{
  undefined8 in_RAX;
  
  *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

