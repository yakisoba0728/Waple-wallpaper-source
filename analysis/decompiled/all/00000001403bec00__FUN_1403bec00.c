// Function: FUN_1403bec00
// Addr: 1403bec00
// Size: 579 bytes


undefined8 FUN_1403bec00(int *param_1,undefined4 param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  int local_res18 [2];
  undefined4 local_res20 [2];
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  longlong *local_50;
  undefined8 local_48;
  longlong *local_40;
  longlong *local_38;
  LPCRITICAL_SECTION local_30;
  
  lVar3 = FUN_1403ce860(&DAT_1404e51b8);
  if (lVar3 != 0) {
    plVar4 = (longlong *)FUN_14028af20(0x38);
    local_38 = plVar4;
    if (plVar4 == (longlong *)0x0) {
      plVar4 = (longlong *)0x0;
    }
    else {
      *plVar4 = (longlong)DWriteFontFileStream::vftable;
      *(undefined4 *)(plVar4 + 1) = 0;
      lVar5 = FUN_1403ce860(&DAT_1404e51b8);
      plVar4[5] = *(longlong *)(lVar5 + 0x10);
      *(undefined4 *)(plVar4 + 1) = 1;
      (**(code **)(*(longlong *)plVar4[5] + 8))();
      if ((char)param_1[1] != '\0') {
        *(undefined1 *)(param_1 + 1) = 0;
      }
      if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
        LOCK();
        *param_1 = *param_1 + 1;
        UNLOCK();
      }
      plVar4[2] = (longlong)param_1;
      if (plVar4 + 4 != (longlong *)0x0) {
        *(int *)(plVar4 + 4) = param_1[6];
      }
      plVar4[3] = *(longlong *)(param_1 + 4);
      lVar5 = plVar4[5];
      local_40 = plVar4;
      if (*(code **)(*plVar4 + 8) == FUN_140399d00) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      else {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
      lpCriticalSection = (LPCRITICAL_SECTION)(lVar5 + 0x10);
      local_30 = lpCriticalSection;
      EnterCriticalSection(lpCriticalSection);
      plVar1 = (longlong *)(lVar5 + 0x68);
      FUN_14038e370(lVar5 + 0x38,plVar1,
                    ((uint)((ulonglong)*plVar1 >> 0x20) ^ (uint)*plVar1) * -0x61c8864f,&local_40,1);
      lVar5 = *plVar1;
      *plVar1 = lVar5 + 1;
      if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
        LeaveCriticalSection(lpCriticalSection);
      }
      plVar4[6] = lVar5;
    }
    iVar2 = (**(code **)(**(longlong **)(lVar3 + 8) + 0x40))
                      (*(longlong **)(lVar3 + 8),plVar4 + 6,8,*(undefined8 *)(lVar3 + 0x10),
                       &local_50);
    if (*(code **)(*plVar4 + 0x10) == FUN_14039a110) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)(*plVar4 + 0x38))(plVar4);
      }
    }
    else {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
    if (-1 < iVar2) {
      iVar2 = (**(code **)(*local_50 + 0x28))(local_50,local_res18,local_54,local_res20,local_58);
      if ((-1 < iVar2) && (local_res18[0] != 0)) {
        local_48 = 0;
        (**(code **)(**(longlong **)(lVar3 + 8) + 0x48))
                  (*(longlong **)(lVar3 + 8),local_res20[0],1,&local_50,param_2,0,&local_48);
        (**(code **)(*local_50 + 0x10))();
        return local_48;
      }
      (**(code **)(*local_50 + 0x10))();
    }
  }
  return 0;
}

