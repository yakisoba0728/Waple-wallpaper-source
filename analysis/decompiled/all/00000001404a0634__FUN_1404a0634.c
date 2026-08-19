// Function: FUN_1404a0634
// Addr: 1404a0634
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a0634(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  int *in_RAX;
  undefined7 uVar7;
  char cVar8;
  longlong unaff_RSI;
  
  cVar8 = (char)((ulonglong)param_2 >> 8);
  uVar7 = (undefined7)((ulonglong)param_1 >> 8);
  uVar4 = (int)in_RAX + *in_RAX;
  bVar3 = (byte)uVar4;
  bRam00000001406b0688 = bRam00000001406b0688 ^ bVar3;
  *(byte *)(ulonglong)uVar4 = *(byte *)(ulonglong)uVar4 | bVar3;
  uVar4 = CONCAT22((short)(uVar4 >> 0x10),CONCAT11((char)(uVar4 >> 8) + cVar8,bVar3));
  uVar4 = uVar4 | *(uint *)(ulonglong)uVar4;
  bVar3 = (byte)uVar4;
  cVar6 = (char)(uVar4 >> 8) + bVar3;
  uVar4 = CONCAT22((short)(uVar4 >> 0x10),CONCAT11(cVar6,bVar3));
  uVar4 = CONCAT31((int3)(uVar4 >> 8),bVar3 | *(byte *)(ulonglong)uVar4);
  pcVar2 = (char *)(CONCAT71(uVar7,0x4a) + CONCAT71(uVar7,0x4a));
  *pcVar2 = *pcVar2 + cVar8;
  pcVar2 = (char *)((longlong)(ulonglong)uVar4 + CONCAT71(uVar7,0x4a));
  *pcVar2 = *pcVar2 + cVar6;
  *(undefined1 *)(param_2 + 3) = *(undefined1 *)(param_2 + 3);
  iVar5 = uVar4 + *(int *)(ulonglong)uVar4;
  bRam000000014a4b06a8 = bRam000000014a4b06a8 ^ (byte)iVar5;
  pbVar1 = (byte *)((ulonglong)(iVar5 + 0x6420a00) + unaff_RSI * 2);
  *pbVar1 = *pbVar1 << 3 | *pbVar1 >> 5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

