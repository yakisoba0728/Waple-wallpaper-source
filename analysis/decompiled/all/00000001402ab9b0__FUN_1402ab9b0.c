// Function: FUN_1402ab9b0
// Addr: 1402ab9b0
// Size: 468 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
FUN_1402ab9b0(undefined8 param_1,longlong *param_2,longlong *param_3,undefined4 *param_4,
             longlong param_5,uint *param_6,undefined4 *param_7)

{
  undefined2 uVar1;
  short sVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_d8 [32];
  undefined1 **local_b8;
  longlong local_a8;
  char cStack_a0;
  undefined1 uStack_9f;
  short sStack_9e;
  undefined4 uStack_9c;
  int local_98 [2];
  undefined1 *local_90;
  longlong local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_1404dc040 ^ (ulonglong)auStack_d8;
  local_78 = *param_4;
  uStack_74 = param_4[1];
  uStack_70 = param_4[2];
  uStack_6c = param_4[3];
  local_a8 = *param_3;
  uVar3 = (undefined4)param_3[1];
  uStack_9c = *(undefined4 *)((longlong)param_3 + 0xc);
  cStack_a0 = (char)uVar3;
  uStack_9f = (undefined1)((uint)uVar3 >> 8);
  sStack_9e = (short)((uint)uVar3 >> 0x10);
  local_88 = *(longlong *)(*(longlong *)(param_5 + 0x40) + 8);
  (*(code *)PTR__guard_dispatch_icall_140426ae8)();
  local_b8 = &local_90;
  uVar1 = FUN_14029ba50(local_68,&local_a8,&local_78,*(undefined4 *)(param_5 + 0x18));
  if ((local_88 != 0) && (lVar4 = (*(code *)PTR__guard_dispatch_icall_140426ae8)(), lVar4 != 0)) {
    (*(code *)PTR__guard_dispatch_icall_140426ae8)(lVar4,1);
  }
  if ((char)uVar1 < '\0') {
    uVar3 = 0;
LAB_1402aba9c:
    *param_6 = 2;
  }
  else {
    uVar3 = FUN_140292860(local_68,&local_90,(int)(char)uVar1,local_98);
    if (((local_90 == local_68) || (local_98[0] != 0)) || ((char)((ushort)uVar1 >> 8) != '\0'))
    goto LAB_1402aba9c;
  }
  lVar4 = local_a8;
  if (cStack_a0 == '\0') {
    if (local_a8 == 0) {
LAB_1402abaeb:
      lVar4 = 0;
      local_a8 = 0;
      sVar2 = sStack_9e;
    }
    else {
      if (((short *)**(undefined8 **)(local_a8 + 0x38) == (short *)0x0) ||
         (**(int **)(local_a8 + 0x50) < 1)) {
        sVar2 = (*(code *)PTR__guard_dispatch_icall_140426ae8)(local_a8);
      }
      else {
        sVar2 = *(short *)**(undefined8 **)(local_a8 + 0x38);
      }
      if (sVar2 == -1) goto LAB_1402abaeb;
    }
    sStack_9e = sVar2;
    cStack_a0 = '\x01';
  }
  lVar5 = CONCAT44(uStack_74,local_78);
  if ((char)uStack_70 == '\0') {
    if (lVar5 != 0) {
      if (((short *)**(undefined8 **)(lVar5 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar5 + 0x50) < 1)) {
        sVar2 = (*(code *)PTR__guard_dispatch_icall_140426ae8)(lVar5);
      }
      else {
        sVar2 = *(short *)**(undefined8 **)(lVar5 + 0x38);
      }
      if (sVar2 != -1) goto LAB_1402abb3a;
    }
    lVar5 = 0;
  }
LAB_1402abb3a:
  if (lVar4 == 0) {
    if (lVar5 != 0) goto LAB_1402abb4e;
  }
  else if (lVar5 == 0) goto LAB_1402abb4e;
  *param_6 = *param_6 | 1;
LAB_1402abb4e:
  *param_7 = uVar3;
  *param_2 = local_a8;
  param_2[1] = CONCAT44(uStack_9c,CONCAT22(sStack_9e,CONCAT11(uStack_9f,cStack_a0)));
  return param_2;
}

