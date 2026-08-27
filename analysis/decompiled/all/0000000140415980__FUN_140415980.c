// Function: FUN_140415980
// Addr: 140415980
// Size: 626 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_140415980(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  uint uVar8;
  int *piVar10;
  uint uVar11;
  undefined1 auStack_198 [32];
  undefined8 local_178;
  uint local_168 [4];
  int local_158 [64];
  ulonglong local_58;
  ulonglong uVar9;
  
  local_58 = DAT_1404dc040 ^ (ulonglong)auStack_198;
  if (*(code **)(param_1 + 0x20) == (code *)0x0) {
    puVar7 = &DAT_14045dd10;
  }
  else {
    puVar7 = (undefined8 *)(**(code **)(param_1 + 0x20))(param_1,0,*(undefined8 *)(param_1 + 0x28));
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = &DAT_14045dd10;
    }
    else if (puVar7 != &DAT_14045dd10) {
      return puVar7;
    }
  }
  uVar11 = 0;
  uVar2 = 0;
  if (*(code **)(param_1 + 0x38) != (code *)0x0) {
    local_178 = *(undefined8 *)(param_1 + 0x40);
    uVar2 = (**(code **)(param_1 + 0x38))(param_1,0,0,0);
  }
  if (uVar2 != 0) {
    local_168[0] = 0x40;
    puVar3 = (undefined4 *)_calloc_base(1,0x30);
    if (puVar3 == (undefined4 *)0x0) {
      puVar4 = &DAT_1404def30;
    }
    else {
      *puVar3 = 1;
      *(undefined1 *)(puVar3 + 1) = 1;
      *(undefined8 *)(puVar3 + 2) = 0;
      *(undefined1 *)(puVar3 + 4) = 1;
      *(undefined2 *)((longlong)puVar3 + 0x12) = 0;
      *(undefined8 *)(puVar3 + 5) = 0;
      *(undefined8 *)(puVar3 + 7) = 0;
      *(undefined8 *)(puVar3 + 10) = 0;
      puVar4 = (undefined *)FUN_140415600(&LAB_14039cb10,puVar3,FUN_14039c150);
      if (puVar4[4] != '\0') {
        if (*(code **)(puVar4 + 0x48) != (code *)0x0) {
          (**(code **)(puVar4 + 0x48))(*(undefined8 *)(puVar4 + 0x40));
        }
        *(code **)(puVar4 + 0x38) = FUN_14039c890;
        *(undefined4 **)(puVar4 + 0x40) = puVar3;
        *(undefined8 *)(puVar4 + 0x48) = 0;
      }
    }
    if (uVar2 != 0) {
      do {
        uVar9 = 0;
        if (*(code **)(param_1 + 0x38) == (code *)0x0) {
          local_168[0] = 0;
          break;
        }
        local_178 = *(undefined8 *)(param_1 + 0x40);
        (**(code **)(param_1 + 0x38))(param_1,uVar11,local_168,local_158);
        uVar5 = local_168[0];
        if (local_168[0] == 0) break;
        do {
          iVar6 = local_158[uVar9];
          if (iVar6 != 0) {
            if (*(code **)(param_1 + 0x20) == (code *)0x0) {
              piVar10 = (int *)&DAT_14045dd10;
            }
            else {
              piVar10 = (int *)(**(code **)(param_1 + 0x20))
                                         (param_1,iVar6,*(undefined8 *)(param_1 + 0x28));
              iVar6 = local_158[uVar9];
              if (piVar10 == (int *)0x0) {
                piVar10 = (int *)&DAT_14045dd10;
              }
            }
            FUN_140414fb0(puVar4,iVar6,piVar10);
            uVar5 = local_168[0];
            if (*piVar10 != 0) {
              LOCK();
              iVar6 = *piVar10;
              *piVar10 = *piVar10 + -1;
              UNLOCK();
              if (iVar6 == 1) {
                *piVar10 = -0xdead;
                lVar1 = *(longlong *)(piVar10 + 2);
                if (lVar1 != 0) {
                  FUN_1403c3220(lVar1);
                  thunk_FUN_1402d9040(lVar1);
                  piVar10[2] = 0;
                  piVar10[3] = 0;
                }
                if (*(code **)(piVar10 + 10) != (code *)0x0) {
                  (**(code **)(piVar10 + 10))(*(undefined8 *)(piVar10 + 8));
                  piVar10[8] = 0;
                  piVar10[9] = 0;
                  piVar10[10] = 0;
                  piVar10[0xb] = 0;
                }
                thunk_FUN_1402d9040(piVar10);
                uVar5 = local_168[0];
              }
            }
          }
          uVar8 = (int)uVar9 + 1;
          uVar9 = (ulonglong)uVar8;
        } while (uVar8 < uVar5);
        uVar11 = uVar11 + uVar5;
      } while (uVar11 < uVar2);
    }
    puVar7 = (undefined8 *)FUN_140415980(puVar4);
    FUN_140415810(puVar4);
  }
  return puVar7;
}

