// Function: FUN_14015a510
// Addr: 14015a510
// Size: 136 bytes


undefined8 * FUN_14015a510(float *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  float fVar12;
  undefined8 *local_38;
  undefined8 *local_30;
  
  puVar6 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar6 = (undefined8 *)*param_2;
  }
  uVar7 = 0;
  uVar11 = 0xcbf29ce484222325;
  if (param_2[2] != 0) {
    do {
      pbVar1 = (byte *)(uVar7 + (longlong)puVar6);
      uVar7 = uVar7 + 1;
      uVar11 = (uVar11 ^ *pbVar1) * 0x100000001b3;
    } while (uVar7 < (ulonglong)param_2[2]);
  }
  func_0x000140011170(param_1,&local_38,param_2,uVar11);
  puVar6 = local_30;
  if (local_30 == (undefined8 *)0x0) {
    if (*(longlong *)(param_1 + 4) == 0x492492492492492) {
                    /* WARNING: Subroutine does not return */
      FUN_14028c3b0("unordered_map/set too long");
    }
    puVar6 = (undefined8 *)func_0x00014028aff0(0x38);
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    uVar4 = param_2[1];
    puVar6[2] = *param_2;
    puVar6[3] = uVar4;
    uVar4 = param_2[3];
    puVar6[4] = param_2[2];
    puVar6[5] = uVar4;
    param_2[2] = 0;
    param_2[3] = 0xf;
    *(undefined1 *)param_2 = 0;
    *(undefined4 *)(puVar6 + 6) = 0;
    fVar12 = (float)(*(longlong *)(param_1 + 4) + 1) / (float)*(ulonglong *)(param_1 + 0xe);
    puVar10 = local_38;
    if (*param_1 <= fVar12 && fVar12 != *param_1) {
      func_0x00014015b7e0(param_1);
      puVar8 = *(undefined8 **)
                (*(longlong *)(param_1 + 6) + 8 + (uVar11 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
      puVar10 = *(undefined8 **)(param_1 + 2);
      if (puVar8 != *(undefined8 **)(param_1 + 2)) {
        lVar2 = puVar6[4];
        uVar7 = puVar6[5];
        puVar3 = *(undefined8 **)
                  (*(longlong *)(param_1 + 6) + (uVar11 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
        puVar10 = puVar8;
        while( true ) {
          plVar9 = puVar10 + 2;
          if (0xf < (ulonglong)puVar10[5]) {
            plVar9 = (longlong *)*plVar9;
          }
          if (uVar7 < 0x10) {
            puVar8 = puVar6 + 2;
          }
          else {
            puVar8 = (undefined8 *)puVar6[2];
          }
          if ((lVar2 == puVar10[4]) &&
             ((lVar2 == 0 || (iVar5 = func_0x0001404210c0(puVar8,plVar9,lVar2), iVar5 == 0))))
          break;
          if (puVar10 == puVar3) goto code_r0x00014015a6e3;
          puVar10 = (undefined8 *)puVar10[1];
        }
        puVar10 = (undefined8 *)*puVar10;
      }
    }
code_r0x00014015a6e3:
    puVar8 = (undefined8 *)puVar10[1];
    *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
    *puVar6 = puVar10;
    puVar6[1] = puVar8;
    *puVar8 = puVar6;
    puVar10[1] = puVar6;
    lVar2 = *(longlong *)(param_1 + 6);
    uVar11 = *(ulonglong *)(param_1 + 0xc) & uVar11;
    puVar3 = *(undefined8 **)(lVar2 + uVar11 * 0x10);
    if (puVar3 == *(undefined8 **)(param_1 + 2)) {
      *(undefined8 **)(lVar2 + uVar11 * 0x10) = puVar6;
    }
    else {
      if (puVar3 == puVar10) {
        *(undefined8 **)(lVar2 + uVar11 * 0x10) = puVar6;
        return puVar6 + 6;
      }
      if (*(undefined8 **)(lVar2 + 8 + uVar11 * 0x10) != puVar8)
      goto UNWIND_INFO_14015a6fe_UnwindCodes_31__OffsetInProlog;
    }
    *(undefined8 **)(lVar2 + 8 + uVar11 * 0x10) = puVar6;
  }
UNWIND_INFO_14015a6fe_UnwindCodes_31__OffsetInProlog:
  return puVar6 + 6;
}

