// Function: FUN_1400d7080
// Addr: 1400d7080
// Size: 949 bytes


void FUN_1400d7080(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  code *pcVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined1 *puVar12;
  longlong *plVar13;
  ulonglong uVar14;
  longlong local_res8;
  longlong local_res10;
  longlong *local_res18;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [24];
  
  puVar12 = auStack_58;
  *param_1 = &PTR_FUN_140486ef8;
  plVar4 = param_1 + 0x2c;
  puVar1 = (undefined8 *)*plVar4;
  for (puVar2 = (undefined8 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined8 *)*puVar2) {
    (**(code **)(*(longlong *)puVar2[3] + 0x10))();
  }
  if (param_1[0x2d] != 0) {
    plVar3 = (longlong *)*plVar4;
    if ((ulonglong)param_1[0x2d] < (ulonglong)param_1[0x32] >> 3) {
      plVar4 = (longlong *)*plVar3;
      if (plVar4 != plVar3) {
        local_res10 = param_1[0x2e];
        plVar5 = (longlong *)plVar4[1];
        lVar7 = (param_1[0x31] &
                (((((ulonglong)*(byte *)(plVar4 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar4 + 0x11)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar4 + 0x12)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)plVar4 + 0x13)) * 0x100000001b3) * 0x10;
        local_res18 = (longlong *)(local_res10 + 8 + lVar7);
        plVar13 = (longlong *)(lVar7 + local_res10);
        local_res8 = *(longlong *)(lVar7 + local_res10);
        plVar8 = (longlong *)*local_res18;
        plVar10 = plVar4;
LAB_1400d7190:
        plVar11 = (longlong *)*plVar10;
        thunk_FUN_14028af80(plVar10,0x20);
        param_1[0x2d] = param_1[0x2d] + -1;
        if (plVar10 != plVar8) goto code_r0x0001400d71af;
        plVar8 = plVar5;
        if ((longlong *)local_res8 == plVar4) {
          *plVar13 = (longlong)plVar3;
          plVar8 = plVar3;
        }
        *local_res18 = (longlong)plVar8;
        while (plVar11 != plVar3) {
          uVar14 = param_1[0x31] &
                   (((((ulonglong)*(byte *)(plVar11 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar11 + 0x11)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar11 + 0x12)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar11 + 0x13)) * 0x100000001b3;
          plVar4 = *(longlong **)(local_res10 + 8 + uVar14 * 0x10);
          plVar13 = (longlong *)(local_res10 + uVar14 * 0x10);
          plVar8 = plVar11;
          while( true ) {
            plVar11 = (longlong *)*plVar8;
            thunk_FUN_14028af80(plVar8,0x20);
            param_1[0x2d] = param_1[0x2d] + -1;
            if (plVar8 == plVar4) break;
            plVar8 = plVar11;
            if (plVar11 == plVar3) goto LAB_1400d71bb;
          }
          *plVar13 = (longlong)plVar3;
          *(longlong **)(local_res10 + 8 + uVar14 * 0x10) = plVar3;
        }
        goto LAB_1400d71bf;
      }
    }
    else {
      *(undefined8 *)plVar3[1] = 0;
      puVar1 = (undefined8 *)*plVar3;
      while (puVar1 != (undefined8 *)0x0) {
        puVar2 = (undefined8 *)*puVar1;
        thunk_FUN_14028af80(puVar1,0x20);
        puVar1 = puVar2;
      }
      *(longlong *)*plVar4 = *plVar4;
      *(longlong *)(*plVar4 + 8) = *plVar4;
      param_1[0x2d] = 0;
      local_res8 = *plVar4;
      FUN_14000f7d0(param_1[0x2e],param_1[0x2f],&local_res8);
    }
  }
LAB_1400d730e:
  thunk_FUN_14028af80(param_1[0x1e]);
  if ((longlong *)param_1[0x1b] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x1b] + 0x10))();
    param_1[0x1b] = 0;
  }
  if ((longlong *)param_1[0x1c] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x1c] + 0x10))();
    param_1[0x1c] = 0;
  }
  if ((longlong *)param_1[0x1d] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x1d] + 0x10))();
    param_1[0x1d] = 0;
  }
  lVar7 = param_1[0x33];
  if (lVar7 != 0) {
    lVar9 = lVar7;
    puVar12 = auStack_58;
    if ((0xfff < (ulonglong)(param_1[0x35] - lVar7)) &&
       (lVar9 = *(longlong *)(lVar7 + -8), puVar12 = auStack_58, 0x1f < (lVar7 - lVar9) - 8U)) {
      pcVar6 = (code *)swi(0x29);
      lVar9 = (*pcVar6)(5);
      puVar12 = auStack_50;
    }
    *(undefined8 *)(puVar12 + -8) = 0x1400d73be;
    thunk_FUN_14028af80(lVar9);
    param_1[0x33] = 0;
    param_1[0x34] = 0;
    param_1[0x35] = 0;
  }
  *(undefined8 *)(puVar12 + -8) = 0x1400d73df;
  FUN_14000d9e0(param_1 + 0x2e);
  *(undefined8 *)(puVar12 + -8) = 0x1400d73e7;
  FUN_14003de70(param_1 + 0x2c);
  *param_1 = &PTR_FUN_14048ba60;
  *(undefined8 *)(puVar12 + -8) = 0x1400d73fd;
  FUN_140017240(param_1 + 0x16);
  *(undefined8 *)(puVar12 + -8) = 0x1400d7409;
  FUN_14000d9e0(param_1 + 0x11);
  *(undefined8 *)(puVar12 + -8) = 0x1400d7412;
  FUN_140030c70(param_1 + 0xf);
  *(undefined8 *)(puVar12 + -8) = 0x1400d741b;
  FUN_14000d9e0(param_1 + 9);
  *(undefined8 *)(puVar12 + -8) = 0x1400d7424;
  FUN_140164020(param_1 + 7);
  FUN_1400ddab0(param_1 + 4);
  return;
code_r0x0001400d71af:
  plVar10 = plVar11;
  if (plVar11 == plVar3) goto code_r0x0001400d71b4;
  goto LAB_1400d7190;
code_r0x0001400d71b4:
  if ((longlong *)local_res8 == plVar4) {
LAB_1400d71bb:
    *plVar13 = (longlong)plVar11;
  }
LAB_1400d71bf:
  *plVar5 = (longlong)plVar11;
  plVar11[1] = (longlong)plVar5;
  goto LAB_1400d730e;
}

