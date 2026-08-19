// Function: FUN_1404d4ec8
// Addr: 1404d4ec8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d4ec8(byte *param_1)

{
  undefined8 in_RAX;
  
  *param_1 = *param_1 ^ (byte)((ulonglong)in_RAX >> 8);
  verr();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

