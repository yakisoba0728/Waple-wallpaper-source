// Function: FUN_1404b1394
// Addr: 1404b1394
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b1395) overlaps instruction at (ram,0x0001404b1394)
    */

void FUN_1404b1394(byte *param_1,undefined8 param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte bVar7;
  char *pcVar5;
  uint *in_RAX;
  byte *pbVar6;
  byte bVar8;
  char cVar9;
  char unaff_SPL;
  undefined7 unaff_00000021;
  longlong unaff_RSI;
  
  cVar9 = (char)((ulonglong)param_2 >> 8);
  bVar8 = (byte)param_2;
  while( true ) {
    uVar3 = (uint)in_RAX;
    uRam00000001a450139c = uRam00000001a450139c & uVar3;
    *in_RAX = *in_RAX | uVar3;
    if ((POPCOUNT(*in_RAX & 0xff) & 1U) == 0) break;
    *(byte *)((longlong)in_RAX + (longlong)param_1) =
         *(byte *)((longlong)in_RAX + (longlong)param_1) + (char)((ulonglong)in_RAX >> 8);
    pbVar6 = param_1 + unaff_RSI;
    bVar1 = *pbVar6;
    *pbVar6 = *pbVar6 + bVar8;
    uVar3 = uVar3 + 0x4a0b0800 + (uint)CARRY1(bVar1,bVar8);
    pcVar5 = (char *)(ulonglong)uVar3;
    *param_1 = *param_1 + (char)(uVar3 >> 8);
    *pcVar5 = *pcVar5 + (char)uVar3;
    pcVar5[-0x3cffea45] = pcVar5[-0x3cffea45] + bVar8;
    *param_1 = *param_1 + unaff_SPL;
    uVar2 = uVar3 + 0x54050002;
    *(byte *)(ulonglong)uVar2 = *(byte *)(ulonglong)uVar2 | (byte)uVar2;
    *(undefined1 *)(unaff_RSI + -0x4184ffeb) = *(undefined1 *)(unaff_RSI + -0x4184ffeb);
    *param_1 = *param_1 + (char)(uVar3 + 0x9defb002 >> 8);
    in_RAX = (uint *)(ulonglong)(uVar3 + 0x1f4b004);
  }
  pcVar5 = (char *)((ulonglong)(uVar3 + 0x15be8400) + 0x21004b12);
  *pcVar5 = *pcVar5 + cVar9;
  uVar3 = uVar3 + 0x9c38402;
  iVar4 = CONCAT31((int3)(uVar3 >> 8),(byte)uVar3 | *(byte *)(ulonglong)uVar3) + 0x4b12c400;
  bVar1 = *param_1;
  bVar7 = (byte)((uint)iVar4 >> 8);
  *param_1 = *param_1 + bVar7;
  uVar3 = CONCAT31((int3)((uint)iVar4 >> 8),(char)iVar4 + '\x06' + CARRY1(bVar1,bVar7));
  pcVar5 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + unaff_RSI * 2);
  *pcVar5 = *pcVar5 + bVar8;
  uVar3 = uVar3 | *(uint *)(ulonglong)uVar3;
  pbVar6 = (byte *)(ulonglong)uVar3;
  param_1[0x8e40400] = param_1[0x8e40400] + cVar9;
  bVar1 = *pbVar6;
  *pbVar6 = *pbVar6 + bVar8;
  iVar4 = uVar3 + 0x49e56400 + (uint)CARRY1(bVar1,bVar8);
  *param_1 = *param_1 + (char)((uint)iVar4 >> 8);
  pcVar5 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + unaff_RSI * 8);
  *pcVar5 = *pcVar5 + (char)iVar4 + '\x02';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

