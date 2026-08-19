// Function: FUN_1404bc0dc
// Addr: 1404bc0dc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bc0dc(uint param_1,uint *param_2,undefined8 param_3,char *param_4)

{
  undefined1 uVar1;
  undefined3 uVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  uint *in_RAX;
  byte *pbVar8;
  char *pcVar9;
  undefined2 uVar10;
  undefined8 unaff_RBP;
  longlong unaff_RSI;
  undefined1 *unaff_RDI;
  longlong lStackX_8;
  
  uVar10 = SUB82(param_2,0);
  *param_2 = *param_2 & param_1;
  *in_RAX = *in_RAX | (uint)in_RAX;
  uVar7 = (uint)in_RAX + 0x46000874;
  uVar1 = in(uVar10);
  *unaff_RDI = uVar1;
  uVar2 = (undefined3)(uVar7 >> 8);
  bVar4 = (byte)uVar7 & *(byte *)(ulonglong)uVar7;
  uVar1 = in(uVar10);
  unaff_RDI[1] = uVar1;
  bVar4 = bVar4 & *(byte *)(ulonglong)CONCAT31(uVar2,bVar4);
  pbVar8 = (byte *)(ulonglong)CONCAT31(uVar2,bVar4);
  *pbVar8 = *pbVar8 + bVar4;
  in(uVar10);
  uRam000000000021004c = in(uVar10);
  bVar4 = bVar4 & *pbVar8 & *(byte *)(ulonglong)CONCAT31(uVar2,bVar4 & *pbVar8);
  pcVar9 = (char *)(ulonglong)CONCAT31(uVar2,bVar4);
  *pcVar9 = *pcVar9 + bVar4;
  uRam000000000021004b = in(uVar10);
  cVar5 = in(0xbf);
  *param_4 = *param_4 + '\x10';
  *(char *)(ulonglong)CONCAT31(uVar2,cVar5) = *(char *)(ulonglong)CONCAT31(uVar2,cVar5) + cVar5;
  uVar3 = CONCAT31(uVar2,cVar5 * '\x02');
  uRam00000001b468c130 = uRam00000001b468c130 & (uint)lStackX_8;
  uVar7 = uVar3 - *(uint *)(ulonglong)uVar3;
  uRamfffffffffffffff8 = unaff_RBP;
  *(uint *)((longlong)param_2 + lStackX_8) =
       (*(int *)((longlong)param_2 + lStackX_8) - (int)unaff_RSI) -
       (uint)(uVar3 < *(uint *)(ulonglong)uVar3);
  pbVar8 = (byte *)((ulonglong)uVar7 * 8 + -0x49e8);
  bVar4 = *pbVar8;
  bVar6 = (byte)uVar7;
  *pbVar8 = *pbVar8 + bVar6;
  uVar2 = (undefined3)(uVar7 >> 8);
  bVar6 = bVar6 - CARRY1(bVar4,bVar6);
  cRam000000000000001a = cRam000000000000001a + (char)(param_1 >> 8);
  *(char *)(unaff_RSI + 0x6d) = *(char *)(unaff_RSI + 0x6d) + (char)param_1;
  bVar6 = bVar6 & *(byte *)(ulonglong)CONCAT31(uVar2,bVar6);
  pcVar9 = (char *)(ulonglong)CONCAT31(uVar2,bVar6);
  *param_4 = *param_4 + '\x18';
  *(byte *)param_2 = (byte)*param_2 | bVar6;
  *pcVar9 = *pcVar9 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

