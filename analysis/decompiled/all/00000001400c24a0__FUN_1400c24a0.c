// Function: FUN_1400c24a0
// Addr: 1400c24a0
// Size: 1337 bytes


void FUN_1400c24a0(longlong param_1)

{
  int *piVar1;
  DWORD DVar2;
  DWORD *pDVar3;
  undefined8 *puVar4;
  DWORD *pDVar5;
  DWORD *pDVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  int iVar12;
  DWORD DVar13;
  undefined8 uVar14;
  DWORD *pDVar15;
  DWORD *pDVar16;
  longlong *plVar17;
  longlong *plVar18;
  DWORD local_res8 [2];
  longlong local_f8 [7];
  longlong *local_c0;
  longlong local_b8 [7];
  longlong *local_80;
  undefined1 local_78 [80];
  
  local_res8[0] = GetCurrentThreadId();
  iVar12 = FUN_140290d80(param_1 + 0x138);
  if (iVar12 == 0) {
    if (*(int *)(param_1 + 0x184) == 0x7fffffff) {
      *(undefined4 *)(param_1 + 0x184) = 0x7ffffffe;
    }
    else {
      FUN_1400ca780(param_1 + 0x188,local_res8);
      if (*(longlong *)(param_1 + 0x198) == 0) {
        if (*(HMODULE *)(param_1 + 0xaf8) != (HMODULE)0x0) {
          FreeLibrary(*(HMODULE *)(param_1 + 0xaf8));
        }
        *(undefined8 *)(param_1 + 0xaf8) = 0;
        *(undefined8 *)(param_1 + 0xb10) = 0;
        *(undefined8 *)(param_1 + 0xb18) = 0;
        *(undefined8 *)(param_1 + 0xb20) = 0;
        *(undefined8 *)(param_1 + 0xb28) = 0;
        *(undefined8 *)(param_1 + 0xb40) = 0;
        *(undefined8 *)(param_1 + 0xb48) = 0;
        *(undefined8 *)(param_1 + 0xb50) = 0;
        *(undefined8 *)(param_1 + 0xb58) = 0;
      }
      FUN_1400ca780(param_1 + 0x1c8,local_res8);
      if (*(longlong *)(param_1 + 0x1d8) == 0) {
        if (*(longlong **)(param_1 + 0xb30) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(param_1 + 0xb30) + 0x10))();
        }
        *(undefined8 *)(param_1 + 0xb30) = 0;
        if (*(HMODULE *)(param_1 + 0xb00) != (HMODULE)0x0) {
          FreeLibrary(*(HMODULE *)(param_1 + 0xb00));
        }
        *(undefined8 *)(param_1 + 0xb00) = 0;
      }
      FUN_1400ca780(param_1 + 0x208,local_res8);
      FUN_140290ea0(param_1 + 0x138);
      iVar12 = FUN_140290d80(param_1 + 0x310);
      if (iVar12 != 0) goto LAB_1400c29b7;
      if (*(int *)(param_1 + 0x35c) != 0x7fffffff) {
        DVar13 = GetCurrentThreadId();
        pDVar3 = *(DWORD **)(param_1 + 0x268);
        for (pDVar15 = *(DWORD **)(param_1 + 0x260); pDVar15 != pDVar3; pDVar15 = pDVar15 + 0x24) {
          DVar2 = *pDVar15;
          puVar4 = *(undefined8 **)(pDVar15 + 0x12);
          local_c0 = (longlong *)0x0;
          if (puVar4 != (undefined8 *)0x0) {
            local_c0 = (longlong *)(**(code **)*puVar4)(puVar4,local_f8);
          }
          puVar4 = *(undefined8 **)(pDVar15 + 0x22);
          local_80 = (longlong *)0x0;
          if (puVar4 != (undefined8 *)0x0) {
            local_80 = (longlong *)(**(code **)*puVar4)(puVar4,local_b8);
          }
          if (DVar2 == DVar13) {
            if (local_80 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_14028c2c0();
            }
            (**(code **)(*local_80 + 0x10))();
          }
          if (local_80 != (longlong *)0x0) {
            (**(code **)(*local_80 + 0x20))(local_80,local_80 != local_b8);
            local_80 = (longlong *)0x0;
          }
          if (local_c0 != (longlong *)0x0) {
            (**(code **)(*local_c0 + 0x20))(local_c0,local_c0 != local_f8);
          }
        }
        pDVar15 = *(DWORD **)(param_1 + 0x260);
        pDVar3 = *(DWORD **)(param_1 + 0x268);
        if (pDVar15 != pDVar3) {
          do {
            if (*pDVar15 == DVar13) break;
            pDVar15 = pDVar15 + 0x24;
          } while (pDVar15 != pDVar3);
          pDVar16 = pDVar15;
          if (pDVar15 != pDVar3) {
            while (pDVar6 = pDVar16, pDVar16 = pDVar6 + 0x24, pDVar16 != pDVar3) {
              if (*pDVar16 != DVar13) {
                *pDVar15 = *pDVar16;
                pDVar15[1] = pDVar6[0x25];
                pDVar15[2] = pDVar6[0x26];
                pDVar15[3] = pDVar6[0x27];
                if (pDVar15 != pDVar16) {
                  pDVar5 = *(DWORD **)(pDVar15 + 0x12);
                  if (pDVar5 != (DWORD *)0x0) {
                    (**(code **)(*(longlong *)pDVar5 + 0x20))(pDVar5,pDVar5 != pDVar15 + 4);
                    pDVar15[0x12] = 0;
                    pDVar15[0x13] = 0;
                  }
                  FUN_140037830(pDVar15 + 4,pDVar6 + 0x28);
                  pDVar5 = *(DWORD **)(pDVar15 + 0x22);
                  if (pDVar5 != (DWORD *)0x0) {
                    (**(code **)(*(longlong *)pDVar5 + 0x20))(pDVar5,pDVar5 != pDVar15 + 0x14);
                    pDVar15[0x22] = 0;
                    pDVar15[0x23] = 0;
                  }
                  FUN_140037830(pDVar15 + 0x14,pDVar6 + 0x38);
                }
                pDVar15 = pDVar15 + 0x24;
              }
            }
          }
        }
        pDVar3 = *(DWORD **)(param_1 + 0x268);
        pDVar16 = pDVar15;
        if (pDVar15 != pDVar3) {
          do {
            pDVar6 = *(DWORD **)(pDVar16 + 0x22);
            if (pDVar6 != (DWORD *)0x0) {
              (**(code **)(*(longlong *)pDVar6 + 0x20))(pDVar6,pDVar6 != pDVar16 + 0x14);
              pDVar16[0x22] = 0;
              pDVar16[0x23] = 0;
            }
            pDVar6 = *(DWORD **)(pDVar16 + 0x12);
            if (pDVar6 != (DWORD *)0x0) {
              (**(code **)(*(longlong *)pDVar6 + 0x20))(pDVar6,pDVar6 != pDVar16 + 4);
              pDVar16[0x12] = 0;
              pDVar16[0x13] = 0;
            }
            pDVar16 = pDVar16 + 0x24;
          } while (pDVar16 != pDVar3);
          *(DWORD **)(param_1 + 0x268) = pDVar15;
        }
        uVar14 = FUN_14009c1a0(local_78,param_1 + 0x278);
        FUN_1400c93d0(*(undefined8 *)(param_1 + 0x260),*(undefined8 *)(param_1 + 0x268),uVar14);
        FUN_140290ea0(param_1 + 0x310);
        plVar18 = (longlong *)(*(longlong *)ThreadLocalStoragePointer + 0x2a0);
        lVar7 = *plVar18;
        if (lVar7 != 0) {
          plVar8 = *(longlong **)(lVar7 + 0x10);
          for (plVar17 = *(longlong **)(lVar7 + 8); plVar17 != plVar8; plVar17 = plVar17 + 1) {
            plVar9 = (longlong *)*plVar17;
            plVar10 = (longlong *)*plVar9;
            if ((plVar10 == (longlong *)0x0) ||
               (((char)plVar9[1] != '\0' && ((char)plVar10[0x17] != '\0')))) {
                    /* WARNING: Subroutine does not return */
              FUN_14009c000(4);
            }
            (**(code **)(*plVar10 + 8))();
            puVar4 = (undefined8 *)*plVar9;
            if (puVar4 != (undefined8 *)0x0) {
              LOCK();
              piVar1 = (int *)(puVar4 + 1);
              iVar12 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar12 == 1) {
                puVar11 = (undefined8 *)puVar4[0x19];
                if (puVar11 == (undefined8 *)0x0) {
                  (**(code **)*puVar4)(puVar4,1);
                }
                else {
                  (**(code **)*puVar11)(puVar11,puVar4);
                }
              }
            }
            thunk_FUN_14028af80(plVar9,0x28);
          }
          lVar7 = *plVar18;
          if (*(longlong *)(lVar7 + 8) != *(longlong *)(lVar7 + 0x10)) {
            *(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 8);
          }
          plVar17 = *(longlong **)(lVar7 + 0x58);
          if (plVar17 != (longlong *)0x0) {
            (**(code **)(*plVar17 + 0x20))(plVar17,plVar17 != (longlong *)(lVar7 + 0x20));
            *(undefined8 *)(lVar7 + 0x58) = 0;
          }
          lVar7 = *plVar18;
          if (lVar7 != 0) {
            plVar17 = *(longlong **)(lVar7 + 0x58);
            if (plVar17 != (longlong *)0x0) {
              (**(code **)(*plVar17 + 0x20))(plVar17,plVar17 != (longlong *)(lVar7 + 0x20));
              *(undefined8 *)(lVar7 + 0x58) = 0;
            }
            FUN_14000d9e0(lVar7 + 8);
            thunk_FUN_14028af80(lVar7,0x60);
          }
          *plVar18 = 0;
        }
        return;
      }
      *(undefined4 *)(param_1 + 0x35c) = 0x7ffffffe;
    }
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(6);
  }
LAB_1400c29b7:
                    /* WARNING: Subroutine does not return */
  FUN_140290d30(5);
}

