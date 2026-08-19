// Function: FUN_1404c1938
// Addr: 1404c1938
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c1938(uint *param_1,byte *param_2,char param_3,char param_4)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  code *pcVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  char *in_RAX;
  byte *pbVar9;
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
  char unaff_R14B;
  char unaff_R15B;
  bool in_CF;
  bool bVar17;
  undefined8 uStack_10;
  char *pcStack_8;
  char *pcVar10;
  
  uVar15 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar14 = (byte)param_2;
  bVar13 = (byte)param_1;
  if (!in_CF) {
    *(char *)(param_1 + 6) = (char)param_1[6] + unaff_R15B;
    in_RAX[4] = in_RAX[4] + unaff_R14B;
    *(byte *)CONCAT44(unaff_00000034,unaff_ESI) =
         *(byte *)CONCAT44(unaff_00000034,unaff_ESI) | bVar13;
    *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) << 1;
    *param_2 = *param_2 + bVar13;
    bVar2 = *param_2;
    bVar5 = (byte)in_RAX;
    *param_2 = *param_2 + bVar5;
    in_RAX = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),
                              (((bVar5 - *param_2) - CARRY1(bVar2,bVar5)) -
                              *(char *)(CONCAT44(unaff_00000034,unaff_ESI) + (longlong)param_1 * 4))
                              - (bVar5 < *param_2 || (byte)(bVar5 - *param_2) < CARRY1(bVar2,bVar5))
                             );
    unaff_BL = unaff_BL + *(char *)CONCAT44(unaff_00000034,unaff_ESI);
  }
  cVar16 = unaff_BL + (char)*param_1;
  *param_1 = *param_1 | (uint)in_RAX;
  *(byte *)param_1 = (char)*param_1 + bVar13;
  *in_RAX = *in_RAX + (char)in_RAX;
  cVar6 = (char)&pcStack_8;
  pcStack_8 = in_RAX;
  pbVar9 = (byte *)(in_RAX + CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,cVar16)) + -0x62b7ffb4);
  bVar2 = *pbVar9;
  *pbVar9 = *pbVar9 + bVar14;
  pbVar9 = (byte *)((longlong)in_RAX * 2 + -0x18);
  bVar5 = *pbVar9;
  bVar3 = *pbVar9;
  *pbVar9 = (bVar3 - bVar13) - CARRY1(bVar2,bVar14);
  uVar7 = (uint)in_RAX + 0xe04004c +
          (uint)(bVar5 < bVar13 || (byte)(bVar3 - bVar13) < CARRY1(bVar2,bVar14));
  if ((char *)((longlong)param_1 + -1) != (char *)0x0 && uVar7 != 0) {
    uVar7 = CONCAT31((int3)(uVar7 >> 8),(byte)uVar7 + unaff_R13B) + 0xe04004c +
            (uint)CARRY1((byte)uVar7,unaff_R13B);
    pcVar11 = (char *)((longlong)param_1 + -2);
    if (pcVar11 != (char *)0x0 && uVar7 != 0) {
      *(char *)CONCAT44(unaff_00000034,unaff_ESI) =
           *(char *)CONCAT44(unaff_00000034,unaff_ESI) + param_3;
      uVar8 = 0x3e700028;
      puVar12 = (uint *)((longlong)param_1 + -3);
      if (puVar12 == (uint *)0x0 || (byte)((byte)uVar7 | 0x50) == 0) {
        pcVar11 = (char *)(CONCAT44(unaff_00000034,unaff_ESI) + 0x30);
        *pcVar11 = *pcVar11 + (char)&pcStack_8;
        uVar7 = *(uint *)CONCAT62(uVar15,CONCAT11(0x2b,bVar14)) & 0x3e700028;
        pbVar9 = (byte *)(ulonglong)uVar7;
        *pbVar9 = *pbVar9 | (byte)uVar7;
        *pbVar9 = *pbVar9 + unaff_BH;
        cVar16 = cVar16 + *(byte *)((longlong)&pcStack_8 + (longlong)pbVar9);
        puVar12 = param_1 + -1;
        *(byte *)puVar12 = (char)*puVar12 + bVar14;
        cVar6 = (byte)uVar7 + 1;
        uVar8 = CONCAT31((int3)(uVar7 >> 8),cVar6);
        pcVar10 = (char *)(ulonglong)uVar8;
        pcVar11 = (char *)(CONCAT62(uVar15,CONCAT11(0x2b,bVar14)) + (longlong)pcVar10 * 2);
        *pcVar11 = *pcVar11 + cVar6;
        *pcVar10 = *pcVar10 + cVar6;
        cVar6 = (char)&uStack_10;
        pcVar11 = (char *)((longlong)puVar12 + CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,cVar16)));
        *pcVar11 = *pcVar11 + cVar16;
        *pcVar10 = *pcVar10 + param_4;
      }
      piVar1 = (int *)((ulonglong)(uVar8 & 0x2004c19) * 2 + 6);
      *piVar1 = *piVar1 - (int)puVar12;
      pcVar11 = (char *)(CONCAT44(unaff_00000034,unaff_ESI) + 0x20);
      *pcVar11 = *pcVar11 + cVar6;
      uVar7 = *(uint *)CONCAT62(uVar15,CONCAT11(0x2b,bVar14)) & 0x3e700022;
      *(char *)(ulonglong)uVar7 = *(char *)(ulonglong)uVar7 + (char)uVar7;
      iRam00000000c2591a15 = iRam00000000c2591a15 + (int)puVar12;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pcVar10 = (char *)((ulonglong)uVar7 + in_R10 * 2);
    *pcVar10 = *pcVar10 + (char)unaff_ESI;
    bVar17 = 0xd7 < bRam0000000000800028;
    bRam0000000000800028 = bRam0000000000800028 + 0x28;
    *(int *)((longlong)param_1 + 0x800026) =
         *(int *)((longlong)param_1 + 0x800026) + 0x800028 + (uint)bVar17;
    pcVar10 = (char *)(CONCAT62(uVar15,CONCAT11(0x2b,bVar14)) + 0x1000050);
    *pcVar10 = *pcVar10 + '(';
    bRam0000000000800028 = bRam0000000000800028 + '(';
    uStack_10 = 0x800028;
    bVar13 = (byte)((ulonglong)pcVar11 >> 8);
    pcVar10 = (char *)(CONCAT71(0x8000,bVar13 + 0x28) * 2 + 8);
    *pcVar10 = (*pcVar10 - (char)pcVar11) - (0xd7 < bVar13);
    pcVar4 = (code *)swi(1);
    (*pcVar4)();
    return;
  }
  pcVar11 = (char *)((ulonglong)uVar7 + in_R10 * 2);
  *pcVar11 = *pcVar11 + (char)unaff_ESI;
  bVar17 = 0xd7 < bRam0000000000700028;
  bRam0000000000700028 = bRam0000000000700028 + 0x28;
  *unaff_RDI = (*unaff_RDI - (int)(char *)((longlong)param_1 + -1)) - (uint)bVar17;
  sysenter();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

