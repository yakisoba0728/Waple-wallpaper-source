// Function: FUN_1404d73d0
// Addr: 1404d73d0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d73d0(char *param_1,uint param_2)

{
  uint uVar1;
  byte bVar2;
  byte *in_RAX;
  int *piVar3;
  byte *pbVar4;
  uint *unaff_RBX;
  char *unaff_RDI;
  
  *in_RAX = *in_RAX + (byte)in_RAX;
  *unaff_RBX = *unaff_RBX & param_2;
  piVar3 = (int *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                           CONCAT11((byte)((ulonglong)in_RAX >> 8) | (byte)param_2,
                                    (byte)in_RAX | *in_RAX));
  uVar1 = (int)piVar3 + *piVar3;
  pbVar4 = (byte *)(ulonglong)uVar1;
  bVar2 = (byte)uVar1;
  *unaff_RDI = *unaff_RDI + bVar2;
  if (bVar2 <= *pbVar4) {
    *param_1 = *param_1 + (char)(uVar1 >> 8);
    *pbVar4 = *pbVar4 + bVar2;
    *pbVar4 = *pbVar4 + bVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

