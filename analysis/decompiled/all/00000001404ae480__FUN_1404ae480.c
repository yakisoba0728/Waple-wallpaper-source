// Function: FUN_1404ae480
// Addr: 1404ae480
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ae480(undefined8 param_1,undefined8 param_2)

{
  int in_EAX;
  uint uVar1;
  byte *unaff_RDI;
  byte in_CF;
  
  uVar1 = in_EAX + 0x21004a + (uint)in_CF;
  *(char *)(ulonglong)uVar1 = *(char *)(ulonglong)uVar1 + (char)uVar1;
  *unaff_RDI = *unaff_RDI & (byte)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

