// Function: FUN_14026c1c0
// Addr: 14026c1c0
// Size: 536 bytes


void FUN_14026c1c0(float *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  float fVar9;
  
  do {
    if (param_2 == param_3) {
      return;
    }
    puVar7 = *(undefined8 **)(param_1 + 2);
    uVar8 = (((((ulonglong)*(byte *)(param_2 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
              (ulonglong)*(byte *)((longlong)param_2 + 0x11)) * 0x100000001b3 ^
             (ulonglong)*(byte *)((longlong)param_2 + 0x12)) * 0x100000001b3 ^
            (ulonglong)*(byte *)((longlong)param_2 + 0x13)) * 0x100000001b3;
    puVar6 = *(undefined8 **)
              (*(longlong *)(param_1 + 6) + 8 + (uVar8 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
    if (puVar6 == puVar7) {
LAB_14026c286:
      if (*(longlong *)(param_1 + 4) == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
        FUN_14028c2e0("unordered_map/set too long");
      }
      puVar6 = (undefined8 *)FUN_14028af20(0x20);
      uVar5 = param_2[3];
      puVar6[2] = param_2[2];
      puVar6[3] = uVar5;
      fVar9 = (float)(*(longlong *)(param_1 + 4) + 1) / (float)*(ulonglong *)(param_1 + 0xe);
      if (*param_1 <= fVar9 && fVar9 != *param_1) {
        FUN_14026b980(param_1);
        puVar7 = *(undefined8 **)(param_1 + 2);
        puVar2 = *(undefined8 **)
                  (*(longlong *)(param_1 + 6) + 8 + (uVar8 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
        if (puVar2 != puVar7) {
          iVar1 = *(int *)(puVar2 + 2);
          puVar7 = puVar2;
          while (*(int *)(puVar6 + 2) != iVar1) {
            if (puVar7 == *(undefined8 **)
                           (*(longlong *)(param_1 + 6) +
                           (uVar8 & *(ulonglong *)(param_1 + 0xc)) * 0x10)) goto LAB_14026c348;
            puVar7 = (undefined8 *)puVar7[1];
            iVar1 = *(int *)(puVar7 + 2);
          }
          puVar7 = (undefined8 *)*puVar7;
        }
      }
LAB_14026c348:
      puVar2 = (undefined8 *)puVar7[1];
      *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
      *puVar6 = puVar7;
      puVar6[1] = puVar2;
      *puVar2 = puVar6;
      puVar7[1] = puVar6;
      uVar8 = uVar8 & *(ulonglong *)(param_1 + 0xc);
      lVar3 = *(longlong *)(param_1 + 6);
      puVar4 = *(undefined8 **)(lVar3 + uVar8 * 0x10);
      if (puVar4 == *(undefined8 **)(param_1 + 2)) {
        *(undefined8 **)(lVar3 + uVar8 * 0x10) = puVar6;
LAB_14026c399:
        *(undefined8 **)(lVar3 + 8 + uVar8 * 0x10) = puVar6;
      }
      else if (puVar4 == puVar7) {
        *(undefined8 **)(lVar3 + uVar8 * 0x10) = puVar6;
      }
      else if (*(undefined8 **)(lVar3 + 8 + uVar8 * 0x10) == puVar2) goto LAB_14026c399;
    }
    else {
      iVar1 = *(int *)(puVar6 + 2);
      puVar7 = puVar6;
      while (*(int *)(param_2 + 2) != iVar1) {
        if (puVar7 == *(undefined8 **)
                       (*(longlong *)(param_1 + 6) + (uVar8 & *(ulonglong *)(param_1 + 0xc)) * 0x10)
           ) goto LAB_14026c286;
        puVar7 = (undefined8 *)puVar7[1];
        iVar1 = *(int *)(puVar7 + 2);
      }
    }
    param_2 = (undefined8 *)*param_2;
  } while( true );
}

