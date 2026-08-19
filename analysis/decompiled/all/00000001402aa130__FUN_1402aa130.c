// Function: FUN_1402aa130
// Addr: 1402aa130
// Size: 172 bytes


void FUN_1402aa130(undefined8 param_1,undefined4 *param_2,longlong *param_3,longlong *param_4,
                  undefined1 param_5,undefined8 param_6,uint *param_7,undefined8 *param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  char ****ppppcVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined2 auStack_a8 [16];
  undefined1 local_88;
  undefined8 local_80;
  undefined1 *local_78;
  char ***local_68 [2];
  ulonglong local_58;
  ulonglong uStack_50;
  undefined1 local_48 [20];
  undefined2 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_1404dc110 ^ (ulonglong)auStack_a8;
  local_78 = local_48;
  local_80 = param_6;
  local_88 = param_5;
  FUN_1402a1280(param_1,local_68);
  if ((char)param_3[1] == '\0') {
    func_0x0001402a7f30(param_3);
  }
  if ((char)param_4[1] == '\0') {
    func_0x0001402a7f30(param_4);
  }
  if (*param_3 == 0) {
    if (*param_4 != 0) goto LAB_1402aa1d4;
  }
  else if (*param_4 == 0) goto LAB_1402aa1d4;
  *param_7 = *param_7 | 1;
LAB_1402aa1d4:
  if (local_58 == 0) {
    *param_7 = *param_7 | 2;
  }
  else {
    uVar6 = 0;
    if ((ulonglong)param_8[2] < local_58) {
      FUN_1402a9dc0(param_8,local_58 - param_8[2],0);
    }
    else {
      func_0x00014029e4b0();
    }
    ppppcVar4 = local_68;
    if (0xf < uStack_50) {
      ppppcVar4 = (char ****)local_68[0];
    }
    if (*(char *)ppppcVar4 == '-') {
      puVar5 = param_8;
      if (7 < (ulonglong)param_8[3]) {
        puVar5 = (undefined8 *)*param_8;
      }
      *(undefined2 *)puVar5 = uStack_34;
      uVar6 = 1;
    }
    for (; uVar6 < local_58; uVar6 = uVar6 + 1) {
      ppppcVar4 = local_68;
      if (0xf < uStack_50) {
        ppppcVar4 = (char ****)local_68[0];
      }
      puVar5 = param_8;
      if (7 < (ulonglong)param_8[3]) {
        puVar5 = (undefined8 *)*param_8;
      }
      *(undefined2 *)((longlong)puVar5 + uVar6 * 2) =
           auStack_a8[*(char *)((longlong)ppppcVar4 + uVar6)];
    }
  }
  uVar1 = *(undefined4 *)((longlong)param_3 + 4);
  lVar3 = param_3[1];
  uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
  *param_2 = (int)*param_3;
  param_2[1] = uVar1;
  param_2[2] = (int)lVar3;
  param_2[3] = uVar2;
                    /* WARNING: Subroutine does not return */
  thunk_FUN_140017310(local_68);
}

