// Function: FUN_14014cc70
// Addr: 14014cc70
// Size: 799 bytes


/* WARNING: Removing unreachable block (ram,0x00014014ce01) */
/* WARNING: Removing unreachable block (ram,0x00014014cdc7) */
/* WARNING: Removing unreachable block (ram,0x00014014ce0e) */
/* WARNING: Removing unreachable block (ram,0x00014014ce1f) */
/* WARNING: Removing unreachable block (ram,0x00014014ce26) */
/* WARNING: Removing unreachable block (ram,0x00014014ce53) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14014cc70(longlong param_1,longlong *param_2,char param_3)

{
  undefined8 *puVar1;
  byte *pbVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  undefined8 *in_RAX;
  longlong lVar6;
  undefined8 uVar7;
  undefined7 uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  
  uVar15 = DAT_1404e7f58;
  lVar6 = *param_2;
  if (lVar6 != 0) {
    puVar11 = *(undefined8 **)(param_1 + 8);
    for (in_RAX = (undefined8 *)*puVar11; in_RAX != puVar11; in_RAX = (undefined8 *)*in_RAX) {
      puVar1 = in_RAX + 2;
      if (in_RAX[6] == lVar6) {
        if ((((*(uint *)(*(longlong *)(param_1 + 0x80) + 0x118) & 0x8000000) == 0) ||
            (*(longlong *)(lVar6 + 0x100) != 0)) && (param_3 != '\0')) {
          uStack_40 = 0;
          uVar12 = 0;
          uVar14 = 0xcbf29ce484222325;
          local_48 = (ulonglong)CONCAT14(s_error_14047228c[4],s_error_14047228c._0_4_);
          local_38 = 5;
          local_30 = 0xf;
          uVar9 = uVar12;
          do {
            pbVar2 = (byte *)((longlong)&local_48 + uVar9);
            uVar9 = uVar9 + 1;
            uVar14 = (uVar14 ^ *pbVar2) * 0x100000001b3;
          } while (uVar9 < 5);
          uVar9 = *(ulonglong *)(DAT_1404e7f68 + 8 + (uVar14 & _DAT_1404e7f80) * 0x10);
          uVar13 = uVar12;
          if (uVar9 != DAT_1404e7f58) {
            uVar14 = *(ulonglong *)(DAT_1404e7f68 + (uVar14 & _DAT_1404e7f80) * 0x10);
            while( true ) {
              puVar11 = (undefined8 *)(uVar9 + 0x10);
              if (0xf < *(ulonglong *)(uVar9 + 0x28)) {
                puVar11 = (undefined8 *)*puVar11;
              }
              if (((*(longlong *)(uVar9 + 0x20) == 5) &&
                  (iVar5 = memcmp(&local_48,puVar11,5), uVar13 = uVar9, iVar5 == 0)) ||
                 (uVar13 = uVar12, uVar9 == uVar14)) break;
              uVar9 = *(ulonglong *)(uVar9 + 8);
            }
          }
          uVar9 = uVar15;
          if (uVar13 != 0) {
            uVar9 = uVar13;
          }
          plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x80) + 0x1518);
          lVar6 = *plVar3;
          if (uVar9 == uVar15) {
            lVar6 = (**(code **)(lVar6 + 0x60))(plVar3,"error");
          }
          else {
            uVar7 = FUN_14014cf90(param_1);
            lVar6 = (**(code **)(lVar6 + 0x68))(plVar3,"error",uVar7);
          }
          uVar7 = (**(code **)(*(longlong *)*param_2 + 0x50))((longlong *)*param_2,lVar6);
          uVar8 = (undefined7)((ulonglong)uVar7 >> 8);
          *param_2 = lVar6;
        }
        else {
          puVar10 = puVar1;
          if (0xf < (ulonglong)in_RAX[5]) {
            puVar10 = (undefined8 *)*puVar1;
          }
          uVar9 = 0;
          uVar15 = 0xcbf29ce484222325;
          if (in_RAX[4] != 0) {
            do {
              pbVar2 = (byte *)((longlong)puVar10 + uVar9);
              uVar9 = uVar9 + 1;
              uVar15 = (uVar15 ^ *pbVar2) * 0x100000001b3;
            } while (uVar9 < (ulonglong)in_RAX[4]);
          }
          lVar6 = FUN_1400110a0(param_1,local_58,puVar1,uVar15);
          plVar3 = *(longlong **)(lVar6 + 8);
          if (plVar3 != (longlong *)0x0) {
            lVar6 = *(longlong *)(param_1 + 0x18);
            uVar15 = *(ulonglong *)(param_1 + 0x30) & uVar15;
            plVar4 = *(longlong **)(lVar6 + uVar15 * 0x10);
            if (*(longlong **)(lVar6 + 8 + uVar15 * 0x10) == plVar3) {
              if (plVar4 == plVar3) {
                *(undefined8 **)(lVar6 + uVar15 * 0x10) = puVar11;
                *(undefined8 **)(lVar6 + 8 + uVar15 * 0x10) = puVar11;
              }
              else {
                *(longlong *)(lVar6 + 8 + uVar15 * 0x10) = plVar3[1];
              }
            }
            else if (plVar4 == plVar3) {
              *(longlong *)(lVar6 + uVar15 * 0x10) = *plVar3;
            }
            lVar6 = *plVar3;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
            *(longlong *)plVar3[1] = lVar6;
            *(longlong *)(lVar6 + 8) = plVar3[1];
            FUN_140017240(plVar3 + 2);
            lVar6 = thunk_FUN_14028af80(plVar3,0x38);
          }
          uVar8 = (undefined7)((ulonglong)lVar6 >> 8);
        }
        return CONCAT71(uVar8,1);
      }
    }
  }
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}

