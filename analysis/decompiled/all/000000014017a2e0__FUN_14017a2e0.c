// Function: FUN_14017a2e0
// Addr: 14017a2e0
// Size: 684 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14017a2e0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

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
    FUN_1400110a0(&DAT_1404e9690,&local_38,param_2,uVar9);
    if (local_30 == (undefined8 *)0x0) {
      if (DAT_1404e96a0 == 0x333333333333333) {
                    /* WARNING: Subroutine does not return */
        FUN_14028c2e0("unordered_map/set too long");
      }
      puVar5 = (undefined8 *)FUN_14028af20(0x50);
      FUN_140016fc0(puVar5 + 2,param_2);
      FUN_140016fc0(puVar5 + 6,param_2 + 4);
      if (_DAT_1404e9690 < (float)(DAT_1404e96a0 + 1) / (float)DAT_1404e96c8) {
        FUN_140011c30(&DAT_1404e9690);
        puVar8 = *(undefined8 **)(DAT_1404e96a8 + 8 + (DAT_1404e96c0 & uVar9) * 0x10);
        puVar7 = DAT_1404e9698;
        if (puVar8 != DAT_1404e9698) {
          uVar6 = puVar5[5];
          _Size = puVar5[4];
          puVar2 = *(undefined8 **)(DAT_1404e96a8 + (DAT_1404e96c0 & uVar9) * 0x10);
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
              goto LAB_14017a4eb;
            }
            if (puVar7 == puVar2) break;
            puVar7 = (undefined8 *)puVar7[1];
          }
        }
        local_38 = puVar7;
        local_30 = (undefined8 *)0x0;
      }
LAB_14017a4eb:
      puVar8 = (undefined8 *)local_38[1];
      DAT_1404e96a0 = DAT_1404e96a0 + 1;
      *puVar5 = local_38;
      puVar5[1] = puVar8;
      *puVar8 = puVar5;
      local_38[1] = puVar5;
      lVar3 = DAT_1404e96a8;
      uVar9 = DAT_1404e96c0 & uVar9;
      puVar7 = *(undefined8 **)(DAT_1404e96a8 + uVar9 * 0x10);
      if (puVar7 == DAT_1404e9698) {
        *(undefined8 **)(DAT_1404e96a8 + uVar9 * 0x10) = puVar5;
LAB_14017a549:
        *(undefined8 **)(lVar3 + 8 + uVar9 * 0x10) = puVar5;
      }
      else if (puVar7 == local_38) {
        *(undefined8 **)(DAT_1404e96a8 + uVar9 * 0x10) = puVar5;
      }
      else if (*(undefined8 **)(DAT_1404e96a8 + 8 + uVar9 * 0x10) == puVar8) goto LAB_14017a549;
    }
    param_2 = param_2 + 8;
  } while( true );
}

