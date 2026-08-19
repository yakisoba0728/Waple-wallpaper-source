// Function: FUN_1404b7fb0
// Addr: 1404b7fb0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b7fb0(char *param_1)

{
  undefined8 in_RAX;
  
  in(0x4a);
  *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

