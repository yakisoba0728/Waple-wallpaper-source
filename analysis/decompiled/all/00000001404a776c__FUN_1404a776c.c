// Function: FUN_1404a776c
// Addr: 1404a776c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a776c(char *param_1,longlong param_2)

{
  undefined3 uVar1;
  byte bVar2;
  char cVar6;
  char cVar7;
  uint in_EAX;
  uint uVar3;
  byte *pbVar5;
  longlong unaff_RBP;
  int unaff_ESI;
  undefined4 unaff_00000034;
  int *unaff_RDI;
  char *pcVar4;
  
  uRam00000001b44f7774 = uRam00000001b44f7774 & in_EAX;
  cVar7 = (char)((ulonglong)param_1 >> 8);
  *(char *)(unaff_RBP + 0x7688000a) = *(char *)(unaff_RBP + 0x7688000a) + cVar7;
  *param_1 = *param_1;
  uVar3 = (in_EAX | 0xa24ec00) + 0xd4050002;
  verw();
  bVar2 = (byte)uVar3 | *(byte *)(ulonglong)uVar3;
  pcVar4 = (char *)(ulonglong)CONCAT31((int3)(uVar3 >> 8),bVar2);
  if (bVar2 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar6 = (char)(uVar3 >> 8);
  *param_1 = *param_1 + cVar6;
  *pcVar4 = *pcVar4 + bVar2;
  *(char *)(unaff_RBP + 0x7688000a) = *(char *)(unaff_RBP + 0x7688000a) + cVar7;
  *param_1 = *param_1 + -8;
  uVar3 = (CONCAT31((int3)(CONCAT22((short)(uVar3 >> 0x10),CONCAT11(cVar6 + cVar7,bVar2)) >> 8),
                    bVar2) & 0xffffff0a) + 0x34050002;
  pbVar5 = (byte *)(ulonglong)uVar3;
  *pbVar5 = *pbVar5 | (byte)uVar3;
  param_1 = param_1 + -1;
  if (param_1 == (char *)0x0 || *pbVar5 == 0) {
    uVar1 = (undefined3)(uVar3 >> 8);
    bVar2 = (byte)uVar3 | *pbVar5;
    *unaff_RDI = *unaff_RDI + unaff_ESI;
    bVar2 = bVar2 | *(byte *)(ulonglong)CONCAT31(uVar1,bVar2);
    cVar7 = (char)(uVar3 >> 8);
    *param_1 = *param_1 + cVar7;
    *(char *)(ulonglong)CONCAT31(uVar1,bVar2) = *(char *)(ulonglong)CONCAT31(uVar1,bVar2) + bVar2;
    bVar2 = bVar2 + cVar7;
    bVar2 = bVar2 | *(byte *)(ulonglong)CONCAT31(uVar1,bVar2);
    *unaff_RDI = *unaff_RDI + unaff_ESI;
    *param_1 = *param_1 + (bVar2 | *(byte *)(ulonglong)CONCAT31(uVar1,bVar2));
    pcVar4 = (char *)(param_2 + CONCAT44(unaff_00000034,unaff_ESI) * 2);
    *pcVar4 = *pcVar4 + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

