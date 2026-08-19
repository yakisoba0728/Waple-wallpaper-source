// Function: FUN_1404bc0f0
// Addr: 1404bc0f0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bc0f0(undefined8 param_1,byte *param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  uint uVar2;
  undefined3 uVar3;
  byte bVar4;
  char cVar5;
  byte bVar6;
  byte *in_RAX;
  undefined7 uVar9;
  char *pcVar7;
  uint *puVar8;
  undefined2 uVar10;
  undefined8 unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_retaddr;
  
  uVar10 = SUB82(param_2,0);
  *in_RAX = *in_RAX + (byte)in_RAX;
  in(uVar10);
  uVar9 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar4 = (byte)in_RAX & *in_RAX;
  uRam000000000021004c = in(uVar10);
  bVar4 = bVar4 & *(byte *)CONCAT71(uVar9,bVar4);
  pcVar7 = (char *)CONCAT71(uVar9,bVar4);
  *pcVar7 = *pcVar7 + bVar4;
  uRam000000000021004b = in(uVar10);
  cVar5 = in(0xbf);
  *param_4 = *param_4 + '\b';
  *(char *)CONCAT71(uVar9,cVar5) = *(char *)CONCAT71(uVar9,cVar5) + cVar5;
  puVar8 = (uint *)CONCAT71(uVar9,cVar5 * '\x02');
  uRam00000001b468c130 = uRam00000001b468c130 & (uint)unaff_retaddr;
  uVar2 = (uint)puVar8 - *puVar8;
  uRamfffffffffffffff8 = unaff_RBP;
  *(uint *)(param_2 + unaff_retaddr) =
       (*(int *)(param_2 + unaff_retaddr) - (int)unaff_RSI) - (uint)((uint)puVar8 < *puVar8);
  pbVar1 = (byte *)((ulonglong)uVar2 * 8 + -0x49e8);
  bVar4 = *pbVar1;
  bVar6 = (byte)uVar2;
  *pbVar1 = *pbVar1 + bVar6;
  uVar3 = (undefined3)(uVar2 >> 8);
  bVar6 = bVar6 - CARRY1(bVar4,bVar6);
  cRam000000000000001a = cRam000000000000001a + (char)((ulonglong)param_1 >> 8);
  *(char *)(unaff_RSI + 0x6d) = *(char *)(unaff_RSI + 0x6d) + (char)param_1;
  bVar6 = bVar6 & *(byte *)(ulonglong)CONCAT31(uVar3,bVar6);
  pcVar7 = (char *)(ulonglong)CONCAT31(uVar3,bVar6);
  *param_4 = *param_4 + '\x18';
  *param_2 = *param_2 | bVar6;
  *pcVar7 = *pcVar7 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

