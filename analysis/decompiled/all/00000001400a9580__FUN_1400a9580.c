// Function: FUN_1400a9580
// Addr: 1400a9580
// Size: 672 bytes


char * FUN_1400a9580(longlong param_1,longlong *param_2)

{
  int *piVar1;
  byte bVar2;
  ushort uVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  char *pcVar11;
  byte *pbVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  byte *pbVar16;
  
  pcVar11 = (char *)0x0;
  pbVar12 = (byte *)0x0;
  pbVar16 = (byte *)0x0;
  if ((param_2 != (longlong *)0x0) && (lVar4 = *param_2, lVar4 != 0)) {
    pbVar12 = (byte *)(param_2[3] + lVar4);
    pbVar16 = (byte *)(param_2[2] + lVar4);
  }
  iVar7 = *(int *)(param_1 + 0x88);
  bVar5 = true;
  if (iVar7 == 0) goto LAB_1400a9620;
  uVar14 = *(uint *)(param_1 + 0x40aaf8);
  if (iVar7 != 1) {
    bVar5 = false;
LAB_1400a97bc:
    *(uint *)(param_1 + 0x40aaf8) = uVar14;
    iVar6 = 0;
    if (bVar5) {
      iVar6 = iVar7;
    }
    *(int *)(param_1 + 0x88) = iVar6;
LAB_1400a97e6:
    if ((param_2 != (longlong *)0x0) && (*param_2 != 0)) {
      param_2[3] = (longlong)pbVar12 - *param_2;
    }
    return pcVar11;
  }
LAB_1400a967d:
  if (pbVar12 != pbVar16) {
    bVar2 = *pbVar12;
    pbVar12 = pbVar12 + 1;
    *(undefined4 *)(param_1 + 0x2c) = 8;
    uVar10 = (ulonglong)bVar2 << 0x18;
    *(int *)(param_1 + 0x28) = (int)uVar10;
    iVar7 = 8;
    do {
      uVar3 = *(ushort *)
               (param_1 + 0x8694 +
               ((uVar10 >> 0x1f) +
               ((ulonglong)*(byte *)(param_1 + 0x39) * 0x101 + (ulonglong)uVar14) * 2) * 2);
      *(int *)(param_1 + 0x28) = (int)uVar10 * 2;
      *(int *)(param_1 + 0x2c) = iVar7 + -1;
      if (0x100 < uVar3) {
        if (uVar3 < 0x300) {
          uVar10 = (ulonglong)uVar3 & 0xff;
          bVar2 = *(byte *)(uVar10 + 0x594 + param_1);
          uVar9 = (ulonglong)((int)uVar10 + 1) - 1;
          if (uVar9 < uVar10) {
            uVar10 = uVar9;
          }
          if (uVar10 != 0) {
            FUN_1404210f0(param_1 + 0x595,param_1 + 0x594);
          }
          *(byte *)(param_1 + 0x594) = bVar2;
          piVar1 = (int *)(param_1 + 0x94 + (ulonglong)bVar2 * 4);
          *piVar1 = *piVar1 + 1;
          *(uint *)(param_1 + 0xaaac + (ulonglong)*(uint *)(param_1 + 0x34) * 4) = (uint)bVar2;
          if (*(uint *)(param_1 + 0x34) < *(uint *)(param_1 + 0x30)) {
            *(undefined4 *)(param_1 + 0x44) = 0;
            *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) + 1;
LAB_1400a9620:
            if (*(int *)(param_1 + 0x88) != 0) goto LAB_1400a97e0;
            if (*(int *)(param_1 + 0x3c) == 0) {
              *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
              *(undefined4 *)(param_1 + 0x3c) = 0x31;
              if (*(uint *)(param_1 + 0x6c) <= *(uint *)(param_1 + 0x40)) {
                pcVar11 = "#bzip2: bad number of sections";
                goto LAB_1400a97e6;
              }
              *(undefined *)(param_1 + 0x39) =
                   (&DAT_14047f098)
                   [*(byte *)((ulonglong)(*(uint *)(param_1 + 0x40) & 0x7fff) + 0x694 + param_1) & 7
                   ];
            }
            else {
              *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + -1;
            }
            uVar14 = 0;
            goto LAB_1400a9672;
          }
        }
        else {
          if (uVar3 == 0x300) {
            *(undefined1 *)(param_1 + 0x38) = 1;
LAB_1400a97e0:
            *(undefined4 *)(param_1 + 0x88) = 0;
            goto LAB_1400a97e6;
          }
          uVar14 = *(uint *)(param_1 + 0x44);
          if (uVar14 < 0x17) {
            uVar15 = (uVar3 & 3) << ((byte)uVar14 & 0x1f);
            *(uint *)(param_1 + 0x44) = uVar14 + 1;
            uVar14 = *(uint *)(param_1 + 0x34);
            uVar8 = uVar14 + uVar15;
            if (uVar8 <= *(uint *)(param_1 + 0x30)) {
              bVar2 = *(byte *)(param_1 + 0x594);
              *(uint *)(param_1 + 0x34) = uVar8;
              piVar1 = (int *)(param_1 + 0x94 + (ulonglong)bVar2 * 4);
              *piVar1 = *piVar1 + uVar15;
              if (uVar14 < uVar8) {
                puVar13 = (uint *)(param_1 + ((ulonglong)uVar14 + 0x2aab) * 4);
                for (uVar10 = (ulonglong)uVar15; uVar10 != 0; uVar10 = uVar10 - 1) {
                  *puVar13 = (uint)bVar2;
                  puVar13 = puVar13 + 1;
                }
              }
              goto LAB_1400a9620;
            }
          }
        }
        pcVar11 = "#bzip2: bad block length";
        goto LAB_1400a97e6;
      }
      uVar14 = (uint)uVar3;
LAB_1400a9672:
      iVar7 = *(int *)(param_1 + 0x2c);
      if (iVar7 == 0) goto code_r0x0001400a967a;
      uVar10 = (ulonglong)*(uint *)(param_1 + 0x28);
    } while( true );
  }
  pcVar11 = "$base: short read";
  goto LAB_1400a97bc;
code_r0x0001400a967a:
  iVar7 = 1;
  goto LAB_1400a967d;
}

