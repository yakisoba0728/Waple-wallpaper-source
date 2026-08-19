// Function: FUN_1402c8aa8
// Addr: 1402c8aa8
// Size: 132 bytes


undefined8
FUN_1402c8aa8(undefined1 *param_1,longlong param_2,longlong param_3,longlong param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 local_res8 [8];
  longlong local_a8;
  longlong local_a0;
  char cStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char cStack_60;
  undefined1 *puStack_58;
  longlong lStack_50;
  undefined1 *puStack_48;
  longlong lStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  
  func_0x0001402bf8e8(&local_a8,param_6);
  uVar6 = 0;
  uVar1 = *(undefined4 *)(local_a0 + 0x18);
  if ((((param_1 != (undefined1 *)0x0) && (param_2 != 0)) && (*param_1 = 0, param_3 != 0)) &&
     (param_4 != 0)) {
    local_88 = 0;
    local_80 = 0;
    local_78 = 0;
    local_70 = 0;
    uStack_68 = 0;
    cStack_60 = '\0';
    iVar2 = func_0x0001402c8518(param_3,&local_88,local_res8,uVar1);
    if (iVar2 == 0) {
      lVar3 = FUN_1402da070(param_2 * 2);
      uVar5 = uVar6;
      if ((lVar3 != 0) &&
         (lVar4 = FUN_1402d8f00(lVar3,param_2,local_78,param_4,param_5,param_6), lVar4 != 0)) {
        uStack_38 = 0;
        uStack_30 = 0;
        puStack_58 = param_1;
        lStack_50 = param_2;
        puStack_48 = param_1;
        lStack_40 = param_2;
        iVar2 = FUN_1402c86b8(lVar3,&puStack_58,local_res8,uVar1);
        uVar5 = uStack_38;
        if (iVar2 != 0) {
          uVar5 = uVar6;
        }
      }
      FUN_1402d9110(lVar3);
      uVar6 = uVar5;
    }
    if (cStack_60 != '\0') {
      FUN_1402d9110(local_78);
    }
    if (cStack_90 != '\0') {
      *(uint *)(local_a8 + 0x3a8) = *(uint *)(local_a8 + 0x3a8) & 0xfffffffd;
    }
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402cb004();
}

