// Function: FUN_1403fc280
// Addr: 1403fc280
// Size: 996 bytes


ulonglong FUN_1403fc280(uint *param_1,int *param_2,uint param_3)

{
  uint *puVar1;
  longlong lVar2;
  char *pcVar3;
  ulonglong uVar4;
  uint uVar5;
  byte *pbVar6;
  uint *puVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  byte *pbVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  char *pcVar16;
  
  puVar1 = param_1 + 1;
  uVar9 = (ulonglong)(uint)param_2[6];
  pcVar16 = "OUT-OF-RANGE";
  uVar14 = (longlong)puVar1 - *(longlong *)(param_2 + 2);
  pcVar3 = "OUT-OF-RANGE";
  if (uVar14 <= uVar9) {
    pcVar3 = "OK";
  }
  uVar4 = FUN_1402fc370("SANITIZE",puVar1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",
                        puVar1,*(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar3);
  if ((uVar14 <= uVar9) && (uVar4 = FUN_1404071c0(param_1,param_2), (char)uVar4 != '\0')) {
    uVar9 = 0;
    uVar10 = (uint)*(byte *)((longlong)param_1 + 1) * 0x10000 +
             (uint)*(byte *)((longlong)param_1 + 2) * 0x100 + (uint)(byte)*param_1 * 0x1000000 +
             (uint)*(byte *)((longlong)param_1 + 3);
    if (uVar10 != 0) {
      do {
        uVar15 = (ulonglong)(uint)param_2[6];
        pcVar3 = "OUT-OF-RANGE";
        lVar2 = uVar9 * 6;
        pbVar6 = (byte *)((longlong)param_1 + lVar2 + 10);
        uVar14 = (longlong)pbVar6 - *(longlong *)(param_2 + 2);
        if (uVar14 <= uVar15) {
          pcVar3 = "OK";
        }
        uVar4 = FUN_1402fc370("SANITIZE",pbVar6,0,1,*param_2 + 1,0,
                              "check_point [%p] in [%p..%p] -> %s",pbVar6,*(longlong *)(param_2 + 2)
                              ,*(undefined8 *)(param_2 + 4),pcVar3);
        if (((uVar15 < uVar14) ||
            (uVar4 = 0,
            (uint)param_2[0xe] <=
            (uint)*(byte *)(lVar2 + 1 + (longlong)puVar1) * 0x10000 +
            (uint)*(byte *)(lVar2 + 2 + (longlong)puVar1) * 0x100 +
            (uint)*(byte *)(lVar2 + (longlong)puVar1) * 0x1000000 +
            (uint)*(byte *)(lVar2 + 3 + (longlong)puVar1))) ||
           (uVar4 = (ulonglong)*(byte *)(lVar2 + 4 + (longlong)puVar1) << 8,
           param_3 <= (uint)*(byte *)(lVar2 + 5 + (longlong)puVar1) + (int)uVar4))
        goto LAB_1403fc651;
        uVar8 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar8;
      } while (uVar8 < uVar10);
    }
    uVar10 = *param_1;
    uVar4 = (ulonglong)(uVar10 >> 8);
    iVar13 = (uVar10 >> 0x10 & 0xff) * 0x100;
    iVar12 = (uVar10 >> 8 & 0xff) * 0x10000;
    uVar8 = uVar10 * 0x1000000 + iVar12 + iVar13 + (uVar10 >> 0x18);
    if (uVar8 != 0) {
      puVar7 = (uint *)&DAT_14045dd10;
      if (uVar8 != 0) {
        puVar7 = puVar1;
      }
      uVar4 = 0;
      if ((uint)*(byte *)((longlong)puVar7 + 1) * 0x10000 +
          (uint)*(byte *)((longlong)puVar7 + 2) * 0x100 + (uint)(byte)*puVar7 * 0x1000000 +
          (uint)*(byte *)((longlong)puVar7 + 3) == 0) {
        uVar5 = 1;
        if (1 < uVar8) {
          uVar10 = iVar12 + (uVar10 >> 0x18) + iVar13 + uVar10 * 0x1000000;
          do {
            if (uVar5 - 1 < uVar10) {
              pbVar6 = (byte *)((longlong)param_1 + (ulonglong)(uVar5 - 1) * 6 + 4);
            }
            else {
              pbVar6 = (byte *)&DAT_14045dd10;
            }
            if (uVar5 < uVar10) {
              pbVar11 = (byte *)((longlong)param_1 + (ulonglong)uVar5 * 6 + 4);
            }
            else {
              pbVar11 = (byte *)&DAT_14045dd10;
            }
            uVar4 = 0;
            if ((uint)pbVar11[1] * 0x10000 + (uint)pbVar11[2] * 0x100 + (uint)*pbVar11 * 0x1000000 +
                (uint)pbVar11[3] <=
                (uint)pbVar6[1] * 0x10000 + (uint)pbVar6[2] * 0x100 + (uint)*pbVar6 * 0x1000000 +
                (uint)pbVar6[3]) goto LAB_1403fc651;
            uVar5 = uVar5 + 1;
          } while (uVar5 < uVar8);
        }
        if (uVar8 - 1 < uVar8) {
          pbVar6 = (byte *)((longlong)param_1 + (ulonglong)(uVar8 - 1) * 6 + 0xe);
        }
        else {
          pbVar6 = (byte *)((longlong)&DAT_14045dd18 + 2);
        }
        uVar9 = (longlong)pbVar6 - *(longlong *)(param_2 + 2);
        uVar15 = (ulonglong)(uint)param_2[6];
        uVar14 = 1;
        if (uVar9 <= uVar15) {
          pcVar16 = "OK";
        }
        uVar4 = FUN_1402fc370("SANITIZE",pbVar6,0,1,*param_2 + 1,0,
                              "check_point [%p] in [%p..%p] -> %s",pbVar6,*(longlong *)(param_2 + 2)
                              ,*(undefined8 *)(param_2 + 4),pcVar16);
        if (uVar9 <= uVar15) {
          uVar10 = *param_1;
          uVar8 = uVar10 * 0x1000000 +
                  (uVar10 >> 0x10 & 0xff) * 0x100 + (uVar10 >> 8 & 0xff) * 0x10000 +
                  (uVar10 >> 0x18);
          uVar10 = uVar8 - 1;
          if (uVar10 < uVar8) {
            pbVar6 = (byte *)((longlong)param_1 +
                             ((ulonglong)uVar10 * 2 + 5 + (ulonglong)uVar10) * 2);
          }
          else {
            pbVar6 = (byte *)((longlong)&DAT_14045dd10 + 6);
          }
          uVar4 = 0;
          if ((uint)pbVar6[1] * 0x10000 + (uint)pbVar6[2] * 0x100 + (uint)*pbVar6 * 0x1000000 +
              (uint)pbVar6[3] == param_2[0xe]) {
            return uVar14 & 0xff;
          }
        }
      }
    }
  }
LAB_1403fc651:
  return uVar4 & 0xffffffffffffff00;
}

