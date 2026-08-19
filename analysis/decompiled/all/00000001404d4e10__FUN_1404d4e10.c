// Function: FUN_1404d4e10
// Addr: 1404d4e10
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d4e10(byte param_1,char *param_2)

{
  byte bVar1;
  uint uVar2;
  longlong in_RAX;
  int *piVar3;
  int unaff_EBX;
  undefined4 unaff_0000001c;
  uint *unaff_RSI;
  char *unaff_RDI;
  
  *param_2 = *param_2 + (char)in_RAX;
  bVar1 = *(byte *)(in_RAX + -0x7effc68a);
  uVar2 = *unaff_RSI;
  *unaff_RSI = *unaff_RSI | 0x19000000;
  *(byte *)CONCAT44(unaff_0000001c,unaff_EBX) =
       *(byte *)CONCAT44(unaff_0000001c,unaff_EBX) ^ param_1;
  *unaff_RDI = *unaff_RDI + (char)unaff_EBX;
  piVar3 = (int *)((ulonglong)
                   ((int)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                                  CONCAT11((byte)((ulonglong)in_RAX >> 8) | bVar1,(char)in_RAX)) +
                    uVar2 | 2) ^ 0x60);
  *unaff_RDI = *unaff_RDI + (char)unaff_EBX;
  *piVar3 = *piVar3 + unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

