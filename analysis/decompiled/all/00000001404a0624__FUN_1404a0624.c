// Function: FUN_1404a0624
// Addr: 1404a0624
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a0624(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  char cVar7;
  int *in_RAX;
  undefined7 uVar8;
  char cVar9;
  longlong unaff_RSI;
  int *piVar6;
  
  cVar9 = (char)((ulonglong)param_2 >> 8);
  uVar8 = (undefined7)((ulonglong)param_1 >> 8);
  uVar4 = (int)in_RAX + *in_RAX;
  piVar6 = (int *)(ulonglong)uVar4;
  bRam00000001406b0678 = bRam00000001406b0678 ^ (byte)uVar4;
  *(byte *)piVar6 = (char)*piVar6 + (byte)uVar4;
  *(undefined1 *)(param_2 + 3) = *(undefined1 *)(param_2 + 3);
  uVar4 = uVar4 + *piVar6;
  bVar3 = (byte)uVar4;
  bRam00000001406b0688 = bRam00000001406b0688 ^ bVar3;
  *(byte *)(ulonglong)uVar4 = *(byte *)(ulonglong)uVar4 | bVar3;
  uVar4 = CONCAT22((short)(uVar4 >> 0x10),CONCAT11((char)(uVar4 >> 8) + cVar9,bVar3));
  uVar4 = uVar4 | *(uint *)(ulonglong)uVar4;
  bVar3 = (byte)uVar4;
  cVar7 = (char)(uVar4 >> 8) + bVar3;
  uVar4 = CONCAT22((short)(uVar4 >> 0x10),CONCAT11(cVar7,bVar3));
  uVar4 = CONCAT31((int3)(uVar4 >> 8),bVar3 | *(byte *)(ulonglong)uVar4);
  pcVar2 = (char *)(CONCAT71(uVar8,0x4a) + CONCAT71(uVar8,0x4a));
  *pcVar2 = *pcVar2 + cVar9;
  pcVar2 = (char *)((longlong)(ulonglong)uVar4 + CONCAT71(uVar8,0x4a));
  *pcVar2 = *pcVar2 + cVar7;
  *(undefined1 *)(param_2 + 3) = *(undefined1 *)(param_2 + 3);
  iVar5 = uVar4 + *(int *)(ulonglong)uVar4;
  bRam000000014a4b06a8 = bRam000000014a4b06a8 ^ (byte)iVar5;
  pbVar1 = (byte *)((ulonglong)(iVar5 + 0x6420a00) + unaff_RSI * 2);
  *pbVar1 = *pbVar1 << 3 | *pbVar1 >> 5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

