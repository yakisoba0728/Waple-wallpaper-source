// Function: FUN_140141460
// Addr: 140141460
// Size: 891 bytes


void FUN_140141460(char *param_1)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  DWORD DVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint local_res10 [2];
  undefined4 local_res18 [2];
  undefined8 local_res20;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  ulonglong local_58;
  longlong local_48 [2];
  
  uVar11 = 0;
  local_48[0] = 0;
  local_res20 = 0;
  local_res18[0] = 0;
  iVar3 = PdhOpenQueryW(0,0,local_48);
  if ((((iVar3 == 0) &&
       (iVar3 = PdhAddCounterW(local_48[0],L"\\GPU Local Adapter Memory(*)\\Local Usage",0,
                               &local_res20), iVar3 == 0)) &&
      (iVar3 = PdhCollectQueryDataEx(local_48[0],1,*(undefined8 *)(param_1 + 8)), iVar3 == 0)) &&
     (uVar5 = uVar11, *param_1 != '\0')) {
    do {
      DVar4 = WaitForSingleObject(*(HANDLE *)(param_1 + 8),0xffffffff);
      if ((DVar4 != 0) || (*param_1 == '\0')) break;
      local_res10[0] = 0;
      local_58 = uVar5;
      iVar3 = PdhGetFormattedCounterArrayW(local_res20,0x400,local_res18,local_res10);
      if (iVar3 == -0x7ffff82e) {
        local_res18[0] = 0;
        local_58 = 0;
        iVar3 = PdhGetFormattedCounterArrayW(local_res20,0x400,local_res18,local_res10);
        if (iVar3 == -0x7ffff82e) {
          if (uVar5 != 0) {
            thunk_FUN_1402d9040(uVar5);
          }
          uVar5 = _malloc_base(local_res18[0]);
          local_58 = uVar5;
          iVar3 = PdhGetFormattedCounterArrayW(local_res20,0x400,local_res18,local_res10);
        }
      }
      if (iVar3 == 0) {
        lVar1 = *(longlong *)(param_1 + 0x28);
        lVar7 = *(longlong *)(param_1 + 0x20);
        uVar8 = (ulonglong)local_res10[0];
        uVar13 = lVar1 - lVar7 >> 3;
        if (uVar8 < uVar13) {
          lVar7 = lVar7 + uVar8 * 8;
LAB_140141758:
          *(longlong *)(param_1 + 0x28) = lVar7;
        }
        else if (uVar13 < uVar8) {
          uVar9 = *(longlong *)(param_1 + 0x30) - lVar7 >> 3;
          if (uVar8 <= uVar9) {
            lVar7 = (uVar8 - uVar13) * 8;
            FUN_1404217a0(lVar1,0,lVar7);
            lVar7 = lVar7 + lVar1;
            goto LAB_140141758;
          }
          puVar10 = auStack_78;
          if ((0x1fffffffffffffff - (uVar9 >> 1) < uVar9) ||
             ((uVar9 = (uVar9 >> 1) + uVar9, uVar12 = uVar8, uVar8 <= uVar9 &&
              (puVar10 = auStack_78, uVar12 = uVar9, 0x1fffffffffffffff < uVar9))))
          goto LAB_1401417d6;
          uVar12 = uVar12 * 8;
          uVar9 = uVar11;
          if (uVar12 != 0) {
            if (uVar12 < 0x1000) {
              uVar9 = FUN_14028af20(uVar12);
              goto LAB_1401416a5;
            }
            puVar10 = auStack_78;
            if (uVar12 + 0x27 <= uVar12) goto LAB_1401417d6;
            lVar6 = FUN_14028af20();
            if (lVar6 != 0) {
              uVar9 = lVar6 + 0x27U & 0xffffffffffffffe0;
              *(longlong *)(uVar9 - 8) = lVar6;
              goto LAB_1401416a5;
            }
LAB_1401417cf:
            pcVar2 = (code *)swi(0x29);
            (*pcVar2)(5);
            puVar10 = auStack_70;
LAB_1401417d6:
                    /* WARNING: Subroutine does not return */
            *(undefined **)(puVar10 + -8) = &UNK_1401417db;
            FUN_140017370();
          }
LAB_1401416a5:
          FUN_1404217a0(uVar9 + (lVar1 - lVar7 & 0xfffffffffffffff8U),0,(uVar8 - uVar13) * 8);
          FUN_1404210f0(uVar9,*(longlong *)(param_1 + 0x20),
                        *(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20));
          lVar7 = *(longlong *)(param_1 + 0x20);
          if (lVar7 != 0) {
            uVar13 = (*(longlong *)(param_1 + 0x30) - lVar7 >> 3) * 8;
            if (0xfff < uVar13) {
              if (0x1f < (lVar7 - *(longlong *)(lVar7 + -8)) - 8U) goto LAB_1401417cf;
              uVar13 = uVar13 + 0x27;
              lVar7 = *(longlong *)(lVar7 + -8);
            }
            thunk_FUN_14028af80(lVar7,uVar13);
          }
          *(ulonglong *)(param_1 + 0x20) = uVar9;
          *(ulonglong *)(param_1 + 0x28) = uVar9 + uVar8 * 8;
          *(ulonglong *)(param_1 + 0x30) = uVar12 + uVar9;
        }
        uVar8 = uVar11;
        if (local_res10[0] != 0) {
          do {
            iVar3 = (int)uVar8;
            *(undefined8 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar3 * 8) =
                 *(undefined8 *)(uVar5 + 0x10 + (longlong)iVar3 * 0x18);
            uVar8 = (ulonglong)(iVar3 + 1U);
          } while (iVar3 + 1U < local_res10[0]);
        }
      }
    } while (*param_1 != '\0');
    if (uVar5 != 0) {
      thunk_FUN_1402d9040(uVar5);
    }
  }
  if (local_48[0] != 0) {
    PdhCloseQuery();
  }
  return;
}

