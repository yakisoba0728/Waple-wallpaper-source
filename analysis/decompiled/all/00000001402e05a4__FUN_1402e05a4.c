// Function: FUN_1402e05a4
// Addr: 1402e05a4
// Size: 37 bytes


bool FUN_1402e05a4(undefined1 param_1,longlong *param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined *puVar4;
  int iVar5;
  bool bVar6;
  undefined1 local_res8 [8];
  
  local_res8[0] = param_1;
  uVar1 = FUN_1402db68c(param_2);
  if ((*(uint *)((longlong)param_2 + 0x14) & 0xc0) == 0) {
    iVar2 = func_0x0001402df8a0(uVar1,local_res8,1,param_3);
    bVar6 = iVar2 == 1;
  }
  else {
    iVar2 = 0;
    iVar5 = (int)*param_2 - (int)param_2[1];
    *param_2 = param_2[1] + 1;
    *(int *)(param_2 + 2) = (int)param_2[4] + -1;
    if (iVar5 < 1) {
      if (uVar1 + 2 < 2) {
        puVar4 = &DAT_1404dc7d0;
      }
      else {
        puVar4 = (undefined *)
                 (*(longlong *)(&DAT_1404e4960 + ((longlong)(int)uVar1 >> 6) * 8) +
                 (ulonglong)(uVar1 & 0x3f) * 0x48);
      }
      if (((puVar4[0x38] & 0x20) != 0) && (lVar3 = func_0x0001402dfec0(uVar1,0,2), lVar3 == -1)) {
        LOCK();
        *(uint *)((longlong)param_2 + 0x14) = *(uint *)((longlong)param_2 + 0x14) | 0x10;
        UNLOCK();
        return true;
      }
    }
    else {
      iVar2 = func_0x0001402df8a0(uVar1,param_2[1],iVar5,param_3);
    }
    bVar6 = iVar2 == iVar5;
    *(undefined1 *)param_2[1] = local_res8[0];
  }
  return bVar6;
}

