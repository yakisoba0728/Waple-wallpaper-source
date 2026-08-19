// Function: FUN_1404a5be8
// Addr: 1404a5be8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a5bfd) overlaps instruction at (ram,0x0001404a5bfc)
    */

void FUN_1404a5be8(byte *param_1,byte *param_2)

{
  char *pcVar1;
  byte bVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  byte bVar9;
  ulonglong in_RAX;
  uint *puVar7;
  byte *pbVar8;
  undefined7 uVar10;
  byte bVar11;
  byte bVar12;
  uint unaff_EBX;
  undefined4 unaff_0000001c;
  char unaff_SPL;
  int unaff_EBP;
  undefined1 *unaff_RSI;
  byte in_CF;
  
  bVar12 = (byte)((ulonglong)param_2 >> 8);
  bVar11 = (byte)param_2;
  iVar3 = *(int *)(in_RAX + 6);
  *param_1 = *param_1 + bVar11;
  puVar7 = (uint *)(in_RAX ^ 0x15);
  bVar6 = *param_1;
  *param_1 = *param_1 + bVar11;
  bVar2 = *param_1;
  bVar9 = (byte)param_1 & 7;
  *param_2 = *param_2 >> bVar9 | *param_2 << 8 - bVar9;
  bVar4 = ((ulonglong)param_1 & 0x1f) != 0;
  param_1 = param_1 + -1;
  if (param_1 == (byte *)0x0 || bVar2 == 0) {
    *unaff_RSI = *unaff_RSI;
    *puVar7 = *puVar7 & (uint)param_1;
    param_2[CONCAT44(unaff_0000001c,unaff_EBX)] =
         param_2[CONCAT44(unaff_0000001c,unaff_EBX)] | bVar12;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar9 = (byte)(in_RAX >> 8);
  if (bVar2 != 0) {
    *(byte *)(puVar7 + -0x19) = (byte)puVar7[-0x19] + bVar9;
    *(byte *)puVar7 = (byte)*puVar7 | (byte)puVar7;
    pbVar8 = (byte *)((ulonglong)puVar7 | 0x9d);
    *pbVar8 = *pbVar8 | (byte)pbVar8;
    *param_1 = *param_1 + unaff_SPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar5 = (byte)puVar7 + (byte)*puVar7 +
          (!bVar4 && CARRY1(bVar6,bVar11) || bVar4 && (char)*param_2 < '\0');
  bVar9 = bVar9 | bVar12;
  uVar10 = (undefined7)(CONCAT62((int6)(in_RAX >> 0x10),CONCAT11(bVar9,cVar5)) >> 8);
  pbVar8 = (byte *)(CONCAT71(uVar10,cVar5) | 0x9d);
  bVar6 = (byte)pbVar8;
  *pbVar8 = *pbVar8 | bVar6;
  puVar7 = (uint *)((ulonglong)((unaff_EBP - iVar3) - (uint)in_CF) + 0x5b280008);
  *puVar7 = *puVar7 & unaff_EBX;
  *param_1 = *param_1 + unaff_SPL;
  *pbVar8 = *pbVar8 + bVar6;
  pcVar1 = (char *)(CONCAT44(unaff_0000001c,unaff_EBX) * 4 + -0x62defff8);
  *pcVar1 = *pcVar1 + (char)param_1;
  *pbVar8 = *pbVar8 | bVar6;
  pcVar1 = (char *)(CONCAT44(unaff_0000001c,unaff_EBX) + 0x4a);
  *pcVar1 = *pcVar1 - (char)unaff_EBX;
  *param_1 = *param_1 + bVar9;
  *pbVar8 = *pbVar8 + bVar6;
  pbVar8[-100] = pbVar8[-100] + bVar9;
  *pbVar8 = *pbVar8 | bVar6;
  pbVar8 = (byte *)(CONCAT71(uVar10,bVar6) | 0x9d);
  *pbVar8 = *pbVar8 | (byte)pbVar8;
  *param_1 = *param_1 + (byte)pbVar8 + 0x5b;
  *(char *)CONCAT44(unaff_0000001c,unaff_EBX) =
       *(char *)CONCAT44(unaff_0000001c,unaff_EBX) + (char)unaff_EBX;
  iRam000000014e0a6b4f = iRam000000014e0a6b4f + (int)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

