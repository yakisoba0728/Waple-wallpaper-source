// Function: FUN_14034d190
// Addr: 14034d190
// Size: 283 bytes


void FUN_14034d190(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined1 *puVar9;
  
  lVar2 = *param_1;
  uVar5 = *(uint *)(param_1 + 7);
  uVar1 = *(uint *)(lVar2 + 0x298);
  lVar3 = *(longlong *)(lVar2 + 0x290);
  uVar4 = (int)param_1[5] + 1;
  uVar7 = uVar5;
  if (uVar5 <= uVar4) {
    uVar7 = uVar4;
  }
  do {
    uVar4 = *(uint *)((longlong)param_1 + 0x3c);
    uVar8 = uVar7;
    if (uVar7 <= uVar4) {
      iVar6 = (int)param_1[8];
      if (param_1[9] == 0) {
        do {
          uVar5 = iVar6 + uVar8;
          uVar7 = uVar5 & 0xffff;
          if (uVar7 < *(uint *)(lVar2 + 0x10)) {
            if (uVar7 != 0) goto LAB_14034d285;
          }
          else {
            if ((int)uVar5 < 0) {
              if (-1 < (int)(iVar6 + uVar4)) {
                uVar8 = -iVar6;
                goto LAB_14034d25c;
              }
            }
            else if (0xffff < (int)uVar5) break;
            if ((int)(iVar6 + uVar4) < 0x10000) break;
            uVar8 = 0x10000 - iVar6;
          }
LAB_14034d25c:
          uVar8 = uVar8 + 1;
        } while (uVar8 <= uVar4);
      }
      else {
        puVar9 = (undefined1 *)((ulonglong)((uVar7 - uVar5) * 2) + param_1[9]);
        if (puVar9 <= (undefined1 *)((ulonglong)uVar1 + lVar3)) {
          do {
            if ((CONCAT11(*puVar9,puVar9[1]) != 0) &&
               (uVar7 = (uint)CONCAT11(*puVar9,puVar9[1]) + iVar6 & 0xffff, uVar7 != 0)) {
LAB_14034d285:
              *(uint *)(param_1 + 5) = uVar8;
              *(uint *)((longlong)param_1 + 0x2c) = uVar7;
              return;
            }
            uVar8 = uVar8 + 1;
            puVar9 = puVar9 + 2;
          } while (uVar8 <= uVar4);
        }
      }
    }
    iVar6 = FUN_14034d2b0(param_1,*(int *)((longlong)param_1 + 0x34) + 1);
    if (iVar6 < 0) {
      *(undefined4 *)(param_1 + 5) = 0xffffffff;
      *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
      return;
    }
    uVar5 = *(uint *)(param_1 + 7);
    uVar7 = uVar5;
    if (uVar5 <= uVar8) {
      uVar7 = uVar8;
    }
  } while( true );
}

