// Function: FUN_1404cd430
// Addr: 1404cd430
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cd430(undefined8 param_1)

{
  uint *puVar1;
  byte bVar2;
  char *in_RAX;
  longlong unaff_RDI;
  float10 in_ST0;
  
  *(longlong *)(unaff_RDI + 0x41) = (longlong)in_ST0;
  *in_RAX = *in_RAX + (char)((ulonglong)param_1 >> 8);
  puVar1 = (uint *)((longlong)in_RAX * 2 + 0x21);
  bVar2 = (byte)param_1 & 0x1f;
  *puVar1 = *puVar1 >> bVar2 | *puVar1 << 0x20 - bVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

