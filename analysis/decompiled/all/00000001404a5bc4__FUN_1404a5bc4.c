// Function: FUN_1404a5bc4
// Addr: 1404a5bc4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a5bfd) overlaps instruction at (ram,0x0001404a5bfc)
    */

void FUN_1404a5bc4(byte *param_1,byte *param_2)

{
  char *pcVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  short in_AX;
  short sVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar11;
  char *pcVar12;
  byte bVar13;
  byte bVar14;
  uint unaff_EBX;
  undefined4 unaff_0000001c;
  longlong unaff_RBP;
  undefined1 *unaff_RSI;
  uint *puVar10;
  
  bVar13 = (byte)((ulonglong)param_2 >> 8);
  sVar7 = in_AX + 0xa34;
  bVar5 = (byte)sVar7;
  *(byte *)(ulonglong)(uint)(int)sVar7 = *(byte *)(ulonglong)(uint)(int)sVar7 | bVar5;
  pbVar11 = (byte *)(ulonglong)(uint)(int)sVar7;
  *pbVar11 = *pbVar11 | bVar5;
  *param_2 = *param_2 & bVar5;
  *param_1 = *param_1 - 8;
  *pbVar11 = *pbVar11 + bVar5;
  *pbVar11 = *pbVar11 + bVar13;
  *(byte *)(ulonglong)(uint)(int)sVar7 = *(byte *)(ulonglong)(uint)(int)sVar7 | bVar5;
  uVar8 = (uint)sVar7;
  pbVar11 = (byte *)(ulonglong)uVar8;
  *pbVar11 = *pbVar11 | bVar5;
  *param_2 = *param_2 & bVar5;
  bVar6 = *param_1;
  *param_1 = *param_1 + bVar5;
  iVar3 = *(int *)pbVar11;
  bVar2 = *(byte *)CONCAT44(unaff_0000001c,unaff_EBX);
  bVar14 = (byte)unaff_EBX;
  *(byte *)CONCAT44(unaff_0000001c,unaff_EBX) = *(char *)CONCAT44(unaff_0000001c,unaff_EBX) + bVar14
  ;
  uVar4 = (uint)CARRY1(bVar2,bVar14);
  uVar9 = uVar8 + 0xad21100 + uVar4;
  puVar10 = (uint *)(ulonglong)uVar9;
  pcVar12 = (char *)((ulonglong)(((int)param_1 - iVar3) - (uint)CARRY1(bVar6,bVar5)) - 1);
  if (pcVar12 == (char *)0x0 || uVar9 == 0) {
    *unaff_RSI = *unaff_RSI;
    *puVar10 = *puVar10 & (uint)pcVar12;
    param_2[CONCAT44(unaff_0000001c,unaff_EBX)] =
         param_2[CONCAT44(unaff_0000001c,unaff_EBX)] | bVar13;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (uVar9 != 0) {
    *(byte *)(puVar10 + -0x19) = (byte)puVar10[-0x19] + (char)(uVar9 >> 8);
    *(byte *)puVar10 = (byte)*puVar10 | (byte)uVar9;
    pbVar11 = (byte *)((ulonglong)uVar9 | 0x9d);
    *pbVar11 = *pbVar11 | (byte)pbVar11;
    *pcVar12 = *pcVar12 + -0x18;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pbVar11 = (byte *)((ulonglong)
                     CONCAT11(bVar13,cRam0000000000000000 +
                                     (0xf52deeff < uVar8 || CARRY4(uVar8 + 0xad21100,uVar4))) | 0x9d
                    );
  bVar6 = (byte)pbVar11;
  *pbVar11 = *pbVar11 | bVar6;
  *(uint *)(unaff_RBP + 0x5b280008) = *(uint *)(unaff_RBP + 0x5b280008) & unaff_EBX;
  *pcVar12 = *pcVar12 + -0x18;
  *pbVar11 = *pbVar11 + bVar6;
  pcVar1 = (char *)(CONCAT44(unaff_0000001c,unaff_EBX) * 4 + -0x62defff8);
  *pcVar1 = *pcVar1 + (char)pcVar12;
  *pbVar11 = *pbVar11 | bVar6;
  pcVar1 = (char *)(CONCAT44(unaff_0000001c,unaff_EBX) + 0x4a);
  *pcVar1 = *pcVar1 - bVar14;
  *pcVar12 = *pcVar12 + bVar13;
  *pbVar11 = *pbVar11 + bVar6;
  pbVar11[-100] = pbVar11[-100] + bVar13;
  *pbVar11 = *pbVar11 | bVar6;
  pbVar11 = (byte *)((ulonglong)CONCAT11(bVar13,bVar6) | 0x9d);
  *pbVar11 = *pbVar11 | (byte)pbVar11;
  *pcVar12 = *pcVar12 + (byte)pbVar11 + 0x5b;
  *(byte *)CONCAT44(unaff_0000001c,unaff_EBX) = *(char *)CONCAT44(unaff_0000001c,unaff_EBX) + bVar14
  ;
  iRam000000014e0a6b4f = iRam000000014e0a6b4f + (int)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

