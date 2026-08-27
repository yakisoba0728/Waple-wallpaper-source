// Function: FUN_1403fbf80
// Addr: 1403fbf80
// Size: 763 bytes


ulonglong FUN_1403fbf80(ushort *param_1,int *param_2,uint param_3)

{
  ushort *puVar1;
  longlong lVar2;
  uint uVar3;
  char *pcVar4;
  ulonglong uVar5;
  ushort *puVar6;
  byte *pbVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  char *pcVar13;
  
  puVar1 = param_1 + 1;
  uVar9 = (ulonglong)(uint)param_2[6];
  pcVar13 = "OUT-OF-RANGE";
  uVar11 = (longlong)puVar1 - *(longlong *)(param_2 + 2);
  pcVar4 = "OUT-OF-RANGE";
  if (uVar11 <= uVar9) {
    pcVar4 = "OK";
  }
  uVar5 = FUN_1402fc370("SANITIZE",puVar1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",
                        puVar1,*(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar4);
  if ((uVar11 <= uVar9) && (uVar5 = FUN_140407070(param_1,param_2), (char)uVar5 != '\0')) {
    uVar9 = 0;
    uVar10 = (uint)(byte)*param_1 * 0x100 + (uint)*(byte *)((longlong)param_1 + 1);
    if (uVar10 != 0) {
      do {
        uVar12 = (ulonglong)(uint)param_2[6];
        lVar2 = uVar9 * 3;
        pcVar4 = "OUT-OF-RANGE";
        pbVar7 = (byte *)((longlong)param_1 + lVar2 + 5);
        uVar11 = (longlong)pbVar7 - *(longlong *)(param_2 + 2);
        if (uVar11 <= uVar12) {
          pcVar4 = "OK";
        }
        uVar5 = FUN_1402fc370("SANITIZE",pbVar7,0,1,*param_2 + 1,0,
                              "check_point [%p] in [%p..%p] -> %s",pbVar7,*(longlong *)(param_2 + 2)
                              ,*(undefined8 *)(param_2 + 4),pcVar4);
        if (((uVar12 < uVar11) ||
            (uVar5 = (ulonglong)*(byte *)(lVar2 + (longlong)puVar1) << 8,
            (uint)param_2[0xe] <= (uint)*(byte *)(lVar2 + 1 + (longlong)puVar1) + (int)uVar5)) ||
           (uVar5 = 0, param_3 <= *(byte *)(lVar2 + 2 + (longlong)puVar1))) goto LAB_1403fc268;
        uVar8 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar8;
      } while (uVar8 < uVar10);
    }
    uVar5 = 0;
    uVar10 = (uint)(byte)*param_1 * 0x100 + (uint)(*param_1 >> 8);
    if (uVar10 != 0) {
      puVar6 = (ushort *)&DAT_14045dd10;
      if (uVar10 != 0) {
        puVar6 = puVar1;
      }
      uVar5 = (ulonglong)(byte)*puVar6 << 8;
      if ((uint)*(byte *)((longlong)puVar6 + 1) + (int)uVar5 == 0) {
        uVar8 = 1;
        if (1 < uVar10) {
          do {
            uVar3 = uVar8 - 1;
            if (uVar3 < uVar10) {
              pbVar7 = (byte *)((longlong)param_1 + (ulonglong)uVar3 + (ulonglong)uVar3 * 2 + 2);
            }
            else {
              pbVar7 = (byte *)&DAT_14045dd10;
            }
            uVar5 = 0;
            if ((uint)*(byte *)((longlong)param_1 + (ulonglong)uVar8 * 3 + 3) +
                (uint)*(byte *)((longlong)param_1 + (ulonglong)uVar8 * 3 + 2) * 0x100 <=
                (uint)*pbVar7 * 0x100 + (uint)pbVar7[1]) goto LAB_1403fc268;
            uVar8 = uVar8 + 1;
          } while (uVar8 < uVar10);
        }
        uVar8 = uVar10 - 1;
        if (uVar8 < uVar10) {
          pbVar7 = (byte *)((longlong)param_1 + (ulonglong)uVar8 + (ulonglong)uVar8 * 2 + 7);
        }
        else {
          pbVar7 = (byte *)((longlong)&DAT_14045dd10 + 5);
        }
        uVar9 = (longlong)pbVar7 - *(longlong *)(param_2 + 2);
        uVar12 = (ulonglong)(uint)param_2[6];
        uVar11 = 1;
        if (uVar9 <= uVar12) {
          pcVar13 = "OK";
        }
        uVar5 = FUN_1402fc370("SANITIZE",pbVar7,0,1,*param_2 + 1,0,
                              "check_point [%p] in [%p..%p] -> %s",pbVar7,*(longlong *)(param_2 + 2)
                              ,*(undefined8 *)(param_2 + 4),pcVar13);
        if (uVar9 <= uVar12) {
          uVar8 = (*param_1 & 0xff) * 0x100 + (uint)(*param_1 >> 8);
          uVar10 = uVar8 - 1;
          if (uVar10 < uVar8) {
            pbVar7 = (byte *)((longlong)param_1 + (ulonglong)uVar10 * 3 + 5);
          }
          else {
            pbVar7 = (byte *)((longlong)&DAT_14045dd10 + 3);
          }
          uVar5 = (ulonglong)*pbVar7 << 8;
          if ((uint)pbVar7[1] + (int)uVar5 == param_2[0xe]) {
            return uVar11 & 0xff;
          }
        }
      }
    }
  }
LAB_1403fc268:
  return uVar5 & 0xffffffffffffff00;
}

