// Function: FUN_1402e5fb4
// Addr: 1402e5fb4
// Size: 753 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_1402e5fb4(longlong param_1)

{
  longlong *plVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  short *psVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStackY_c8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = DAT_1404dc040 ^ (ulonglong)auStackY_c8;
  lVar5 = FUN_1402d9894();
  plVar1 = (longlong *)(lVar5 + 0x98);
  iVar3 = FUN_1402dc1dc(param_1,(-(uint)(*(int *)(lVar5 + 0xb4) != 0) & 0xfffff005) + 0x1002,
                        local_98,0x40);
  iVar8 = 0;
  if (iVar3 == 0) {
LAB_1402e601a:
    *(undefined4 *)(lVar5 + 0xa8) = 0;
    uVar4 = 1;
  }
  else {
    iVar3 = FUN_1402c12c0(*(undefined8 *)(lVar5 + 0xa0),local_98);
    lVar7 = -1;
    if (iVar3 != 0) goto LAB_1402e610e;
    iVar3 = FUN_1402dc1dc(param_1,(-(uint)(*(int *)(lVar5 + 0xb0) != 0) & 0xfffff002) + 0x1001,
                          local_98,0x40);
    if (iVar3 == 0) goto LAB_1402e601a;
    iVar3 = FUN_1402c12c0(*plVar1,local_98);
    if (iVar3 == 0) {
      lVar9 = -1;
      *(uint *)(lVar5 + 0xa8) = *(uint *)(lVar5 + 0xa8) | 0x304;
      do {
        lVar9 = lVar9 + 1;
      } while (*(short *)(param_1 + lVar9 * 2) != 0);
LAB_1402e60ef:
      iVar3 = FUN_1402d9b20();
      if (iVar3 != 0) goto LAB_1402e6291;
    }
    else if ((*(uint *)(lVar5 + 0xa8) & 2) == 0) {
      if ((*(int *)(lVar5 + 0xac) == 0) ||
         (iVar3 = FUN_1402cafd0(*plVar1,local_98,(longlong)*(int *)(lVar5 + 0xac)), iVar3 != 0)) {
        if (((*(byte *)(lVar5 + 0xa8) & 1) != 0) || (iVar3 = FUN_1402e6454(param_1), iVar3 == 0))
        goto LAB_1402e610e;
        *(uint *)(lVar5 + 0xa8) = *(uint *)(lVar5 + 0xa8) | 1;
        lVar9 = -1;
        do {
          lVar9 = lVar9 + 1;
        } while (*(short *)(param_1 + lVar9 * 2) != 0);
      }
      else {
        *(uint *)(lVar5 + 0xa8) = *(uint *)(lVar5 + 0xa8) | 2;
        lVar9 = -1;
        do {
          lVar9 = lVar9 + 1;
        } while (*(short *)(param_1 + lVar9 * 2) != 0);
      }
      goto LAB_1402e60ef;
    }
LAB_1402e610e:
    if ((*(uint *)(lVar5 + 0xa8) & 0x300) != 0x300) {
      iVar3 = FUN_1402dc1dc(param_1,(-(uint)(*(int *)(lVar5 + 0xb0) != 0) & 0xfffff002) + 0x1001,
                            local_98,0x40);
      if (iVar3 == 0) goto LAB_1402e601a;
      iVar3 = FUN_1402c12c0(*plVar1,local_98);
      if (iVar3 == 0) {
        uVar4 = *(uint *)(lVar5 + 0xa8);
        *(uint *)(lVar5 + 0xa8) = uVar4 | 0x200;
        if (*(int *)(lVar5 + 0xb0) == 0) {
          if (*(int *)(lVar5 + 0xac) != 0) {
            lVar9 = -1;
            do {
              lVar9 = lVar9 + 1;
            } while (*(short *)(*plVar1 + lVar9 * 2) != 0);
            if ((int)lVar9 == *(int *)(lVar5 + 0xac)) {
              iVar3 = FUN_1402e6454(param_1);
              if (iVar3 == 0) {
                psVar6 = (short *)*plVar1;
                iVar3 = 0;
                if (psVar6 != (short *)0x0) {
                  while( true ) {
                    iVar8 = iVar3;
                    sVar2 = *psVar6;
                    psVar6 = psVar6 + 1;
                    if ((0x19 < (ushort)(sVar2 - 0x41U)) && (0x19 < (ushort)(sVar2 - 0x61U))) break;
                    iVar3 = iVar8 + 1;
                  }
                }
                lVar9 = -1;
                do {
                  lVar9 = lVar9 + 1;
                } while (*(short *)(*plVar1 + lVar9 * 2) != 0);
                if (iVar8 == (int)lVar9) goto LAB_1402e623b;
              }
              *(uint *)(lVar5 + 0xa8) = *(uint *)(lVar5 + 0xa8) | 0x100;
              if (*(short *)(lVar5 + 0x2f0) == 0) {
                do {
                  lVar7 = lVar7 + 1;
                } while (*(short *)(param_1 + lVar7 * 2) != 0);
                goto LAB_1402e6226;
              }
              goto LAB_1402e623b;
            }
          }
          *(uint *)(lVar5 + 0xa8) = uVar4 | 0x300;
          if (*(short *)(lVar5 + 0x2f0) == 0) {
            do {
              lVar7 = lVar7 + 1;
            } while (*(short *)(param_1 + lVar7 * 2) != 0);
            goto LAB_1402e6226;
          }
        }
        else {
          *(uint *)(lVar5 + 0xa8) = uVar4 | 0x300;
          if (*(short *)(lVar5 + 0x2f0) == 0) {
            do {
              lVar7 = lVar7 + 1;
            } while (*(short *)(param_1 + lVar7 * 2) != 0);
LAB_1402e6226:
            iVar3 = FUN_1402d9b20();
            if (iVar3 != 0) {
LAB_1402e6291:
                    /* WARNING: Subroutine does not return */
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
          }
        }
      }
    }
LAB_1402e623b:
    uVar4 = ~(*(uint *)(lVar5 + 0xa8) >> 2) & 1;
  }
  return uVar4;
}

