// Function: FUN_1404c6d44
// Addr: 1404c6d44
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c6d44(char *param_1)

{
  undefined8 in_RAX;
  
  in(0x4a);
  *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

