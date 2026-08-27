// Function: FUN_14039bd30
// Addr: 14039bd30
// Size: 576 bytes


int * FUN_14039bd30(longlong *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  int *piVar8;
  uint uVar9;
  uint local_res8 [2];
  undefined4 local_res10 [2];
  longlong *local_res18;
  longlong *local_res20;
  uint local_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  int *piVar10;
  
  iVar5 = (**(code **)(*param_1 + 0x20))(param_1,local_res8,0);
  if (-1 < iVar5) {
    uVar6 = SUB168(ZEXT816(8) * ZEXT416(local_res8[0]),0);
    if (SUB168(ZEXT816(8) * ZEXT416(local_res8[0]),8) != 0) {
      uVar6 = 0xffffffffffffffff;
    }
    lVar7 = thunk_FUN_14028af20(uVar6);
    iVar5 = (**(code **)(*param_1 + 0x20))(param_1,local_res8,lVar7);
    if (-1 < iVar5) {
      piVar10 = (int *)0x0;
      piVar8 = piVar10;
      if (local_res8[0] != 0) {
        do {
          puVar1 = (undefined8 *)(lVar7 + (longlong)piVar10 * 8);
          plVar2 = (longlong *)*puVar1;
          iVar5 = (**(code **)(*plVar2 + 0x18))(plVar2,&local_50,local_res10);
          if ((-1 < iVar5) &&
             (plVar2 = (longlong *)*puVar1,
             iVar5 = (**(code **)(*plVar2 + 0x20))(plVar2,&local_res18), -1 < iVar5)) {
            iVar5 = (**(code **)(*local_res18 + 0x18))
                              (local_res18,local_50,local_res10[0],&local_res20);
            if ((-1 < iVar5) &&
               ((iVar5 = (**(code **)(*local_res20 + 0x28))(local_res20,&local_58), -1 < iVar5 &&
                (iVar5 = (**(code **)(*local_res20 + 0x18))
                                   (local_res20,&local_48,0,CONCAT44(uStack_54,local_58),&local_40),
                -1 < iVar5)))) {
              if ((local_58 == 0) ||
                 ((0x7fffffff < local_58 ||
                  (piVar8 = (int *)_calloc_base(1,0x30), piVar8 == (int *)0x0)))) {
LAB_14039bf36:
                piVar8 = (int *)&DAT_14045dd10;
              }
              else {
                *(undefined2 *)((longlong)piVar8 + 5) = 0;
                *(undefined1 *)((longlong)piVar8 + 7) = 0;
                *piVar8 = 0;
                *(undefined1 *)(piVar8 + 1) = 0;
                piVar8[2] = 0;
                piVar8[3] = 0;
                piVar8[4] = 0;
                piVar8[5] = 0;
                piVar8[6] = 0;
                piVar8[7] = 0;
                piVar8[8] = 0;
                piVar8[9] = 0;
                piVar8[10] = 0;
                piVar8[0xb] = 0;
                *piVar8 = 1;
                *(undefined1 *)(piVar8 + 1) = 1;
                piVar8[2] = 0;
                piVar8[3] = 0;
                *(undefined8 *)(piVar8 + 4) = local_48;
                piVar8[6] = local_58;
                piVar8[8] = 0;
                piVar8[9] = 0;
                piVar8[10] = 0;
                piVar8[0xb] = 0;
                piVar8[7] = 1;
                cVar4 = FUN_14040ed10(piVar8);
                if (cVar4 == '\0') {
                  if (*piVar8 != 0) {
                    LOCK();
                    iVar5 = *piVar8;
                    *piVar8 = *piVar8 + -1;
                    UNLOCK();
                    if (iVar5 == 1) {
                      *piVar8 = -0xdead;
                      lVar3 = *(longlong *)(piVar8 + 2);
                      if (lVar3 != 0) {
                        FUN_1403c3220(lVar3);
                        thunk_FUN_1402d9040(lVar3);
                        piVar8[2] = 0;
                        piVar8[3] = 0;
                      }
                      if (*(code **)(piVar8 + 10) != (code *)0x0) {
                        (**(code **)(piVar8 + 10))(*(undefined8 *)(piVar8 + 8));
                        piVar8[8] = 0;
                        piVar8[9] = 0;
                        piVar8[10] = 0;
                        piVar8[0xb] = 0;
                      }
                      thunk_FUN_1402d9040(piVar8);
                    }
                  }
                  goto LAB_14039bf36;
                }
              }
              (**(code **)(*local_res20 + 0x20))(local_res20,local_40);
              (**(code **)(*local_res18 + 0x10))();
              break;
            }
            (**(code **)(*local_res18 + 0x10))();
          }
          uVar9 = (int)piVar10 + 1;
          piVar10 = (int *)(ulonglong)uVar9;
          piVar8 = (int *)0x0;
        } while (uVar9 < local_res8[0]);
      }
      thunk_FUN_14028af80(lVar7);
      return piVar8;
    }
    thunk_FUN_14028af80(lVar7);
  }
  return (int *)0x0;
}

