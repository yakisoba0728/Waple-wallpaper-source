// Function: FUN_1404b7be0
// Addr: 1404b7be0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b7be3) overlaps instruction at (ram,0x0001404b7be0)
    */
/* WARNING: Removing unreachable block (ram,0x0001404b7bb1) */
/* WARNING: Removing unreachable block (ram,0x0001404b7b76) */
/* WARNING: Removing unreachable block (ram,0x0001404b7b8d) */
/* WARNING: Removing unreachable block (ram,0x0001404b7bca) */
/* WARNING: Removing unreachable block (ram,0x0001404b7bdb) */
/* WARNING: Removing unreachable block (ram,0x0001404b7be3) */

void FUN_1404b7be0(undefined8 param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined8 in_RAX;
  undefined7 uVar6;
  byte bVar7;
  char unaff_BH;
  char unaff_SPL;
  undefined1 *unaff_RSI;
  char *pcVar5;
  
  bVar7 = (byte)((ulonglong)param_2 >> 8);
  uVar6 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar2 = in((short)param_2);
  pcVar5 = (char *)CONCAT71(uVar6,bVar2);
  *param_4 = *param_4 + unaff_SPL;
  *pcVar5 = *pcVar5 + bVar2;
  uVar3 = ((int)CONCAT71(uVar6,*unaff_RSI) + -0x1dadb900) -
          (uint)CARRY1(bVar2,(byte)((ulonglong)in_RAX >> 8));
  *(char *)((ulonglong)uVar3 + 0x210049ec) = *(char *)((ulonglong)uVar3 + 0x210049ec) + unaff_BH;
  uVar4 = uVar3 + 0xf4050002;
  *(byte *)(ulonglong)uVar4 = *(byte *)(ulonglong)uVar4 | (byte)uVar4;
  pcVar5 = (char *)(ulonglong)(uVar3 + 0xd6549c02);
  pcVar5[-0x30] = pcVar5[-0x30] + unaff_BH;
  cRam00000000b8001dad = cRam00000000b8001dad + unaff_SPL;
  *pcVar5 = *pcVar5 + (char)(uVar3 + 0xd6549c02);
  pbVar1 = (byte *)(pcVar5 + -0x51);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar7;
  uVar3 = (uVar3 + 0xb8a43802) - (uint)CARRY1(bVar2,bVar7);
  pcVar5 = (char *)((ulonglong)uVar3 - 0x30);
  *pcVar5 = *pcVar5 + unaff_BH;
  cRam00000000b8001dad = cRam00000000b8001dad + (char)uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

