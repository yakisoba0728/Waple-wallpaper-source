// Function: FUN_1400c2fa0
// Addr: 1400c2fa0
// Size: 932 bytes


void FUN_1400c2fa0(longlong param_1)

{
  longlong *plVar1;
  DWORD DVar2;
  undefined8 *puVar3;
  DWORD *pDVar4;
  DWORD *pDVar5;
  int iVar6;
  DWORD DVar7;
  undefined8 uVar8;
  DWORD *pDVar9;
  DWORD *pDVar10;
  longlong lVar11;
  DWORD *pDVar12;
  longlong local_118 [7];
  longlong *local_e0;
  longlong local_d8 [7];
  longlong *local_a0;
  undefined1 local_98 [88];
  
  iVar6 = FUN_140290d80(param_1 + 0x310);
  if (iVar6 != 0) {
LAB_1400c3327:
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(5);
  }
  if (*(int *)(param_1 + 0x35c) == 0x7fffffff) {
    *(undefined4 *)(param_1 + 0x35c) = 0x7ffffffe;
  }
  else {
    DVar7 = GetCurrentThreadId();
    lVar11 = 0;
    pDVar10 = *(DWORD **)(param_1 + 0x268);
    for (pDVar9 = *(DWORD **)(param_1 + 0x260); pDVar9 != pDVar10; pDVar9 = pDVar9 + 0x24) {
      DVar2 = *pDVar9;
      puVar3 = *(undefined8 **)(pDVar9 + 0x12);
      local_e0 = (longlong *)0x0;
      if (puVar3 != (undefined8 *)0x0) {
        local_e0 = (longlong *)(**(code **)*puVar3)(puVar3,local_118);
      }
      puVar3 = *(undefined8 **)(pDVar9 + 0x22);
      local_a0 = (longlong *)0x0;
      if (puVar3 != (undefined8 *)0x0) {
        local_a0 = (longlong *)(**(code **)*puVar3)(puVar3,local_d8);
      }
      if (DVar2 == DVar7) {
        if (local_a0 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_14028c2c0();
        }
        (**(code **)(*local_a0 + 0x10))();
      }
      if (local_a0 != (longlong *)0x0) {
        (**(code **)(*local_a0 + 0x20))(local_a0,local_a0 != local_d8);
        local_a0 = (longlong *)0x0;
      }
      if (local_e0 != (longlong *)0x0) {
        (**(code **)(*local_e0 + 0x20))(local_e0,local_e0 != local_118);
      }
    }
    pDVar9 = *(DWORD **)(param_1 + 0x268);
    pDVar10 = *(DWORD **)(param_1 + 0x260);
    if (pDVar10 != pDVar9) {
      do {
        if (*pDVar10 == DVar7) break;
        pDVar10 = pDVar10 + 0x24;
      } while (pDVar10 != pDVar9);
      pDVar12 = pDVar10;
      if (pDVar10 != pDVar9) {
        while (pDVar5 = pDVar12, pDVar12 = pDVar5 + 0x24, pDVar12 != pDVar9) {
          if (*pDVar12 != DVar7) {
            *pDVar10 = *pDVar12;
            pDVar10[1] = pDVar5[0x25];
            pDVar10[2] = pDVar5[0x26];
            pDVar10[3] = pDVar5[0x27];
            if (pDVar10 != pDVar12) {
              pDVar4 = *(DWORD **)(pDVar10 + 0x12);
              if (pDVar4 != (DWORD *)0x0) {
                (**(code **)(*(longlong *)pDVar4 + 0x20))(pDVar4,pDVar4 != pDVar10 + 4);
                pDVar10[0x12] = 0;
                pDVar10[0x13] = 0;
              }
              FUN_140037830(pDVar10 + 4,pDVar5 + 0x28);
              pDVar4 = *(DWORD **)(pDVar10 + 0x22);
              if (pDVar4 != (DWORD *)0x0) {
                (**(code **)(*(longlong *)pDVar4 + 0x20))(pDVar4,pDVar4 != pDVar10 + 0x14);
                pDVar10[0x22] = 0;
                pDVar10[0x23] = 0;
              }
              FUN_140037830(pDVar10 + 0x14,pDVar5 + 0x38);
            }
            pDVar10 = pDVar10 + 0x24;
          }
        }
      }
    }
    pDVar9 = *(DWORD **)(param_1 + 0x268);
    pDVar12 = pDVar10;
    if (pDVar10 != pDVar9) {
      do {
        pDVar5 = *(DWORD **)(pDVar12 + 0x22);
        if (pDVar5 != (DWORD *)0x0) {
          (**(code **)(*(longlong *)pDVar5 + 0x20))(pDVar5,pDVar5 != pDVar12 + 0x14);
          pDVar12[0x22] = 0;
          pDVar12[0x23] = 0;
        }
        pDVar5 = *(DWORD **)(pDVar12 + 0x12);
        if (pDVar5 != (DWORD *)0x0) {
          (**(code **)(*(longlong *)pDVar5 + 0x20))(pDVar5,pDVar5 != pDVar12 + 4);
          pDVar12[0x12] = 0;
          pDVar12[0x13] = 0;
        }
        pDVar12 = pDVar12 + 0x24;
      } while (pDVar12 != pDVar9);
      *(DWORD **)(param_1 + 0x268) = pDVar10;
    }
    uVar8 = FUN_14009c1a0(local_98,param_1 + 0x278);
    FUN_1400c93d0(*(undefined8 *)(param_1 + 0x260),*(undefined8 *)(param_1 + 0x268),uVar8);
    FUN_140290ea0(param_1 + 0x310);
    iVar6 = FUN_140290d80(&DAT_1404df788);
    if (iVar6 != 0) goto LAB_1400c3327;
    if (DAT_1404df7d4 != 0x7fffffff) {
      do {
        if ((&DAT_1404df840)[lVar11 * 5] != 0) {
          while( true ) {
            thunk_FUN_14028af80(*(undefined8 *)
                                 (*(longlong *)
                                   ((&DAT_1404df828)[lVar11 * 5] +
                                   ((ulonglong)(&DAT_1404df838)[lVar11 * 5] >> 1 &
                                   (&DAT_1404df830)[lVar11 * 5] - 1) * 8) +
                                 (ulonglong)((uint)(&DAT_1404df838)[lVar11 * 5] & 1) * 8));
            plVar1 = &DAT_1404df840 + lVar11 * 5;
            *plVar1 = *plVar1 + -1;
            if (*plVar1 == 0) break;
            (&DAT_1404df838)[lVar11 * 5] = (&DAT_1404df838)[lVar11 * 5] + 1;
          }
          (&DAT_1404df838)[lVar11 * 5] = 0;
        }
        lVar11 = lVar11 + 1;
      } while (lVar11 != 10);
      FUN_140290ea0(&DAT_1404df788);
      return;
    }
    DAT_1404df7d4 = 0x7ffffffe;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140290d30(6);
}

