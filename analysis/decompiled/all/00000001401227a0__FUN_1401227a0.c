// Function: FUN_1401227a0
// Addr: 1401227a0
// Size: 620 bytes


ulonglong FUN_1401227a0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int local_res10 [2];
  uint local_res18 [2];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  uVar6 = (**(code **)(*param_2 + 0x38))(param_2,&DAT_14042c2d0,local_res10);
  uVar7 = uVar6 & 0xffffffff;
  if (-1 < (int)uVar6) {
    if (local_res10[0] == 100) {
      plVar2 = param_1 + 0x14;
      if ((longlong *)*plVar2 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar2 + 0x10))();
        *plVar2 = 0;
      }
      if (param_1[0x11] != 0) {
        MFGetService(param_1[0x11],&DAT_14042c370,&DAT_140489f60,plVar2);
      }
      plVar1 = (longlong *)*plVar2;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x18))(plVar1,(longlong)param_1 + 0x24,0);
        cVar3 = FUN_140015180(6,2,0);
        if ((cVar3 != '\0') &&
           (iVar4 = (**(code **)(*(longlong *)*plVar2 + 0x80))((longlong *)*plVar2,local_res18),
           -1 < iVar4)) {
          (**(code **)(*(longlong *)*plVar2 + 0x78))((longlong *)*plVar2,local_res18[0] | 0x102);
        }
      }
      (**(code **)(*param_1 + 0xa8))(param_1,*(undefined8 *)((longlong)param_1 + 0x1c));
      *(undefined4 *)(param_1 + 0x1d) = 4;
      *(undefined4 *)((longlong)param_1 + 0xe4) = 0xbf800000;
      local_18 = 0;
      local_28 = 0;
      uStack_20 = 0;
      if ((longlong *)param_1[0x12] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x12] + 0x10))();
        param_1[0x12] = 0;
      }
      plVar2 = (longlong *)param_1[0x11];
      uVar6 = 0;
      if (plVar2 != (longlong *)0x0) {
        uVar5 = (**(code **)(*plVar2 + 0x48))(plVar2,0,&local_28);
        uVar6 = (ulonglong)uVar5;
        if (-1 < (int)uVar5) {
          *(undefined4 *)(param_1 + 0x16) = 3;
          (**(code **)(*(longlong *)param_1[0x11] + 0x70))((longlong *)param_1[0x11],param_1 + 0x12)
          ;
        }
      }
      PropVariantClear((PROPVARIANT *)&local_28);
      *(undefined4 *)(param_1 + 0x19) = 0xbf800000;
      *(undefined4 *)((longlong)param_1 + 0xcc) = 0x3f800000;
      *(undefined4 *)(param_1 + 6) = 0x3f800000;
      (**(code **)(*param_1 + 0x30))(param_1,*(undefined4 *)((longlong)param_1 + 0x2c));
      (**(code **)(*param_1 + 0x38))(param_1,(int)param_1[6]);
    }
    else {
      if (local_res10[0] == 200) {
        (**(code **)(*param_1 + 0xa8))(param_1,*(undefined8 *)((longlong)param_1 + 0x1c));
        (**(code **)(*param_1 + 0x48))(param_1);
        return uVar7;
      }
      uVar6 = uVar7;
      if ((local_res10[0] == 400) && ((int)param_1[0x18] == 2)) {
        (**(code **)(*(longlong *)param_1[0x11] + 0x50))();
        *(undefined4 *)(param_1 + 0x16) = 4;
        local_18 = 0;
        uStack_20 = 0;
        local_28 = 0x14;
        (**(code **)(*(longlong *)param_1[0x11] + 0x48))((longlong *)param_1[0x11],0,&local_28);
        *(undefined4 *)(param_1 + 0x16) = 3;
        PropVariantClear((PROPVARIANT *)&local_28);
        return uVar7;
      }
    }
  }
  return uVar6;
}

