// Function: FUN_1404d749c
// Addr: 1404d749c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404d754c) overlaps instruction at (ram,0x0001404d754b)
    */

void FUN_1404d749c(byte *param_1,longlong param_2)

{
  char *pcVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  undefined3 uVar5;
  uint uVar6;
  byte bVar7;
  byte bVar11;
  uint in_EAX;
  undefined1 *puVar8;
  ulonglong uVar10;
  char cVar12;
  byte bVar13;
  undefined1 uVar14;
  char unaff_BL;
  undefined7 unaff_00000019;
  ulonglong uVar15;
  byte unaff_BPL;
  undefined7 unaff_00000029;
  uint unaff_ESI;
  undefined4 unaff_00000034;
  uint *unaff_RDI;
  bool in_CF;
  uint *puVar9;
  
  uVar14 = (undefined1)((ulonglong)param_2 >> 8);
  bVar13 = (byte)param_2;
  cVar12 = (char)((ulonglong)param_1 >> 8);
  puVar8 = (undefined1 *)((ulonglong)&stack0x00000000 & 0xffffffff);
  uVar15 = (ulonglong)in_EAX;
  if (in_CF) {
    *param_1 = *param_1 + (char)((ulonglong)puVar8 >> 8);
    *puVar8 = *puVar8;
    pcVar1 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + -0xc);
    *pcVar1 = *pcVar1 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar4 = (int)&stack0x00000000 + 0x5000ef4;
  uVar5 = (undefined3)((uint)iVar4 >> 8);
  bVar7 = in(0xf);
  uVar6 = CONCAT31(uVar5,bVar7);
  puVar9 = (uint *)(ulonglong)uVar6;
  pcVar1 = (char *)(CONCAT71(unaff_00000029,unaff_BPL) + -0x23ffbf1d);
  *pcVar1 = *pcVar1 + cVar12;
  bVar11 = (byte)((uint)iVar4 >> 8);
  if (param_1 == (byte *)0x0) {
    cRam0000000000000000 = cRam0000000000000000 + bVar11;
    *(char *)puVar9 = (char)*puVar9;
    *(char *)puVar9 = (char)*puVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)puVar9 = (char)*puVar9 + bVar7;
  if ((char)*puVar9 == '\0') {
    param_1[param_2] = param_1[param_2] | bVar13;
  }
  else {
    *param_1 = *param_1 + bVar11;
    *(byte *)puVar9 = (char)*puVar9 + bVar7;
    pcVar1 = (char *)(CONCAT71(unaff_00000029,unaff_BPL) + -0x23ffbf1d);
    *pcVar1 = *pcVar1 + cVar12;
    if (param_1 != (byte *)0x0) {
      *(byte *)puVar9 = (char)*puVar9 + bVar7;
      if ((char)*puVar9 != '\0') {
        *param_1 = *param_1 + bVar11;
        *(byte *)puVar9 = (char)*puVar9 + bVar7;
        *(char *)((longlong)puVar9 + -0x1d) = *(char *)((longlong)puVar9 + -0x1d) + bVar7;
        pbVar2 = (byte *)(CONCAT71(unaff_00000029,unaff_BPL) + -0xfffbf1d);
        bVar3 = *pbVar2;
        *pbVar2 = *pbVar2 + unaff_BPL;
        if (CARRY1(bVar3,unaff_BPL)) {
          bVar7 = *param_1;
          *param_1 = *param_1 + bVar11;
          *(uint *)CONCAT44(unaff_00000034,unaff_ESI) =
               *(int *)CONCAT44(unaff_00000034,unaff_ESI) + uVar6 + (uint)CARRY1(bVar7,bVar11);
          *param_1 = *param_1 + bVar13;
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        *puVar9 = *puVar9 & uVar6;
        *(byte *)puVar9 = (char)*puVar9 + bVar7;
        pbVar2 = (byte *)(param_2 + 0x38);
        *pbVar2 = *pbVar2 << 1 | (char)*pbVar2 < '\0';
        *(undefined1 *)(CONCAT71(unaff_00000019,unaff_BL + cVar12) + 0x4d) = uVar14;
        *param_1 = *param_1 + bVar11;
        *(char *)CONCAT44(unaff_00000034,unaff_ESI) =
             *(char *)CONCAT44(unaff_00000034,unaff_ESI) + (char)param_1;
        *(byte *)puVar9 = (char)*puVar9 + bVar7;
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      *puVar9 = *puVar9 & uVar6;
      *(byte *)puVar9 = (char)*puVar9 + bVar7;
      goto code_r0x0001404d75a4;
    }
    *(char *)puVar9 = (char)*puVar9;
    in_EAX = (uint)(uVar15 - 8);
    *(ulonglong *)(uVar15 - 8) = uVar15;
    *puVar9 = *puVar9 + uVar6;
  }
  *(char *)((longlong)puVar9 + param_2) = *(char *)((longlong)puVar9 + param_2) + bVar11;
  param_1[param_2] = param_1[param_2] + bVar13;
  pbVar2 = (byte *)(param_2 + 0x38);
  *pbVar2 = *pbVar2 << 1 | (char)*pbVar2 < '\0';
  unaff_BL = unaff_BL + cVar12;
code_r0x0001404d75a4:
  *(undefined1 *)(CONCAT71(unaff_00000019,unaff_BL) + 0x4d) = uVar14;
  *param_1 = *param_1 + bVar7;
  *(byte *)((longlong)puVar9 * 2) = *(byte *)((longlong)puVar9 * 2) | bVar7;
  uVar10 = (ulonglong)CONCAT31(uVar5,bVar7 + 0x70);
  *(ulonglong *)((ulonglong)(in_EAX + *(int *)(uVar10 + 2)) - 8) = uVar10;
  *unaff_RDI = *unaff_RDI & unaff_ESI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

