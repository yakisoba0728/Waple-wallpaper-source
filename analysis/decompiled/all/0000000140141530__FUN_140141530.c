// Function: FUN_140141530
// Addr: 140141530
// Size: 580 bytes


void FUN_140141530(char *param_1)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint local_res10 [2];
  undefined4 local_res18 [2];
  undefined8 local_res20;
  longlong local_48 [2];
  
  local_48[0] = 0;
  local_res20 = 0;
  local_res18[0] = 0;
  iVar2 = (*DAT_1404e3af0)(0,0,local_48);
  if ((((iVar2 == 0) &&
       (iVar2 = (*DAT_1404e3ad8)(local_48[0],L"\\GPU Local Adapter Memory(*)\\Local Usage",0,
                                 &local_res20), iVar2 == 0)) &&
      (iVar2 = (*DAT_1404e3ae0)(local_48[0],1,*(undefined8 *)(param_1 + 8)), iVar2 == 0)) &&
     (uVar3 = 0, *param_1 != '\0')) {
    do {
      iVar2 = (*DAT_140426228)(*(undefined8 *)(param_1 + 8),0xffffffff);
      if ((iVar2 != 0) || (*param_1 == '\0')) break;
      local_res10[0] = 0;
      iVar2 = (*DAT_1404e3ae8)(local_res20,0x400,local_res18,local_res10,uVar3);
      if (iVar2 == -0x7ffff82e) {
        local_res18[0] = 0;
        iVar2 = (*DAT_1404e3ae8)(local_res20,0x400,local_res18,local_res10,0);
        if (iVar2 == -0x7ffff82e) {
          if (uVar3 != 0) {
            func_0x0001402bf8e0(uVar3);
            return;
          }
          uVar3 = thunk_FUN_1402da070(local_res18[0]);
          iVar2 = (*DAT_1404e3ae8)(local_res20,0x400,local_res18,local_res10,uVar3);
        }
      }
      if (iVar2 == 0) {
        lVar1 = *(longlong *)(param_1 + 0x28);
        lVar4 = *(longlong *)(param_1 + 0x20);
        uVar5 = (ulonglong)local_res10[0];
        uVar7 = lVar1 - lVar4 >> 3;
        if (uVar5 < uVar7) {
          lVar4 = lVar4 + uVar5 * 8;
UNWIND_INFO_1401417dc_UnwindCodes_36__OffsetInProlog:
          *(longlong *)(param_1 + 0x28) = lVar4;
        }
        else if (uVar7 < uVar5) {
          uVar6 = *(longlong *)(param_1 + 0x30) - lVar4 >> 3;
          if (uVar6 < uVar5) {
            if ((uVar6 <= 0x1fffffffffffffff - (uVar6 >> 1)) &&
               ((uVar6 = (uVar6 >> 1) + uVar6, uVar3 = uVar5, uVar6 < uVar5 ||
                (uVar3 = uVar6, uVar6 < 0x2000000000000000)))) {
              uVar3 = uVar3 * 8;
              if (uVar3 == 0) {
                func_0x000140421870(lVar1 - lVar4 & 0xfffffffffffffff8,0,(uVar5 - uVar7) * 8);
                return;
              }
              if (uVar3 < 0x1000) {
                func_0x00014028aff0(uVar3);
                return;
              }
              if (uVar3 < uVar3 + 0x27) {
                func_0x00014028aff0();
                return;
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_140017440();
          }
          lVar4 = (uVar5 - uVar7) * 8;
          func_0x000140421870(lVar1,0,lVar4);
          lVar4 = lVar4 + lVar1;
          goto UNWIND_INFO_1401417dc_UnwindCodes_36__OffsetInProlog;
        }
        uVar5 = 0;
        if (local_res10[0] != 0) {
          do {
            iVar2 = (int)uVar5;
            *(undefined8 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar2 * 8) =
                 *(undefined8 *)(uVar3 + 0x10 + (longlong)iVar2 * 0x18);
            uVar5 = (ulonglong)(iVar2 + 1U);
          } while (iVar2 + 1U < local_res10[0]);
        }
      }
    } while (*param_1 != '\0');
    if (uVar3 != 0) {
      func_0x0001402bf8e0(uVar3);
    }
  }
  if (local_48[0] != 0) {
    (*pcRam00000001404e3ad0)();
  }
  return;
}

