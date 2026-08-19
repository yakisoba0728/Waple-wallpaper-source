// Function: FUN_1404ab114
// Addr: 1404ab114
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404ab127) overlaps instruction at (ram,0x0001404ab126)
    */

void FUN_1404ab114(longlong param_1,char *param_2)

{
  uint uVar1;
  int *in_RAX;
  uint unaff_ESI;
  undefined4 unaff_00000034;
  uint *unaff_RDI;
  byte *pbVar2;
  
  *in_RAX = *in_RAX + (int)param_2;
  uVar1 = (int)in_RAX + 0xc421000;
  pbVar2 = (byte *)(ulonglong)uVar1;
  if (param_1 + -1 == 0 || uVar1 == 0) {
    *pbVar2 = *pbVar2 >> 1 | *pbVar2 << 7;
    *(undefined1 *)CONCAT44(unaff_00000034,unaff_ESI) =
         *(undefined1 *)CONCAT44(unaff_00000034,unaff_ESI);
    *pbVar2 = *pbVar2 + (byte)uVar1;
    *unaff_RDI = *unaff_RDI & unaff_ESI;
    *pbVar2 = *pbVar2 | (byte)uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)unaff_RDI = (char)*unaff_RDI + (char)((ulonglong)param_2 >> 8);
  *param_2 = *param_2 + (char)(param_1 + -1);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

