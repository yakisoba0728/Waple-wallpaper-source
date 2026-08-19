// Function: FUN_1404bd05c
// Addr: 1404bd05c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bd05c(byte *param_1)

{
  byte bVar1;
  
  bVar1 = (byte)param_1 & 7;
  *param_1 = *param_1 << bVar1 | *param_1 >> 8 - bVar1;
  *param_1 = *param_1;
  *(int *)((ulonglong)&stack0x00000000 & 0xffffffff) =
       *(int *)((ulonglong)&stack0x00000000 & 0xffffffff) + (int)&stack0x00000000;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

