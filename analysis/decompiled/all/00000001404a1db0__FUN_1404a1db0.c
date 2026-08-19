// Function: FUN_1404a1db0
// Addr: 1404a1db0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a1db0(char *param_1,longlong param_2)

{
  undefined8 in_RAX;
  
  *(byte *)(param_2 + -0x6dc2fffc) = *(byte *)(param_2 + -0x6dc2fffc) ^ (byte)param_2;
  *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

