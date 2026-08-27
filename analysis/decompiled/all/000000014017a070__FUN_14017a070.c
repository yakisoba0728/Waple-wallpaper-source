// Function: FUN_14017a070
// Addr: 14017a070
// Size: 617 bytes


void FUN_14017a070(float *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  float fVar8;
  
  do {
    if (param_2 == param_3) {
      return;
    }
    puVar7 = *(undefined8 **)(param_1 + 2);
    uVar6 = (((((((((ulonglong)*(byte *)(param_2 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)param_2 + 0x11)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)param_2 + 0x12)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)param_2 + 0x13)) * 0x100000001b3 ^
               (ulonglong)*(byte *)((longlong)param_2 + 0x14)) * 0x100000001b3 ^
              (ulonglong)*(byte *)((longlong)param_2 + 0x15)) * 0x100000001b3 ^
             (ulonglong)*(byte *)((longlong)param_2 + 0x16)) * 0x100000001b3 ^
            (ulonglong)*(byte *)((longlong)param_2 + 0x17)) * 0x100000001b3;
    puVar1 = *(undefined8 **)
              (*(longlong *)(param_1 + 6) + 8 + (uVar6 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
    if (puVar1 == puVar7) {
LAB_14017a167:
      if (*(longlong *)(param_1 + 4) == 0x2e8ba2e8ba2e8ba) {
                    /* WARNING: Subroutine does not return */
        FUN_14028c2e0("unordered_map/set too long");
      }
      puVar4 = (undefined8 *)FUN_14028af20(0x58);
      puVar4[2] = param_2[2];
      puVar4[10] = 0;
      puVar1 = (undefined8 *)param_2[10];
      if (puVar1 != (undefined8 *)0x0) {
        uVar5 = (**(code **)*puVar1)(puVar1,puVar4 + 3);
        puVar4[10] = uVar5;
      }
      fVar8 = (float)(*(longlong *)(param_1 + 4) + 1) / (float)*(ulonglong *)(param_1 + 0xe);
      if (*param_1 <= fVar8 && fVar8 != *param_1) {
        FUN_14017ac20(param_1);
        puVar7 = *(undefined8 **)(param_1 + 2);
        puVar1 = *(undefined8 **)
                  (*(longlong *)(param_1 + 6) + 8 + (uVar6 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
        if (puVar1 != puVar7) {
          lVar2 = puVar1[2];
          puVar7 = puVar1;
          while (puVar4[2] != lVar2) {
            if (puVar7 == *(undefined8 **)
                           (*(longlong *)(param_1 + 6) +
                           (uVar6 & *(ulonglong *)(param_1 + 0xc)) * 0x10)) goto LAB_14017a24a;
            puVar7 = (undefined8 *)puVar7[1];
            lVar2 = puVar7[2];
          }
          puVar7 = (undefined8 *)*puVar7;
        }
      }
LAB_14017a24a:
      puVar1 = (undefined8 *)puVar7[1];
      *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
      *puVar4 = puVar7;
      puVar4[1] = puVar1;
      *puVar1 = puVar4;
      puVar7[1] = puVar4;
      uVar6 = uVar6 & *(ulonglong *)(param_1 + 0xc);
      lVar2 = *(longlong *)(param_1 + 6);
      puVar3 = *(undefined8 **)(lVar2 + uVar6 * 0x10);
      if (puVar3 == *(undefined8 **)(param_1 + 2)) {
        *(undefined8 **)(lVar2 + uVar6 * 0x10) = puVar4;
LAB_14017a29b:
        *(undefined8 **)(lVar2 + 8 + uVar6 * 0x10) = puVar4;
      }
      else if (puVar3 == puVar7) {
        *(undefined8 **)(lVar2 + uVar6 * 0x10) = puVar4;
      }
      else if (*(undefined8 **)(lVar2 + 8 + uVar6 * 0x10) == puVar1) goto LAB_14017a29b;
    }
    else {
      lVar2 = puVar1[2];
      puVar7 = puVar1;
      while (param_2[2] != lVar2) {
        if (puVar7 == *(undefined8 **)
                       (*(longlong *)(param_1 + 6) + (uVar6 & *(ulonglong *)(param_1 + 0xc)) * 0x10)
           ) goto LAB_14017a167;
        puVar7 = (undefined8 *)puVar7[1];
        lVar2 = puVar7[2];
      }
    }
    param_2 = (undefined8 *)*param_2;
  } while( true );
}

