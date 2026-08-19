// Function: FUN_1404aec60
// Addr: 1404aec60
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404aec82) overlaps instruction at (ram,0x0001404aec81)
    */

void FUN_1404aec60(char *param_1,uint param_2)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar7;
  longlong in_RAX;
  uint *puVar6;
  byte bVar8;
  char unaff_BL;
  byte unaff_BH;
  undefined1 *puVar9;
  longlong unaff_RSI;
  longlong unaff_RDI;
  bool bVar10;
  undefined1 auStack_10 [8];
  undefined1 auStack_8 [8];
  byte *pbVar5;
  
  bVar8 = (byte)param_1;
  *(uint *)(&stack0x00000000 + in_RAX) = *(uint *)(&stack0x00000000 + in_RAX) & param_2;
  (&stack0x00000000)[unaff_RSI * 8] = (&stack0x00000000)[unaff_RSI * 8] + (char)param_2;
  uVar3 = (uint)in_RAX + 0x4f000a54;
  pbVar5 = (byte *)(ulonglong)uVar3;
  if (-1 < (int)uVar3) {
    uVar3 = uVar3 + *(int *)pbVar5 + (uint)(0xb0fff5ab < (uint)in_RAX);
    pbVar5 = (byte *)(ulonglong)uVar3;
    if (-1 < (int)uVar3) goto code_r0x0001404aec86;
    pbVar5[-0x15] = pbVar5[-0x15] + unaff_BH;
  }
  param_1[unaff_RDI * 2 + -0x1487ffed] = param_1[unaff_RDI * 2 + -0x1487ffed] + unaff_BL;
  *param_1 = *param_1;
  *pbVar5 = *pbVar5 + (char)pbVar5;
  pbVar1 = (byte *)(unaff_RDI + 0x79);
  bVar7 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar8;
  uVar3 = (int)pbVar5 + *(int *)pbVar5 + (uint)CARRY1(bVar7,bVar8);
  pbVar5 = (byte *)(ulonglong)uVar3;
  puVar9 = auStack_8;
  if (-1 < (int)uVar3) {
    uVar2 = CONCAT31((int3)(uVar3 >> 8),(byte)uVar3 | *pbVar5);
    puVar6 = (uint *)(ulonglong)uVar2;
    *(byte *)((longlong)puVar6 + (longlong)param_1) =
         *(byte *)((longlong)puVar6 + (longlong)param_1) + (char)(param_2 >> 8);
    bVar7 = (byte)(uVar3 >> 8);
    bVar10 = CARRY1((byte)*puVar6,bVar7);
    *(byte *)puVar6 = (byte)*puVar6 + bVar7;
    if ((char)(byte)*puVar6 < '\0') {
      pbVar5 = (byte *)(unaff_RDI + 0x79);
      bVar7 = *pbVar5;
      *pbVar5 = *pbVar5 + bVar8;
      puVar9 = auStack_10;
      uVar3 = uVar2 + *puVar6 + (uint)CARRY1(bVar7,bVar8) + 0x21004a +
              (uint)(CARRY4(uVar2,*puVar6) || CARRY4(uVar2 + *puVar6,(uint)CARRY1(bVar7,bVar8)));
      puVar6 = (uint *)(ulonglong)uVar3;
      *(byte *)puVar6 = (byte)*puVar6 + (char)uVar3;
      param_1[0x13] = param_1[0x13] & unaff_BH;
      pbVar5 = (byte *)(unaff_RDI + 0x79);
      bVar10 = CARRY1(*pbVar5,bVar8);
      *pbVar5 = *pbVar5 + bVar8;
    }
    uVar3 = *puVar6;
    uVar2 = (uint)puVar6 + *puVar6;
    uVar4 = uVar2 + bVar10;
    *(ulonglong *)(puVar9 + -8) = (ulonglong)uVar4;
    uVar3 = uVar4 + 0x3021004a + (uint)(CARRY4((uint)puVar6,uVar3) || CARRY4(uVar2,(uint)bVar10));
    *(byte *)(ulonglong)uVar3 = *(byte *)(ulonglong)uVar3 | (byte)uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pbVar5[-0x15] = pbVar5[-0x15] + unaff_BH;
  register0x00000020 = (BADSPACEBASE *)auStack_8;
code_r0x0001404aec86:
  *param_1 = *param_1 + (char)register0x00000020;
  *pbVar5 = *pbVar5 + bVar8;
  *pbVar5 = *pbVar5 + (char)pbVar5;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

