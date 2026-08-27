// Function: FUN_140150ac0
// Addr: 140150ac0
// Size: 670 bytes


void FUN_140150ac0(longlong param_1,undefined8 *param_2)

{
  byte *pbVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong *plVar8;
  
  if (param_2 != (undefined8 *)0x0) {
    plVar2 = *(longlong **)(param_1 + 8);
    plVar6 = (longlong *)*plVar2;
    if (plVar6 != plVar2) {
LAB_140150b12:
      if ((undefined8 *)plVar6[6] != param_2) goto code_r0x000140150b18;
      if ((ulonglong)plVar6[5] < 0x10) {
        plVar8 = plVar6 + 2;
      }
      else {
        plVar8 = (longlong *)plVar6[2];
      }
      uVar7 = 0;
      uVar5 = 0xcbf29ce484222325;
      if (plVar6[4] != 0) {
        do {
          pbVar1 = (byte *)(uVar7 + (longlong)plVar8);
          uVar7 = uVar7 + 1;
          uVar5 = (uVar5 ^ *pbVar1) * 0x100000001b3;
        } while (uVar7 < (ulonglong)plVar6[4]);
      }
      lVar3 = *(longlong *)(param_1 + 0x18);
      uVar5 = *(ulonglong *)(param_1 + 0x30) & uVar5;
      plVar8 = *(longlong **)(lVar3 + uVar5 * 0x10);
      if (*(longlong **)(lVar3 + 8 + uVar5 * 0x10) == plVar6) {
        if (plVar8 == plVar6) {
          *(longlong **)(lVar3 + uVar5 * 0x10) = plVar2;
          *(longlong **)(lVar3 + 8 + uVar5 * 0x10) = plVar2;
        }
        else {
          *(longlong *)(lVar3 + 8 + uVar5 * 0x10) = plVar6[1];
        }
      }
      else if (plVar8 == plVar6) {
        *(longlong *)(lVar3 + uVar5 * 0x10) = *plVar6;
      }
      lVar3 = *plVar6;
      *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
      *(longlong *)plVar6[1] = lVar3;
      *(longlong *)(lVar3 + 8) = plVar6[1];
      FUN_140017240(plVar6 + 2);
      thunk_FUN_14028af80(plVar6,0x38);
    }
LAB_140150bd0:
    lVar3 = *(longlong *)(param_1 + 0x58);
    plVar2 = *(longlong **)(param_1 + 0x48);
    uVar5 = *(ulonglong *)(param_1 + 0x70) &
            (((((((((ulonglong)param_2 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                  (ulonglong)param_2 >> 8 & 0xff) * 0x100000001b3 ^
                 (ulonglong)param_2 >> 0x10 & 0xff) * 0x100000001b3 ^
                (ulonglong)param_2 >> 0x18 & 0xff) * 0x100000001b3 ^
               (ulonglong)param_2 >> 0x20 & 0xff) * 0x100000001b3 ^
              (ulonglong)param_2 >> 0x28 & 0xff) * 0x100000001b3 ^ (ulonglong)param_2 >> 0x30 & 0xff
             ) * 0x100000001b3 ^ (ulonglong)param_2 >> 0x38) * 0x100000001b3;
    plVar6 = *(longlong **)(lVar3 + 8 + uVar5 * 0x10);
    if (plVar6 == plVar2) {
LAB_140150c77:
      plVar6 = (longlong *)0x0;
    }
    else {
      puVar4 = (undefined8 *)plVar6[2];
      while (param_2 != puVar4) {
        if (plVar6 == *(longlong **)(lVar3 + uVar5 * 0x10)) goto LAB_140150c77;
        plVar6 = (longlong *)plVar6[1];
        puVar4 = (undefined8 *)plVar6[2];
      }
    }
    if ((plVar6 != (longlong *)0x0) && (plVar6 != plVar2)) {
      uVar5 = *(ulonglong *)(param_1 + 0x70) &
              (((((((((ulonglong)*(byte *)(plVar6 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar6 + 0x11)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar6 + 0x12)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar6 + 0x13)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar6 + 0x14)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)plVar6 + 0x15)) * 0x100000001b3 ^
               (ulonglong)*(byte *)((longlong)plVar6 + 0x16)) * 0x100000001b3 ^
              (ulonglong)*(byte *)((longlong)plVar6 + 0x17)) * 0x100000001b3;
      plVar8 = *(longlong **)(lVar3 + uVar5 * 0x10);
      if (*(longlong **)(lVar3 + 8 + uVar5 * 0x10) == plVar6) {
        if (plVar8 == plVar6) {
          *(longlong **)(lVar3 + uVar5 * 0x10) = plVar2;
          *(longlong **)(lVar3 + 8 + uVar5 * 0x10) = plVar2;
        }
        else {
          *(longlong *)(lVar3 + 8 + uVar5 * 0x10) = plVar6[1];
        }
      }
      else if (plVar8 == plVar6) {
        *(longlong *)(lVar3 + uVar5 * 0x10) = *plVar6;
      }
      lVar3 = *plVar6;
      *(longlong *)(param_1 + 0x50) = *(longlong *)(param_1 + 0x50) + -1;
      *(longlong *)plVar6[1] = lVar3;
      *(longlong *)(lVar3 + 8) = plVar6[1];
      thunk_FUN_14028af80(plVar6,0x18);
    }
    (**(code **)*param_2)(param_2,1);
  }
  return;
code_r0x000140150b18:
  plVar6 = (longlong *)*plVar6;
  if (plVar6 == plVar2) goto LAB_140150bd0;
  goto LAB_140150b12;
}

