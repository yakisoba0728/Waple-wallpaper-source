// Function: FUN_1402aae00
// Addr: 1402aae00
// Size: 515 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
FUN_1402aae00(undefined8 param_1,longlong *param_2,longlong *param_3,undefined4 *param_4,
             longlong param_5,uint *param_6,undefined8 *param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  short sVar5;
  longlong lVar6;
  int *piVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined1 auStack_3d8 [32];
  undefined1 **local_3b8;
  longlong local_3a8;
  char cStack_3a0;
  undefined1 uStack_39f;
  short sStack_39e;
  undefined4 uStack_39c;
  undefined1 *local_398;
  longlong local_390;
  undefined4 local_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined1 local_378 [800];
  ulonglong local_58;
  
  local_58 = DAT_1404dc040 ^ (ulonglong)auStack_3d8;
  local_388 = *param_4;
  uStack_384 = param_4[1];
  uStack_380 = param_4[2];
  uStack_37c = param_4[3];
  local_3a8 = *param_3;
  uVar3 = (undefined4)param_3[1];
  uStack_39c = *(undefined4 *)((longlong)param_3 + 0xc);
  cStack_3a0 = (char)uVar3;
  uStack_39f = (undefined1)((uint)uVar3 >> 8);
  sStack_39e = (short)((uint)uVar3 >> 0x10);
  local_390 = *(longlong *)(*(longlong *)(param_5 + 0x40) + 8);
  (*(code *)PTR__guard_dispatch_icall_140426ae8)();
  local_3b8 = &local_398;
  uVar4 = FUN_1402970c0(local_378,0x300,&local_3a8,&local_388);
  if ((local_390 != 0) && (lVar6 = (*(code *)PTR__guard_dispatch_icall_140426ae8)(), lVar6 != 0)) {
    (*(code *)PTR__guard_dispatch_icall_140426ae8)(lVar6,1);
  }
  if ((char)uVar4 == '\0') {
    uVar9 = 0;
LAB_1402aaf11:
    *param_6 = 2;
  }
  else {
    piVar7 = (int *)FUN_1402caf34();
    iVar1 = *piVar7;
    *piVar7 = 0;
    uVar9 = FUN_1402d3d60(local_378,&local_398);
    iVar2 = *piVar7;
    *piVar7 = iVar1;
    if (((local_398 == local_378) || (iVar2 != 0)) || ((char)((ushort)uVar4 >> 8) != '\0'))
    goto LAB_1402aaf11;
  }
  lVar6 = local_3a8;
  if (cStack_3a0 == '\0') {
    if (local_3a8 == 0) {
LAB_1402aaf64:
      lVar6 = 0;
      local_3a8 = 0;
      sVar5 = sStack_39e;
    }
    else {
      if (((short *)**(undefined8 **)(local_3a8 + 0x38) == (short *)0x0) ||
         (**(int **)(local_3a8 + 0x50) < 1)) {
        sVar5 = (*(code *)PTR__guard_dispatch_icall_140426ae8)(local_3a8);
      }
      else {
        sVar5 = *(short *)**(undefined8 **)(local_3a8 + 0x38);
      }
      if (sVar5 == -1) goto LAB_1402aaf64;
    }
    sStack_39e = sVar5;
    cStack_3a0 = '\x01';
  }
  lVar8 = CONCAT44(uStack_384,local_388);
  if ((char)uStack_380 == '\0') {
    if (lVar8 != 0) {
      if (((short *)**(undefined8 **)(lVar8 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar8 + 0x50) < 1)) {
        sVar5 = (*(code *)PTR__guard_dispatch_icall_140426ae8)(lVar8);
      }
      else {
        sVar5 = *(short *)**(undefined8 **)(lVar8 + 0x38);
      }
      if (sVar5 != -1) goto LAB_1402aafb2;
    }
    lVar8 = 0;
  }
LAB_1402aafb2:
  if (lVar6 == 0) {
    if (lVar8 != 0) goto LAB_1402aafc7;
  }
  else if (lVar8 == 0) goto LAB_1402aafc7;
  *param_6 = *param_6 | 1;
LAB_1402aafc7:
  *param_7 = uVar9;
  *param_2 = local_3a8;
  param_2[1] = CONCAT44(uStack_39c,CONCAT22(sStack_39e,CONCAT11(uStack_39f,cStack_3a0)));
  return param_2;
}

