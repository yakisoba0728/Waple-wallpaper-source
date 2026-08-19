// Function: FUN_1404d5ae8
// Addr: 1404d5ae8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404d5af9) */

void FUN_1404d5ae8(char *param_1,undefined8 param_2)

{
  byte *in_RAX;
  
  *in_RAX = *in_RAX | (byte)((ulonglong)param_2 >> 8);
  *param_1 = *param_1 + (char)param_2;
  uRam00000001458f63f3 = uRam00000001458f63f3 | (uint)in_RAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

