// Function: FUN_140319a40
// Addr: 140319a40
// Size: 542 bytes


int FUN_140319a40(longlong *param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  short sVar2;
  undefined4 uVar3;
  longlong lVar4;
  short sVar5;
  undefined4 uVar6;
  int local_res8 [2];
  int local_res10 [2];
  
  (*(code *)**(undefined8 **)(param_4 + 8))(param_1,0,0,param_3);
  param_1[0x12] = (longlong)param_2;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x15] = 0;
  *(undefined2 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined1 *)((longlong)param_1 + 0xb6) = 0;
  local_res8[0] = FUN_14031a760(param_2,"%!PS-AdobeFont",0xe);
  if (((local_res8[0] == 0) ||
      (((char)local_res8[0] == '\x02' &&
       (local_res8[0] = FUN_14031a760(param_2,"%!FontType",10), local_res8[0] == 0)))) &&
     (local_res8[0] = FUN_1402f5c50(param_2,0), local_res8[0] == 0)) {
    sVar2 = FUN_1402f5ac0(param_2,local_res10);
    sVar5 = 0;
    iVar1 = local_res10[0];
    uVar6 = 0;
    if (((local_res10[0] == 0) &&
        (sVar5 = sVar2, iVar1 = local_res10[0], uVar6 = 0, (ushort)(sVar2 + 0x7fffU) < 2)) &&
       (uVar3 = FUN_1402f5970(param_2,local_res10), iVar1 = local_res10[0], local_res10[0] == 0)) {
      iVar1 = local_res10[0];
      uVar6 = uVar3;
    }
    local_res8[0] = iVar1;
    if (local_res8[0] == 0) {
      if (sVar5 == -0x7fff) {
        *(undefined1 *)((longlong)param_1 + 0xb4) = 1;
      }
      else {
        local_res8[0] = FUN_1402f5c50(param_2,0);
        if (local_res8[0] != 0) goto LAB_140319bba;
        uVar6 = (undefined4)param_2[1];
      }
      if (param_2[4] == 0) {
        param_1[0x13] = (ulonglong)*(uint *)((longlong)param_2 + 0xc) + *param_2;
        *(undefined4 *)(param_1 + 0x14) = uVar6;
        *(undefined1 *)((longlong)param_1 + 0xb5) = 1;
        local_res8[0] = FUN_1402f5c90(param_2);
        if (local_res8[0] == 0) {
LAB_140319c2f:
          lVar4 = param_1[0x13];
          param_1[1] = lVar4;
          param_1[2] = (ulonglong)*(uint *)(param_1 + 0x14) + lVar4;
          *param_1 = lVar4;
          return 0;
        }
        if (local_res8[0] == 0) {
          return 0;
        }
      }
      else {
        lVar4 = FUN_1402f7fa0(param_3,uVar6,local_res8);
        param_1[0x13] = lVar4;
        if ((local_res8[0] == 0) &&
           (local_res8[0] = FUN_1402f54b0(param_2,lVar4,uVar6), local_res8[0] == 0)) {
          *(undefined4 *)(param_1 + 0x14) = uVar6;
          goto LAB_140319c2f;
        }
      }
    }
  }
LAB_140319bba:
  if (*(char *)((longlong)param_1 + 0xb5) != '\0') {
    return local_res8[0];
  }
  FUN_1402f7f90(param_3,param_1[0x13]);
  param_1[0x13] = 0;
  return local_res8[0];
}

