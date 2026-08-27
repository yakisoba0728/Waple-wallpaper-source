// Function: FUN_1400fa150
// Addr: 1400fa150
// Size: 584 bytes


undefined8 *
FUN_1400fa150(undefined8 *param_1,longlong param_2,undefined8 param_3,char *param_4,char *param_5)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  ulonglong uVar8;
  char *pcVar9;
  char *pcVar10;
  undefined1 *puVar11;
  
  if (param_4 == param_5) {
    *param_1 = param_3;
    return param_1;
  }
  do {
    cVar6 = *param_4;
    pcVar10 = param_4 + 1;
    if (cVar6 != '$') goto LAB_1400fa345;
    if (pcVar10 == param_5) {
      FUN_1400534d0(param_3,0x24);
      break;
    }
    cVar6 = *pcVar10;
    if (cVar6 == '$') {
      FUN_1400534d0(param_3,0x24);
      pcVar9 = param_4 + 2;
    }
    else if (cVar6 == '`') {
      puVar1 = *(undefined1 **)(param_2 + 0x30);
      puVar11 = *(undefined1 **)(param_2 + 0x28);
      if (puVar11 == puVar1) {
LAB_1400fa223:
        pcVar9 = param_4 + 2;
      }
      else {
        do {
          FUN_1400534d0(param_3,*puVar11);
          puVar11 = puVar11 + 1;
        } while (puVar11 != puVar1);
        pcVar9 = param_4 + 2;
      }
    }
    else {
      if (cVar6 == '\'') {
        puVar1 = *(undefined1 **)(param_2 + 0x48);
        for (puVar11 = *(undefined1 **)(param_2 + 0x40); puVar11 != puVar1; puVar11 = puVar11 + 1) {
          FUN_1400534d0(param_3,*puVar11);
        }
        goto LAB_1400fa223;
      }
      pcVar9 = param_4 + 2;
      if (cVar6 == '&') {
        puVar2 = *(undefined8 **)(param_2 + 0x10);
        lVar5 = *(longlong *)(param_2 + 0x18) - (longlong)puVar2;
        lVar4 = lVar5 >> 0x3f;
        if (lVar5 / 0x18 + lVar4 != lVar4) {
          puVar1 = (undefined1 *)puVar2[1];
          for (puVar11 = (undefined1 *)*puVar2; puVar11 != puVar1; puVar11 = puVar11 + 1) {
            FUN_1400534d0(param_3,*puVar11);
          }
        }
      }
      else if ((byte)(cVar6 - 0x30U) < 10) {
        if ((pcVar9 == param_5) || (9 < (byte)(*pcVar9 - 0x30U))) {
          uVar7 = (int)cVar6 - 0x30;
          lVar4 = 2;
          bVar3 = false;
        }
        else {
          bVar3 = true;
          lVar4 = 3;
          uVar7 = (int)*pcVar9 + cVar6 * 10 + -0x210;
        }
        uVar8 = (ulonglong)uVar7;
        pcVar9 = param_4 + lVar4;
        if (uVar7 == 0) {
          FUN_1400534d0(param_3,0x24);
          FUN_1400534d0(param_3,0x30);
          if (bVar3) {
            cVar6 = '0';
            pcVar10 = pcVar9;
            goto LAB_1400fa345;
          }
        }
        else {
          lVar4 = *(longlong *)(param_2 + 0x10);
          if (uVar8 < (ulonglong)((*(longlong *)(param_2 + 0x18) - lVar4) / 0x18)) {
            puVar1 = *(undefined1 **)(lVar4 + 8 + uVar8 * 0x18);
            for (puVar11 = *(undefined1 **)(lVar4 + uVar8 * 0x18); puVar11 != puVar1;
                puVar11 = puVar11 + 1) {
              FUN_1400534d0(param_3,*puVar11);
            }
          }
        }
      }
      else {
        FUN_1400534d0(param_3,0x24);
        cVar6 = *pcVar10;
        pcVar10 = pcVar9;
LAB_1400fa345:
        FUN_1400534d0(param_3,cVar6);
        pcVar9 = pcVar10;
      }
    }
    param_4 = pcVar9;
  } while (pcVar9 != param_5);
  *param_1 = param_3;
  return param_1;
}

