// Function: FUN_1404bc104
// Addr: 1404bc104
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bc104(undefined8 param_1,byte *param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  byte bVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined3 uVar5;
  undefined7 uVar6;
  uint *puVar7;
  char cVar8;
  byte bVar9;
  uint *in_RAX;
  char *pcVar10;
  uint unaff_EBX;
  undefined4 unaff_0000001c;
  undefined8 unaff_RBP;
  longlong unaff_RSI;
  undefined1 *unaff_RDI;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  uVar3 = in((short)param_2);
  *unaff_RDI = uVar3;
  uVar6 = (undefined7)((ulonglong)in_RAX >> 8);
  cVar8 = in(0xbf);
  pcVar10 = (char *)CONCAT71(uVar6,cVar8);
  *param_4 = *param_4;
  *pcVar10 = *pcVar10 + cVar8;
  puVar7 = (uint *)CONCAT71(uVar6,cVar8 * '\x02');
  uRam00000001b468c130 = uRam00000001b468c130 & unaff_EBX;
  uVar4 = (uint)puVar7 - *puVar7;
  uRamfffffffffffffff8 = unaff_RBP;
  *(uint *)(param_2 + CONCAT44(unaff_0000001c,unaff_EBX)) =
       (*(int *)(param_2 + CONCAT44(unaff_0000001c,unaff_EBX)) - (int)unaff_RSI) -
       (uint)((uint)puVar7 < *puVar7);
  pbVar1 = (byte *)((ulonglong)uVar4 * 8 + -0x49e8);
  bVar2 = *pbVar1;
  bVar9 = (byte)uVar4;
  *pbVar1 = *pbVar1 + bVar9;
  uVar5 = (undefined3)(uVar4 >> 8);
  bVar9 = bVar9 - CARRY1(bVar2,bVar9);
  cRam000000000000001a = cRam000000000000001a + (char)((ulonglong)param_1 >> 8);
  *(char *)(unaff_RSI + 0x6d) = *(char *)(unaff_RSI + 0x6d) + (char)param_1;
  bVar9 = bVar9 & *(byte *)(ulonglong)CONCAT31(uVar5,bVar9);
  pcVar10 = (char *)(ulonglong)CONCAT31(uVar5,bVar9);
  *param_4 = *param_4 + '\x18';
  *param_2 = *param_2 | bVar9;
  *pcVar10 = *pcVar10 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

