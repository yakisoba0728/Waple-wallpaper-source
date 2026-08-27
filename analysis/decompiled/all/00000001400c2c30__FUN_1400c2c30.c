// Function: FUN_1400c2c30
// Addr: 1400c2c30
// Size: 876 bytes


void FUN_1400c2c30(undefined8 param_1,int param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong *plVar14;
  int iVar15;
  longlong local_40;
  
  plVar14 = (longlong *)(*(longlong *)ThreadLocalStoragePointer + 0x2a0);
  if (*plVar14 != 0) {
    do {
      if (param_3 != 0) {
        if (*(longlong **)(param_3 + 0x38) == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_14028c2c0();
        }
        (**(code **)(**(longlong **)(param_3 + 0x38) + 0x10))();
      }
      lVar12 = *plVar14;
      if (*(longlong *)(lVar12 + 0x10) - *(longlong *)(lVar12 + 8) >> 3 == 0) {
        return;
      }
      bVar6 = false;
      iVar15 = 0;
      do {
        plVar2 = *(longlong **)(*(longlong *)(lVar12 + 8) + (longlong)iVar15 * 8);
        if (param_2 <= (int)plVar2[4]) {
          if (param_3 != 0) {
            plVar3 = (longlong *)*plVar2;
            if ((plVar3 == (longlong *)0x0) ||
               (((char)plVar2[1] != '\0' && ((char)plVar3[0x17] != '\0')))) goto LAB_1400c2f71;
            iVar8 = FUN_140290d80(plVar3 + 4);
            if (iVar8 != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_140290d30(5);
            }
            if (*(int *)((longlong)plVar3 + 0x6c) == 0x7fffffff) {
              *(undefined4 *)((longlong)plVar3 + 0x6c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
              FUN_140290d30(6);
            }
            cVar7 = (**(code **)(*plVar3 + 0x18))(plVar3);
            if (cVar7 != '\0') {
LAB_1400c2eae:
              FUN_140290ea0(plVar3 + 4);
              Sleep(0);
              bVar6 = true;
              goto LAB_1400c2f19;
            }
            FUN_140014df0(&local_40);
            lVar12 = local_40;
            iVar8 = *(int *)((longlong)plVar3 + 0xbc);
            while (iVar8 == 0) {
              do {
                lVar9 = FUN_1402913f0();
                lVar10 = FUN_1402913d0();
                if (lVar9 == 10000000) {
                  lVar10 = lVar10 * 100;
                }
                else {
                  if (lVar9 == 24000000) {
                    lVar11 = (lVar10 * 2) / 3;
                    lVar10 = lVar10 * 0x29;
                  }
                  else {
                    lVar11 = ((lVar10 % lVar9) * 1000000000) / lVar9;
                    lVar10 = (lVar10 / lVar9) * 1000000000;
                  }
                  lVar10 = lVar11 + lVar10;
                }
                if ((lVar12 == lVar10) || (lVar12 < lVar10)) {
                  if (*(int *)((longlong)plVar3 + 0xbc) == 0) goto LAB_1400c2eae;
                  goto LAB_1400c2e4a;
                }
                lVar10 = lVar12 - lVar10;
                if (lVar10 < 0x4e94914f0001) {
                  uVar13 = lVar10 / 1000000;
                  if ((longlong)(uVar13 * 1000000) < lVar10) {
                    uVar13 = uVar13 + 1;
                  }
                }
                else {
                  uVar13 = 86400000;
                }
                iVar8 = FUN_140291fe0(plVar3 + 0xe,plVar3 + 4,uVar13 & 0xffffffff);
              } while (iVar8 != 0);
              iVar8 = *(int *)((longlong)plVar3 + 0xbc);
            }
LAB_1400c2e4a:
            FUN_140290ea0(plVar3 + 4);
          }
          plVar3 = (longlong *)*plVar2;
          if ((plVar3 == (longlong *)0x0) ||
             (((char)plVar2[1] != '\0' && ((char)plVar3[0x17] != '\0')))) {
LAB_1400c2f71:
                    /* WARNING: Subroutine does not return */
            FUN_14009c000(4);
          }
          (**(code **)(*plVar3 + 8))();
          puVar4 = (undefined8 *)*plVar2;
          if (puVar4 != (undefined8 *)0x0) {
            LOCK();
            piVar1 = (int *)(puVar4 + 1);
            iVar8 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              puVar5 = (undefined8 *)puVar4[0x19];
              if (puVar5 == (undefined8 *)0x0) {
                (**(code **)*puVar4)(puVar4,1);
              }
              else {
                (**(code **)*puVar5)(puVar5,puVar4);
              }
            }
          }
          thunk_FUN_14028af80(plVar2,0x28);
          lVar10 = *plVar14;
          lVar9 = *(longlong *)(lVar10 + 8) + (longlong)iVar15 * 8;
          lVar12 = lVar9 + 8;
          FUN_1404210f0(lVar9,lVar12,*(longlong *)(lVar10 + 0x10) - lVar12);
          *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + -8;
          iVar15 = iVar15 + -1;
        }
LAB_1400c2f19:
        lVar12 = *plVar14;
        iVar15 = iVar15 + 1;
      } while ((ulonglong)(longlong)iVar15 <
               (ulonglong)(*(longlong *)(lVar12 + 0x10) - *(longlong *)(lVar12 + 8) >> 3));
    } while (bVar6);
  }
  return;
}

