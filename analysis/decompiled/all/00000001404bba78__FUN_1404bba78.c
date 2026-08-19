// Function: FUN_1404bba78
// Addr: 1404bba78
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404bba44) overlaps instruction at (ram,0x0001404bba43)
    */

void FUN_1404bba78(longlong param_1,char *param_2,undefined8 param_3,byte *param_4)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  undefined1 uVar5;
  uint *puVar6;
  char *in_RAX;
  undefined7 uVar7;
  char cVar8;
  char unaff_BL;
  undefined7 unaff_00000019;
  char unaff_SPL;
  undefined7 unaff_00000021;
  longlong unaff_RSI;
  ulonglong uVar9;
  ulonglong unaff_RDI;
  bool in_SF;
  
  cVar4 = (char)in_RAX;
  if (in_SF) {
    pcVar1 = (char *)(param_1 + unaff_RDI * 4);
    cVar8 = (char)((ulonglong)param_2 >> 8);
    *pcVar1 = *pcVar1 + cVar8;
    *param_4 = *param_4 + unaff_SPL;
    *in_RAX = *in_RAX + cVar4;
    in_RAX[-0x2effde69] = in_RAX[-0x2effde69] + cVar8;
    puVar6 = (uint *)(unaff_RDI & 0xffffffff);
    uVar9 = (ulonglong)in_RAX & 0xffffffff;
    *puVar6 = *puVar6 & (uint)unaff_RDI;
    puVar6 = (uint *)(ulonglong)(byte)((byte)puVar6 ^ 0xb9);
  }
  else {
    *param_4 = *param_4 + unaff_SPL;
    *in_RAX = *in_RAX + cVar4;
    uVar7 = (undefined7)((ulonglong)in_RAX >> 8);
    puVar6 = (uint *)CONCAT71(uVar7,cVar4 * '\x02');
    *puVar6 = *puVar6 & (uint)puVar6;
    uVar5 = in((short)((ulonglong)in_RAX >> 0x10) >> 0xf);
    puVar6 = (uint *)CONCAT71(uVar7,uVar5);
    param_2 = (char *)(ulonglong)(uint)((int)(uint)puVar6 >> 0x1f);
    *puVar6 = *puVar6 & (uint)puVar6;
    uVar9 = unaff_RDI;
    if (-1 < (int)*puVar6) {
      *param_4 = *param_4 + unaff_SPL;
      pcVar1 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + unaff_RSI * 8);
      *pcVar1 = *pcVar1 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  pcVar1 = (char *)(param_1 + uVar9 * 4);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
  bVar2 = *param_4;
  bVar3 = (byte)puVar6;
  *param_4 = *param_4 + bVar3;
  cVar4 = *(char *)CONCAT71(unaff_00000019,unaff_BL);
  *param_2 = *param_2 + (char)param_2;
  cRam1f210000300cd00e = bVar3 + cVar4 + CARRY1(bVar2,bVar3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

