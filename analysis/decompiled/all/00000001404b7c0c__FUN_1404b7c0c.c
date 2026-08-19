// Function: FUN_1404b7c0c
// Addr: 1404b7c0c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b7c0d) overlaps instruction at (ram,0x0001404b7c0c)
    */
/* WARNING: Removing unreachable block (ram,0x0001404b7bb1) */

void FUN_1404b7c0c(char *param_1,char *param_2,undefined8 param_3,char *param_4)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  byte *pbVar6;
  uint *in_RAX;
  byte bVar7;
  char unaff_BH;
  char unaff_SPL;
  undefined1 *puVar8;
  undefined1 *unaff_RSI;
  byte *unaff_RDI;
  bool bVar9;
  
  bVar7 = (byte)((ulonglong)param_2 >> 8);
  uVar4 = (uint)in_RAX;
  *in_RAX = *in_RAX & uVar4;
  bVar2 = (byte)in_RAX;
  bVar9 = CARRY1((byte)*in_RAX,bVar2);
  uVar3 = *in_RAX;
  *(byte *)in_RAX = (byte)*in_RAX + bVar2;
  if (SCARRY1((byte)uVar3,bVar2)) {
    pbVar6 = (byte *)(ulonglong)(uVar4 + 0x74050002);
    bVar2 = (byte)(uVar4 + 0x74050002);
    *pbVar6 = *pbVar6 | bVar2;
    param_1 = param_1 + -1;
    if (param_1 != (char *)0x0 && *pbVar6 != 0) {
      *param_4 = *param_4 + unaff_SPL;
      *pbVar6 = *pbVar6 + bVar2;
      *unaff_RDI = bVar2;
      uVar4 = (uVar4 + 0x565a3102) - (uint)CARRY1((byte)((ulonglong)param_1 >> 8),bVar2);
      pcVar5 = (char *)(ulonglong)uVar4;
      cVar1 = (char)uVar4;
      pcVar5[0x21004b7a] = pcVar5[0x21004b7a] + cVar1;
      *param_2 = *param_2 + cVar1;
      *pcVar5 = *pcVar5 + cVar1;
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    uVar4 = uVar4 + 0x56574702;
    pcVar5 = (char *)(ulonglong)uVar4;
    pcVar5[0x210049ec] = pcVar5[0x210049ec] + unaff_BH;
    bVar2 = (byte)uVar4;
    *param_2 = *param_2 + bVar2;
    *pcVar5 = *pcVar5 + bVar2;
    puVar8 = unaff_RSI;
    if (*pcVar5 != '\0') {
      puVar8 = unaff_RSI + 1;
      pcVar5 = (char *)(ulonglong)
                       ((CONCAT31((int3)(uVar4 >> 8),*unaff_RSI) + -0x1dadb900) -
                       (uint)CARRY1(bVar2,(byte)(uVar4 >> 8)));
    }
    pcVar5[0x210049ec] = pcVar5[0x210049ec] + unaff_BH;
    *pcVar5 = *pcVar5 + (byte)pcVar5;
    uVar4 = ((int)CONCAT71((int7)((ulonglong)pcVar5 >> 8),*puVar8) + -0x1dadb900) -
            (uint)CARRY1((byte)pcVar5,(byte)((ulonglong)pcVar5 >> 8));
    *(char *)((ulonglong)uVar4 + 0x210049ec) = *(char *)((ulonglong)uVar4 + 0x210049ec) + unaff_BH;
    uVar3 = uVar4 + 0xf4050002;
    *(byte *)(ulonglong)uVar3 = *(byte *)(ulonglong)uVar3 | (byte)uVar3;
    in_RAX = (uint *)(ulonglong)(uVar4 + 0xd6549c02);
    *(byte *)(in_RAX + -0xc) = (byte)in_RAX[-0xc] + unaff_BH;
    *param_1 = *param_1 + unaff_SPL;
    *(byte *)in_RAX = (byte)*in_RAX + (char)(uVar4 + 0xd6549c02);
    pbVar6 = (byte *)((longlong)in_RAX + -0x51);
    bVar9 = CARRY1(*pbVar6,bVar7);
    *pbVar6 = *pbVar6 + bVar7;
  }
  uVar4 = ((int)in_RAX + -0x1db06400) - (uint)bVar9;
  pcVar5 = (char *)((ulonglong)uVar4 - 0x30);
  *pcVar5 = *pcVar5 + unaff_BH;
  *param_1 = *param_1 + (char)uVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

