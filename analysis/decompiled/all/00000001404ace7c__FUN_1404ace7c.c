// Function: FUN_1404ace7c
// Addr: 1404ace7c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ace7c(longlong param_1,undefined8 param_2)

{
  int in_EAX;
  uint uVar1;
  longlong unaff_RBX;
  longlong unaff_RDI;
  byte in_CF;
  
  uVar1 = in_EAX + 0x6003501 + (uint)in_CF;
  if (param_1 + -1 == 0 || uVar1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(uint *)(ulonglong)uVar1 = *(uint *)(ulonglong)uVar1 & (uint)(param_1 + -1);
  *(byte *)(unaff_RBX + unaff_RDI) =
       *(byte *)(unaff_RBX + unaff_RDI) | (byte)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

