// Function: FUN_140153f70
// Addr: 140153f70
// Size: 1285 bytes


void FUN_140153f70(undefined8 *param_1)

{
  byte *pbVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong *local_res8;
  undefined8 *local_res10;
  longlong *local_res18;
  longlong *local_res20;
  
  *param_1 = &PTR_FUN_14048b710;
  plVar12 = param_1 + 0x60;
  plVar2 = (longlong *)param_1[0x61];
  for (plVar7 = (longlong *)*plVar12; plVar7 != plVar2; plVar7 = plVar7 + 7) {
    if ((*(uint *)(*plVar7 + 0x1f8) >> 10 & 1) != 0) {
      FUN_140150ac0(param_1[0x19] + 0x1630);
    }
  }
  lVar9 = param_1[0x61];
  lVar8 = *plVar12;
  if (lVar8 != lVar9) {
    do {
      FUN_14015c210(lVar8 + 0x20);
      FUN_1400dda40(lVar8 + 8);
      lVar8 = lVar8 + 0x38;
    } while (lVar8 != lVar9);
    param_1[0x61] = *plVar12;
  }
  FUN_140176f70(param_1[0x19] + 0x1708,param_1,0);
  puVar11 = (undefined8 *)param_1[0x4f];
  for (puVar3 = (undefined8 *)*puVar11; puVar3 != puVar11; puVar3 = (undefined8 *)*puVar3) {
    lVar9 = *(longlong *)(puVar3[3] + 8);
    if (lVar9 != 0) {
      FUN_140017240(lVar9 + 0x38);
      thunk_FUN_14028af80(lVar9,0x58);
    }
    lVar9 = puVar3[3];
    if (lVar9 != 0) {
      FUN_140017240(lVar9 + 0x10);
      thunk_FUN_14028af80(lVar9,0x38);
    }
  }
  FUN_14015a390(param_1 + 0x4e);
  puVar11 = (undefined8 *)param_1[10];
  plVar12 = param_1 + 10;
  for (puVar3 = (undefined8 *)*puVar11; puVar3 != puVar11; puVar3 = (undefined8 *)*puVar3) {
    lVar9 = param_1[6];
    lVar8 = param_1[7];
    if (lVar9 != lVar8) {
      do {
        plVar2 = *(longlong **)(lVar9 + 0x38);
        local_res8 = (longlong *)CONCAT71(local_res8._1_7_,1);
        local_res10 = puVar3 + 6;
        if (plVar2 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_14028c2c0();
        }
        (**(code **)(*plVar2 + 0x10))(plVar2,&local_res10,&local_res8);
        lVar9 = lVar9 + 0x40;
      } while (lVar9 != lVar8);
    }
  }
  if (param_1[0xb] != 0) {
    plVar2 = (longlong *)*plVar12;
    if ((ulonglong)param_1[0xb] < (ulonglong)param_1[0x10] >> 3) {
      plVar12 = (longlong *)*plVar2;
      if (plVar12 != plVar2) {
        puVar11 = plVar12 + 2;
        local_res10 = (undefined8 *)param_1[0xc];
        local_res8 = (longlong *)plVar12[1];
        if (0xf < (ulonglong)plVar12[5]) {
          puVar11 = (undefined8 *)*puVar11;
        }
        uVar5 = 0;
        uVar6 = 0xcbf29ce484222325;
        if (plVar12[4] != 0) {
          do {
            pbVar1 = (byte *)((longlong)puVar11 + uVar5);
            uVar5 = uVar5 + 1;
            uVar6 = (uVar6 ^ *pbVar1) * 0x100000001b3;
          } while (uVar5 < (ulonglong)plVar12[4]);
        }
        uVar6 = param_1[0xf] & uVar6;
        lVar9 = local_res10[uVar6 * 2];
        plVar7 = local_res10 + uVar6 * 2;
        local_res20 = local_res10 + uVar6 * 2 + 1;
        local_res18 = (longlong *)*local_res20;
        plVar4 = plVar12;
LAB_1401541e0:
        plVar10 = (longlong *)*plVar4;
        FUN_140017240(plVar4 + 0xd);
        FUN_140017240(plVar4 + 2);
        thunk_FUN_14028af80(plVar4,0x88);
        param_1[0xb] = param_1[0xb] + -1;
        if (plVar4 != local_res18) goto code_r0x000140154219;
        plVar4 = local_res8;
        if ((longlong *)lVar9 == plVar12) {
          *plVar7 = (longlong)plVar2;
          plVar4 = plVar2;
        }
        *local_res20 = (longlong)plVar4;
        while (plVar10 != plVar2) {
          plVar12 = plVar10 + 2;
          if (0xf < (ulonglong)plVar10[5]) {
            plVar12 = (longlong *)*plVar12;
          }
          uVar6 = 0;
          uVar5 = 0xcbf29ce484222325;
          if (plVar10[4] != 0) {
            do {
              pbVar1 = (byte *)((longlong)plVar12 + uVar6);
              uVar6 = uVar6 + 1;
              uVar5 = (uVar5 ^ *pbVar1) * 0x100000001b3;
            } while (uVar6 < (ulonglong)plVar10[4]);
          }
          uVar5 = param_1[0xf] & uVar5;
          plVar7 = (longlong *)local_res10[uVar5 * 2 + 1];
          plVar12 = local_res10 + uVar5 * 2;
          plVar4 = plVar10;
          while( true ) {
            plVar10 = (longlong *)*plVar4;
            FUN_140017240(plVar4 + 0xd);
            FUN_140017240(plVar4 + 2);
            thunk_FUN_14028af80(plVar4,0x88);
            param_1[0xb] = param_1[0xb] + -1;
            if (plVar4 == plVar7) break;
            plVar4 = plVar10;
            if (plVar10 == plVar2) {
              *plVar12 = (longlong)plVar10;
              goto LAB_140154227;
            }
          }
          *plVar12 = (longlong)plVar2;
          local_res10[uVar5 * 2 + 1] = plVar2;
        }
        goto LAB_140154227;
      }
    }
    else {
      *(undefined8 *)plVar2[1] = 0;
      puVar11 = (undefined8 *)*plVar2;
      while (puVar11 != (undefined8 *)0x0) {
        puVar3 = (undefined8 *)*puVar11;
        FUN_140017240(puVar11 + 0xd);
        FUN_140017240(puVar11 + 2);
        thunk_FUN_14028af80(puVar11,0x88);
        puVar11 = puVar3;
      }
      *(longlong *)*plVar12 = *plVar12;
      *(longlong *)(*plVar12 + 8) = *plVar12;
      param_1[0xb] = 0;
      local_res8 = (longlong *)*plVar12;
      FUN_14000f7d0(param_1[0xc],param_1[0xd],&local_res8);
    }
  }
LAB_1401543b6:
  puVar11 = (undefined8 *)param_1[0x3d];
  if (puVar11 != (undefined8 *)0x0) {
    (**(code **)*puVar11)(puVar11,1);
  }
  FUN_14015a2d0(param_1 + 0x60);
  FUN_14000d9e0(param_1 + 0x5a);
  FUN_1400d2120(param_1 + 0x58);
  FUN_14000d9e0(param_1 + 0x51);
  FUN_14003de70(param_1 + 0x4f);
  FUN_140085440(param_1 + 0x49);
  FUN_140085440(param_1 + 0x44);
  FUN_140017240(param_1 + 0x40);
  FUN_14000d9e0(param_1 + 0x14);
  FUN_14015a700(param_1 + 0x12);
  FUN_14000d9e0(param_1 + 0xc);
  FUN_14015a780(param_1 + 10);
  FUN_1401a3b60(param_1);
  return;
code_r0x000140154219:
  plVar4 = plVar10;
  if (plVar10 == plVar2) goto code_r0x00014015421e;
  goto LAB_1401541e0;
code_r0x00014015421e:
  if ((longlong *)lVar9 == plVar12) {
    *plVar7 = (longlong)plVar10;
  }
LAB_140154227:
  *local_res8 = (longlong)plVar10;
  plVar10[1] = (longlong)local_res8;
  goto LAB_1401543b6;
}

