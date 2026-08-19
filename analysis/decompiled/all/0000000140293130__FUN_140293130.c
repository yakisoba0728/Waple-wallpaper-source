// Function: FUN_140293130
// Addr: 140293130
// Size: 276 bytes


void FUN_140293130(undefined8 param_1,undefined4 *param_2)

{
  undefined **ppuVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined *local_48;
  undefined **ppuStack_40;
  
  uVar10 = 0;
  puVar5 = *(undefined **)(param_2 + 0xe);
  iVar3 = *(int *)(puVar5 + (longlong)*(int *)(*(longlong *)(param_2 + 0xc) + 0xc) + 4);
  lVar9 = (longlong)*(int *)(puVar5 + iVar3 + 0x14) + 0xb0;
  local_48 = puVar5;
  puVar7 = (undefined8 *)thunk_FUN_1402da070();
  if (puVar7 != (undefined8 *)0x0) {
    FUN_140293490(puVar7 + 0x16,*(undefined8 *)(param_2 + 10),puVar5 + iVar3,puVar5,uVar10,lVar9);
    *puVar7 = 0;
    puVar7[1] = 0;
    *(undefined4 *)(puVar7 + 1) = 1;
    *(undefined4 *)((longlong)puVar7 + 0xc) = 1;
    *puVar7 = &PTR_UNWIND_INFO_14029347f_SizeOfProlog_14042b1b0;
    puVar7[0x15] = 0;
    *(undefined4 *)(puVar7 + 2) = *param_2;
    *(uint *)((longlong)puVar7 + 0x14) = param_2[1] | 1;
    puVar7[3] = 0;
    puVar7[4] = 0;
    uVar4 = param_2[6];
    *(uint *)(puVar7 + 5) = uVar4;
    uVar8 = (ulonglong)uVar4;
    if (0xf < uVar4) {
      uVar8 = 0xf;
    }
                    /* WARNING: Subroutine does not return */
    FUN_1404211c0(puVar7 + 6,param_2 + 8,uVar8 * 8);
  }
  LOCK();
  DAT_1404dc388 = DAT_1404dc388 + 1;
  UNLOCK();
  local_48 = &DAT_1404dc390;
  ppuStack_40 = &PTR_DAT_1404dc380;
  FUN_140292f50(param_1,&local_48);
  ppuVar6 = ppuStack_40;
  if (ppuStack_40 != (undefined **)0x0) {
    LOCK();
    ppuVar1 = ppuStack_40 + 1;
    iVar3 = *(int *)ppuVar1;
    *(int *)ppuVar1 = *(int *)ppuVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (*(code *)PTR_FUN_140426bb8)(ppuStack_40);
      LOCK();
      piVar2 = (int *)((longlong)ppuVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (*(code *)PTR_FUN_140426bb8)(ppuVar6);
        return;
      }
    }
  }
  return;
}

