// Function: FUN_1404b8b8c
// Addr: 1404b8b8c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b8b8c(undefined8 param_1,undefined2 param_2)

{
  char *pcVar1;
  byte bVar2;
  int iVar3;
  int *in_RAX;
  int *piVar4;
  char *unaff_RBX;
  int unaff_EBP;
  undefined4 unaff_0000002c;
  byte *unaff_RSI;
  int *unaff_RDI;
  
  bVar2 = (byte)in_RAX;
  out(param_2,bVar2);
  *unaff_RBX = *unaff_RBX + (byte)param_2;
  *unaff_RDI = *unaff_RDI + unaff_EBP;
  *(byte *)unaff_RDI = (char)*unaff_RDI + bVar2;
  *unaff_RSI = *unaff_RSI ^ bVar2;
  unaff_RDI[2] = unaff_RDI[2] & (uint)in_RAX;
  *(byte *)(unaff_RDI + -3) = (char)unaff_RDI[-3] + bVar2;
  *in_RAX = *in_RAX - (uint)in_RAX;
  piVar4 = (int *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                           CONCAT11((byte)((ulonglong)in_RAX >> 8) & (byte)param_2,
                                    bVar2 - (char)*in_RAX));
  iVar3 = (int)piVar4 - *piVar4;
  pcVar1 = (char *)(CONCAT44(unaff_0000002c,unaff_EBP) + -0x5a04ffe2);
  *pcVar1 = *pcVar1 + ((byte)((uint)iVar3 >> 8) | (byte)iVar3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

