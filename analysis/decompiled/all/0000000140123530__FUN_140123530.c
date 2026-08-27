// Function: FUN_140123530
// Addr: 140123530
// Size: 512 bytes


int FUN_140123530(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4,
                 char param_5,char param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  uint local_58;
  int local_54;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  undefined1 local_38 [16];
  
  uVar3 = 0;
  local_50 = (longlong *)0x0;
  local_58 = 0;
  iVar1 = MFCreateTopology(&local_50);
  if (-1 < iVar1) {
    if ((param_6 != '\0') &&
       (iVar1 = (**(code **)*local_50)(local_50,&DAT_140489f50,&local_40), -1 < iVar1)) {
      (**(code **)(*local_40 + 0xa8))(local_40,&DAT_1404742e8,1);
      (**(code **)(*local_40 + 0x10))();
    }
    iVar1 = (**(code **)(*param_2 + 0x108))(param_2,&local_58);
    if (-1 < iVar1) {
      if (local_58 != 0) {
        do {
          local_40 = (longlong *)0x0;
          local_48 = (longlong *)0x0;
          local_54 = 0;
          bVar4 = false;
          iVar2 = (**(code **)(*param_2 + 0x110))(param_2,uVar3,&local_54,&local_40);
          if ((((-1 < iVar2) && (local_54 != 0)) &&
              (iVar2 = (**(code **)(*local_40 + 0x110))(local_40,&local_48), -1 < iVar2)) &&
             (iVar2 = (**(code **)(*local_48 + 0x40))(local_48,local_38), -1 < iVar2)) {
            iVar2 = memcmp(&DAT_14042c320,local_38,0x10);
            bVar4 = iVar2 == 0;
          }
          if (local_48 != (longlong *)0x0) {
            (**(code **)(*local_48 + 0x10))();
            local_48 = (longlong *)0x0;
          }
          if (local_40 != (longlong *)0x0) {
            (**(code **)(*local_40 + 0x10))();
          }
          if ((param_5 == '\0') && (bVar4)) {
            (**(code **)(*param_2 + 0x120))(param_2,uVar3);
          }
          else {
            iVar1 = FUN_140123230(local_50,param_1,param_2,uVar3,param_3);
            if (iVar1 < 0) goto LAB_1401236fe;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < local_58);
      }
      *param_4 = local_50;
      (**(code **)(*local_50 + 8))();
    }
  }
LAB_1401236fe:
  if (local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 0x10))();
  }
  return iVar1;
}

