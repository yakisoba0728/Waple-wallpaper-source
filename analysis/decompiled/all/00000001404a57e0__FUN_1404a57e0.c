// Function: FUN_1404a57e0
// Addr: 1404a57e0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a57eb) overlaps instruction at (ram,0x0001404a57e9)
    */

void FUN_1404a57e0(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  uint uVar2;
  int *in_RAX;
  char *pcVar3;
  uint *unaff_RDI;
  
  *in_RAX = *in_RAX + (int)param_1;
  uVar2 = (int)in_RAX + *in_RAX;
  pbVar1 = (byte *)(param_2 + 4);
  *pbVar1 = *pbVar1 | (byte)uVar2;
  pcVar3 = (char *)(param_1 + -1);
  if (pcVar3 == (char *)0x0 || *pbVar1 == 0) {
    *(undefined1 *)(ulonglong)uVar2 = *(undefined1 *)(ulonglong)uVar2;
    *unaff_RDI = *unaff_RDI & (uint)pcVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar3 = *pcVar3 + (char)(uVar2 >> 8);
  *(char *)unaff_RDI = (char)*unaff_RDI + (char)pcVar3;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

