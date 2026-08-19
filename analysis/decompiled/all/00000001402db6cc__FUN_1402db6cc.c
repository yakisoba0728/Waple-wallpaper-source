// Function: FUN_1402db6cc
// Addr: 1402db6cc
// Size: 221 bytes


void FUN_1402db6cc(undefined2 param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  char *pcVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  int local_48;
  char local_44 [12];
  ulonglong local_38;
  
  local_38 = DAT_1404dc110 ^ (ulonglong)auStack_78;
  if ((*(uint *)((longlong)param_2 + 0x14) >> 0xc & 1) == 0) {
    iVar2 = FUN_1402db68c(param_2);
    puVar6 = &DAT_1404dc7d0;
    if ((iVar2 == -1) || (iVar2 = FUN_1402db68c(param_2), iVar2 == -2)) {
      puVar5 = &DAT_1404dc7d0;
    }
    else {
      iVar2 = FUN_1402db68c(param_2);
      uVar3 = FUN_1402db68c(param_2);
      puVar5 = (undefined *)
               (*(longlong *)(&DAT_1404e4960 + ((longlong)iVar2 >> 6) * 8) +
               (ulonglong)(uVar3 & 0x3f) * 0x48);
    }
    if (1 < (byte)(puVar5[0x39] - 1)) {
      iVar2 = FUN_1402db68c(param_2);
      if ((iVar2 != -1) && (iVar2 = FUN_1402db68c(param_2), iVar2 != -2)) {
        iVar2 = FUN_1402db68c(param_2);
        uVar3 = FUN_1402db68c(param_2);
        puVar6 = (undefined *)
                 ((ulonglong)(uVar3 & 0x3f) * 0x48 +
                 *(longlong *)(&DAT_1404e4960 + ((longlong)iVar2 >> 6) * 8));
      }
      iVar2 = 0;
      if ((char)puVar6[0x38] < '\0') {
        local_48 = 0;
        local_58 = param_3;
        iVar4 = FUN_1402daec8(&local_48,local_44,5,param_1);
        if ((iVar4 == 0) && (0 < local_48)) {
          pcVar7 = local_44;
          do {
            iVar4 = FUN_1402cd18c((int)*pcVar7,param_2,param_3);
            if (iVar4 == -1) break;
            iVar2 = iVar2 + 1;
            pcVar7 = pcVar7 + 1;
          } while (iVar2 < local_48);
        }
        goto code_r0x0001402db83e;
      }
    }
    plVar1 = param_2 + 2;
    *(int *)plVar1 = (int)*plVar1 + -2;
    if (-1 < (int)*plVar1) {
      *(undefined2 *)*param_2 = param_1;
      *param_2 = *param_2 + 2;
      goto code_r0x0001402db83e;
    }
  }
  else {
    plVar1 = param_2 + 2;
    *(int *)plVar1 = (int)*plVar1 + -2;
    if (-1 < (int)*plVar1) {
      *(undefined2 *)*param_2 = param_1;
      *param_2 = *param_2 + 2;
      goto code_r0x0001402db83e;
    }
  }
  func_0x0001402e08ec(param_1,param_2,param_3);
code_r0x0001402db83e:
  func_0x0001402ed2f0(local_38 ^ (ulonglong)auStack_78);
  return;
}

