// Function: FUN_1404c194c
// Addr: 1404c194c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c194c(uint *param_1,byte *param_2,char param_3,char param_4)

{
  int *piVar1;
  byte bVar2;
  code *pcVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  undefined8 in_RAX;
  byte *pbVar8;
  char *pcVar9;
  byte bVar10;
  byte bVar13;
  char *pcVar11;
  uint *puVar12;
  byte bVar14;
  undefined6 uVar15;
  char unaff_BL;
  char cVar16;
  char unaff_BH;
  undefined6 unaff_0000001a;
  undefined4 unaff_ESI;
  undefined4 unaff_00000034;
  int *unaff_RDI;
  longlong in_R10;
  byte unaff_R13B;
  byte in_CF;
  bool bVar17;
  undefined8 uStack_10;
  char *pcStack_8;
  byte bVar3;
  
  uVar15 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar14 = (byte)param_2;
  bVar13 = (byte)in_RAX - *param_2;
  cVar5 = ((bVar13 - in_CF) - *(char *)(CONCAT44(unaff_00000034,unaff_ESI) + (longlong)param_1 * 4))
          - ((byte)in_RAX < *param_2 || bVar13 < in_CF);
  pcStack_8 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar5);
  cVar16 = unaff_BL + *(char *)CONCAT44(unaff_00000034,unaff_ESI) + (char)*param_1;
  *param_1 = *param_1 | (uint)pcStack_8;
  bVar10 = (byte)param_1;
  *(byte *)param_1 = (char)*param_1 + bVar10;
  *pcStack_8 = *pcStack_8 + cVar5;
  cVar5 = (char)&pcStack_8;
  pbVar8 = (byte *)(pcStack_8 + CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,cVar16)) + -0x62b7ffb4);
  bVar13 = *pbVar8;
  *pbVar8 = *pbVar8 + bVar14;
  pbVar8 = (byte *)((longlong)pcStack_8 * 2 + -0x18);
  bVar2 = *pbVar8;
  bVar3 = *pbVar8;
  *pbVar8 = (bVar3 - bVar10) - CARRY1(bVar13,bVar14);
  uVar6 = (uint)pcStack_8 + 0xe04004c +
          (uint)(bVar2 < bVar10 || (byte)(bVar3 - bVar10) < CARRY1(bVar13,bVar14));
  if ((char *)((longlong)param_1 + -1) == (char *)0x0 || uVar6 == 0) {
    pcVar11 = (char *)((ulonglong)uVar6 + in_R10 * 2);
    *pcVar11 = *pcVar11 + (char)unaff_ESI;
    bVar17 = 0xd7 < bRam0000000000700028;
    bRam0000000000700028 = bRam0000000000700028 + 0x28;
    *unaff_RDI = (*unaff_RDI - (int)(char *)((longlong)param_1 + -1)) - (uint)bVar17;
    sysenter();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar6 = CONCAT31((int3)(uVar6 >> 8),(byte)uVar6 + unaff_R13B) + 0xe04004c +
          (uint)CARRY1((byte)uVar6,unaff_R13B);
  pcVar11 = (char *)((longlong)param_1 + -2);
  if (pcVar11 != (char *)0x0 && uVar6 != 0) {
    *(char *)CONCAT44(unaff_00000034,unaff_ESI) =
         *(char *)CONCAT44(unaff_00000034,unaff_ESI) + param_3;
    uVar7 = 0x3e700028;
    puVar12 = (uint *)((longlong)param_1 + -3);
    if (puVar12 == (uint *)0x0 || (byte)((byte)uVar6 | 0x50) == 0) {
      pcVar11 = (char *)(CONCAT44(unaff_00000034,unaff_ESI) + 0x30);
      *pcVar11 = *pcVar11 + (char)&pcStack_8;
      uVar6 = *(uint *)CONCAT62(uVar15,CONCAT11(0x2b,bVar14)) & 0x3e700028;
      pbVar8 = (byte *)(ulonglong)uVar6;
      *pbVar8 = *pbVar8 | (byte)uVar6;
      *pbVar8 = *pbVar8 + unaff_BH;
      cVar16 = cVar16 + *(byte *)((longlong)&pcStack_8 + (longlong)pbVar8);
      puVar12 = param_1 + -1;
      *(byte *)puVar12 = (char)*puVar12 + bVar14;
      cVar5 = (byte)uVar6 + 1;
      uVar7 = CONCAT31((int3)(uVar6 >> 8),cVar5);
      pcVar9 = (char *)(ulonglong)uVar7;
      pcVar11 = (char *)(CONCAT62(uVar15,CONCAT11(0x2b,bVar14)) + (longlong)pcVar9 * 2);
      *pcVar11 = *pcVar11 + cVar5;
      *pcVar9 = *pcVar9 + cVar5;
      cVar5 = (char)&uStack_10;
      pcVar11 = (char *)((longlong)puVar12 + CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,cVar16)));
      *pcVar11 = *pcVar11 + cVar16;
      *pcVar9 = *pcVar9 + param_4;
    }
    piVar1 = (int *)((ulonglong)(uVar7 & 0x2004c19) * 2 + 6);
    *piVar1 = *piVar1 - (int)puVar12;
    pcVar11 = (char *)(CONCAT44(unaff_00000034,unaff_ESI) + 0x20);
    *pcVar11 = *pcVar11 + cVar5;
    uVar6 = *(uint *)CONCAT62(uVar15,CONCAT11(0x2b,bVar14)) & 0x3e700022;
    *(char *)(ulonglong)uVar6 = *(char *)(ulonglong)uVar6 + (char)uVar6;
    iRam00000000c2591a15 = iRam00000000c2591a15 + (int)puVar12;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar9 = (char *)((ulonglong)uVar6 + in_R10 * 2);
  *pcVar9 = *pcVar9 + (char)unaff_ESI;
  bVar17 = 0xd7 < bRam0000000000800028;
  bRam0000000000800028 = bRam0000000000800028 + 0x28;
  *(int *)((longlong)param_1 + 0x800026) =
       *(int *)((longlong)param_1 + 0x800026) + 0x800028 + (uint)bVar17;
  pcVar9 = (char *)(CONCAT62(uVar15,CONCAT11(0x2b,bVar14)) + 0x1000050);
  *pcVar9 = *pcVar9 + '(';
  bRam0000000000800028 = bRam0000000000800028 + '(';
  uStack_10 = 0x800028;
  bVar13 = (byte)((ulonglong)pcVar11 >> 8);
  pcVar9 = (char *)(CONCAT71(0x8000,bVar13 + 0x28) * 2 + 8);
  *pcVar9 = (*pcVar9 - (char)pcVar11) - (0xd7 < bVar13);
  pcVar4 = (code *)swi(1);
  (*pcVar4)();
  return;
}

