// Function: FUN_1402efcc0
// Addr: 1402efcc0
// Size: 62 bytes


undefined8 FUN_1402efcc0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  if (param_1 == (longlong *)0x0) {
    return 0x21;
  }
  *(int *)(param_1 + 0x2e) = (int)param_1[0x2e] + -1;
  if ((int)param_1[0x2e] < 1) {
    lVar2 = *param_1;
    uVar11 = 0;
    uVar10 = uVar11;
    if (*(int *)((longlong)param_1 + 0x14) != 0) {
      do {
        puVar3 = (undefined8 *)param_1[uVar10 + 3];
        uVar6 = uVar11;
        do {
          uVar7 = uVar6 + 1;
          if (*(char *)(*(longlong *)((byte *)*puVar3 + 8) + uVar6) != (&UNK_14043694c)[uVar6])
          goto code_r0x0001402efd66;
          uVar6 = uVar7;
        } while (uVar7 != 7);
        if ((*(byte *)*puVar3 & 1) != 0) {
          lVar4 = puVar3[4];
          while (lVar4 != 0) {
            func_0x0001402efb50(*(undefined8 *)(lVar4 + 0x10));
            lVar4 = puVar3[4];
          }
        }
code_r0x0001402efd66:
        uVar8 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar8;
      } while (uVar8 < *(uint *)((longlong)param_1 + 0x14));
      uVar8 = 0;
      if (*(uint *)((longlong)param_1 + 0x14) != 0) {
        do {
          puVar3 = (undefined8 *)param_1[uVar11 + 3];
          if ((*(byte *)*puVar3 & 1) != 0) {
            lVar4 = puVar3[4];
            while (lVar4 != 0) {
              func_0x0001402efb50(*(undefined8 *)(lVar4 + 0x10));
              lVar4 = puVar3[4];
            }
          }
          uVar8 = *(uint *)((longlong)param_1 + 0x14);
          uVar9 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar9;
        } while (uVar9 < uVar8);
      }
      while (uVar8 != 0) {
        lVar4 = param_1[(ulonglong)(uVar8 - 1) + 3];
        if (lVar4 != 0) {
          plVar5 = param_1 + 3;
          plVar1 = plVar5 + uVar8;
          if (plVar5 < plVar1) {
UNWIND_INFO_1402efd85_UnwindCodes_51__UnwindOpCode:
            if (*plVar5 != lVar4) goto code_r0x0001402efdf5;
            *(uint *)((longlong)param_1 + 0x14) = uVar8 - 1;
            for (; plVar5 < plVar1 + -1; plVar5 = plVar5 + 1) {
              *plVar5 = plVar5[1];
            }
            plVar1[-1] = 0;
            func_0x0001402ef460(lVar4);
          }
        }
code_r0x0001402efe2e:
        uVar8 = *(uint *)((longlong)param_1 + 0x14);
      }
    }
    (**(code **)(lVar2 + 0x10))(lVar2,param_1);
  }
  return 0;
code_r0x0001402efdf5:
  plVar5 = plVar5 + 1;
  if (plVar1 <= plVar5) goto code_r0x0001402efe2e;
  goto UNWIND_INFO_1402efd85_UnwindCodes_51__UnwindOpCode;
}

