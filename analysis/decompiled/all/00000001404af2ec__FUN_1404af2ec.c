// Function: FUN_1404af2ec
// Addr: 1404af2ec
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404af2ec(char *param_1,longlong param_2)

{
  char *pcVar1;
  uint uVar2;
  byte bVar3;
  uint *in_RAX;
  undefined7 uVar5;
  longlong lVar4;
  longlong unaff_RBP;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  longlong in_FS_OFFSET;
  
  *in_RAX = *in_RAX & (uint)param_1;
  uVar2 = *in_RAX;
  uVar5 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar3 = (byte)((ulonglong)param_2 >> 8);
  *(byte *)((longlong)unaff_RSI + param_2) = *(byte *)((longlong)unaff_RSI + param_2) | bVar3;
  bVar3 = (char)in_RAX + (char)uVar2 + bVar3;
  *(char *)(unaff_RBP + 0x80013db) = *(char *)(unaff_RBP + 0x80013db) + (char)param_1;
  *param_1 = *param_1 + bVar3;
  *unaff_RDI = *unaff_RSI;
  bVar3 = bVar3 | *(byte *)CONCAT71(uVar5,bVar3);
  lVar4 = CONCAT71(uVar5,bVar3);
  unaff_RDI[1] = unaff_RSI[1];
  pcVar1 = (char *)(in_FS_OFFSET + lVar4);
  *pcVar1 = *pcVar1 + bVar3;
  LocalDescriptorTableRegister(*(undefined2 *)(lVar4 + 0xa000e34));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

