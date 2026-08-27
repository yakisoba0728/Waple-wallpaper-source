// Function: FUN_14000fc90
// Addr: 14000fc90
// Size: 634 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14000fc90(undefined8 param_1,undefined8 *param_2)

{
  byte *pbVar1;
  size_t _Size;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 *_Buf1;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined8 *local_28;
  undefined8 *local_20;
  
  puVar5 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar5 = (undefined8 *)*param_2;
  }
  uVar6 = 0;
  uVar9 = 0xcbf29ce484222325;
  if (param_2[2] != 0) {
    do {
      pbVar1 = (byte *)(uVar6 + (longlong)puVar5);
      uVar6 = uVar6 + 1;
      uVar9 = (uVar9 ^ *pbVar1) * 0x100000001b3;
    } while (uVar6 < (ulonglong)param_2[2]);
  }
  FUN_1400110a0(&DAT_1404e8b20,&local_28,param_2,uVar9);
  puVar5 = local_20;
  if (local_20 == (undefined8 *)0x0) {
    if (DAT_1404e8b30 == 0x333333333333333) {
                    /* WARNING: Subroutine does not return */
      FUN_14028c2e0("unordered_map/set too long");
    }
    puVar5 = (undefined8 *)FUN_14028af20(0x50);
    FUN_140016fc0(puVar5 + 2,param_2);
    puVar5[6] = 0;
    puVar5[7] = 0;
    puVar5[8] = 0;
    puVar5[9] = 0xf;
    *(undefined1 *)(puVar5 + 6) = 0;
    puVar7 = local_28;
    if (_DAT_1404e8b20 < (float)(DAT_1404e8b30 + 1) / (float)DAT_1404e8b58) {
      FUN_140011c30(&DAT_1404e8b20);
      puVar8 = *(undefined8 **)(DAT_1404e8b38 + 8 + (uVar9 & DAT_1404e8b50) * 0x10);
      puVar7 = DAT_1404e8b28;
      if (puVar8 != DAT_1404e8b28) {
        _Size = puVar5[4];
        uVar6 = puVar5[5];
        puVar2 = *(undefined8 **)(DAT_1404e8b38 + (uVar9 & DAT_1404e8b50) * 0x10);
        puVar7 = puVar8;
        while( true ) {
          puVar8 = puVar7 + 2;
          if (0xf < (ulonglong)puVar7[5]) {
            puVar8 = (undefined8 *)*puVar8;
          }
          if (uVar6 < 0x10) {
            _Buf1 = puVar5 + 2;
          }
          else {
            _Buf1 = (undefined8 *)puVar5[2];
          }
          if ((_Size == puVar7[4]) &&
             ((_Size == 0 || (iVar4 = memcmp(_Buf1,puVar8,_Size), iVar4 == 0)))) break;
          if (puVar7 == puVar2) goto LAB_14000fe7a;
          puVar7 = (undefined8 *)puVar7[1];
        }
        puVar7 = (undefined8 *)*puVar7;
      }
    }
LAB_14000fe7a:
    puVar8 = (undefined8 *)puVar7[1];
    DAT_1404e8b30 = DAT_1404e8b30 + 1;
    *puVar5 = puVar7;
    puVar5[1] = puVar8;
    *puVar8 = puVar5;
    puVar7[1] = puVar5;
    lVar3 = DAT_1404e8b38;
    uVar9 = DAT_1404e8b50 & uVar9;
    puVar2 = *(undefined8 **)(DAT_1404e8b38 + uVar9 * 0x10);
    if (puVar2 == DAT_1404e8b28) {
      *(undefined8 **)(DAT_1404e8b38 + uVar9 * 0x10) = puVar5;
      *(undefined8 **)(lVar3 + 8 + uVar9 * 0x10) = puVar5;
      return puVar5 + 6;
    }
    if (puVar2 == puVar7) {
      *(undefined8 **)(DAT_1404e8b38 + uVar9 * 0x10) = puVar5;
      return puVar5 + 6;
    }
    if (*(undefined8 **)(DAT_1404e8b38 + 8 + uVar9 * 0x10) == puVar8) {
      *(undefined8 **)(DAT_1404e8b38 + 8 + uVar9 * 0x10) = puVar5;
    }
  }
  return puVar5 + 6;
}

