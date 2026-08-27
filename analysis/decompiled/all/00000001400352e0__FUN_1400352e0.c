// Function: FUN_1400352e0
// Addr: 1400352e0
// Size: 669 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400352e0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

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
  undefined8 *local_38;
  undefined8 *local_30;
  
  do {
    if (param_2 == param_3) {
      return;
    }
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
    FUN_1400110a0(&DAT_1404e90f0,&local_38,param_2,uVar9);
    if (local_30 == (undefined8 *)0x0) {
      if (DAT_1404e9100 == 0x492492492492492) {
                    /* WARNING: Subroutine does not return */
        FUN_14028c2e0("unordered_map/set too long");
      }
      puVar5 = (undefined8 *)FUN_14028af20(0x38);
      FUN_140016fc0(puVar5 + 2,param_2);
      *(undefined4 *)(puVar5 + 6) = *(undefined4 *)(param_2 + 4);
      if (_DAT_1404e90f0 < (float)(DAT_1404e9100 + 1) / (float)DAT_1404e9128) {
        FUN_140039940(&DAT_1404e90f0);
        puVar8 = *(undefined8 **)(DAT_1404e9108 + 8 + (DAT_1404e9120 & uVar9) * 0x10);
        puVar7 = DAT_1404e90f8;
        if (puVar8 != DAT_1404e90f8) {
          uVar6 = puVar5[5];
          _Size = puVar5[4];
          puVar2 = *(undefined8 **)(DAT_1404e9108 + (DAT_1404e9120 & uVar9) * 0x10);
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
               ((_Size == 0 || (iVar4 = memcmp(_Buf1,puVar8,_Size), iVar4 == 0)))) {
              local_38 = (undefined8 *)*puVar7;
              local_30 = puVar7;
              goto LAB_1400354dc;
            }
            if (puVar7 == puVar2) break;
            puVar7 = (undefined8 *)puVar7[1];
          }
        }
        local_38 = puVar7;
        local_30 = (undefined8 *)0x0;
      }
LAB_1400354dc:
      puVar8 = (undefined8 *)local_38[1];
      DAT_1404e9100 = DAT_1404e9100 + 1;
      *puVar5 = local_38;
      puVar5[1] = puVar8;
      *puVar8 = puVar5;
      local_38[1] = puVar5;
      lVar3 = DAT_1404e9108;
      uVar9 = DAT_1404e9120 & uVar9;
      puVar7 = *(undefined8 **)(DAT_1404e9108 + uVar9 * 0x10);
      if (puVar7 == DAT_1404e90f8) {
        *(undefined8 **)(DAT_1404e9108 + uVar9 * 0x10) = puVar5;
LAB_14003553a:
        *(undefined8 **)(lVar3 + 8 + uVar9 * 0x10) = puVar5;
      }
      else if (puVar7 == local_38) {
        *(undefined8 **)(DAT_1404e9108 + uVar9 * 0x10) = puVar5;
      }
      else if (*(undefined8 **)(DAT_1404e9108 + 8 + uVar9 * 0x10) == puVar8) goto LAB_14003553a;
    }
    param_2 = param_2 + 5;
  } while( true );
}

