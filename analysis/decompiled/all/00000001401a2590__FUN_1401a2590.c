// Function: FUN_1401a2590
// Addr: 1401a2590
// Size: 593 bytes


void FUN_1401a2590(float *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  float fVar7;
  
  do {
    if (param_2 == param_3) {
      return;
    }
    puVar6 = *(undefined8 **)(param_1 + 2);
    uVar5 = (((((((((ulonglong)*(byte *)(param_2 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)param_2 + 0x11)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)param_2 + 0x12)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)param_2 + 0x13)) * 0x100000001b3 ^
               (ulonglong)*(byte *)((longlong)param_2 + 0x14)) * 0x100000001b3 ^
              (ulonglong)*(byte *)((longlong)param_2 + 0x15)) * 0x100000001b3 ^
             (ulonglong)*(byte *)((longlong)param_2 + 0x16)) * 0x100000001b3 ^
            (ulonglong)*(byte *)((longlong)param_2 + 0x17)) * 0x100000001b3;
    puVar4 = *(undefined8 **)
              (*(longlong *)(param_1 + 6) + 8 + (uVar5 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
    if (puVar4 == puVar6) {
LAB_1401a2687:
      if (*(longlong *)(param_1 + 4) == 0xaaaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
        FUN_14028c2e0("unordered_map/set too long");
      }
      puVar4 = (undefined8 *)FUN_14028af20(0x18);
      puVar4[2] = param_2[2];
      fVar7 = (float)(*(longlong *)(param_1 + 4) + 1) / (float)*(ulonglong *)(param_1 + 0xe);
      if (*param_1 <= fVar7 && fVar7 != *param_1) {
        FUN_1401a2820(param_1);
        puVar6 = *(undefined8 **)(param_1 + 2);
        puVar2 = *(undefined8 **)
                  (*(longlong *)(param_1 + 6) + 8 + (uVar5 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
        if (puVar2 != puVar6) {
          lVar1 = puVar2[2];
          puVar6 = puVar2;
          while (puVar4[2] != lVar1) {
            if (puVar6 == *(undefined8 **)
                           (*(longlong *)(param_1 + 6) +
                           (uVar5 & *(ulonglong *)(param_1 + 0xc)) * 0x10)) goto LAB_1401a2752;
            puVar6 = (undefined8 *)puVar6[1];
            lVar1 = puVar6[2];
          }
          puVar6 = (undefined8 *)*puVar6;
        }
      }
LAB_1401a2752:
      puVar2 = (undefined8 *)puVar6[1];
      *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
      *puVar4 = puVar6;
      puVar4[1] = puVar2;
      *puVar2 = puVar4;
      puVar6[1] = puVar4;
      uVar5 = uVar5 & *(ulonglong *)(param_1 + 0xc);
      lVar1 = *(longlong *)(param_1 + 6);
      puVar3 = *(undefined8 **)(lVar1 + uVar5 * 0x10);
      if (puVar3 == *(undefined8 **)(param_1 + 2)) {
        *(undefined8 **)(lVar1 + uVar5 * 0x10) = puVar4;
LAB_1401a27a3:
        *(undefined8 **)(lVar1 + 8 + uVar5 * 0x10) = puVar4;
      }
      else if (puVar3 == puVar6) {
        *(undefined8 **)(lVar1 + uVar5 * 0x10) = puVar4;
      }
      else if (*(undefined8 **)(lVar1 + 8 + uVar5 * 0x10) == puVar2) goto LAB_1401a27a3;
    }
    else {
      lVar1 = puVar4[2];
      puVar6 = puVar4;
      while (param_2[2] != lVar1) {
        if (puVar6 == *(undefined8 **)
                       (*(longlong *)(param_1 + 6) + (uVar5 & *(ulonglong *)(param_1 + 0xc)) * 0x10)
           ) goto LAB_1401a2687;
        puVar6 = (undefined8 *)puVar6[1];
        lVar1 = puVar6[2];
      }
    }
    param_2 = (undefined8 *)*param_2;
  } while( true );
}

