// Function: FUN_1402db5fc
// Addr: 1402db5fc
// Size: 403 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined2 FUN_1402db5fc(undefined2 param_1,FILE *param_2,undefined8 param_3)

{
  char **ppcVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  char *pcVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  int local_48;
  char local_44 [12];
  ulonglong local_38;
  
  local_38 = DAT_1404dc040 ^ (ulonglong)auStack_78;
  if ((*(uint *)((longlong)&param_2->_base + 4) >> 0xc & 1) == 0) {
    iVar3 = _fileno(param_2);
    puVar7 = &DAT_1404dc700;
    if ((iVar3 == -1) || (iVar3 = _fileno(param_2), iVar3 == -2)) {
      puVar6 = &DAT_1404dc700;
    }
    else {
      iVar3 = _fileno(param_2);
      uVar4 = _fileno(param_2);
      puVar6 = (undefined *)
               ((&DAT_1404e4890)[(longlong)iVar3 >> 6] + (ulonglong)(uVar4 & 0x3f) * 0x48);
    }
    if (1 < (byte)(puVar6[0x39] - 1)) {
      iVar3 = _fileno(param_2);
      if ((iVar3 != -1) && (iVar3 = _fileno(param_2), iVar3 != -2)) {
        iVar3 = _fileno(param_2);
        uVar4 = _fileno(param_2);
        puVar7 = (undefined *)
                 ((ulonglong)(uVar4 & 0x3f) * 0x48 + (&DAT_1404e4890)[(longlong)iVar3 >> 6]);
      }
      iVar3 = 0;
      if ((char)puVar7[0x38] < '\0') {
        local_48 = 0;
        local_58 = param_3;
        iVar5 = FUN_1402dadf8(&local_48,local_44,5,param_1);
        if (iVar5 == 0) {
          if (local_48 < 1) {
            return param_1;
          }
          pcVar8 = local_44;
          while (iVar5 = FUN_1402cd0bc((int)*pcVar8,param_2,param_3), iVar5 != -1) {
            iVar3 = iVar3 + 1;
            pcVar8 = pcVar8 + 1;
            if (local_48 <= iVar3) {
              return param_1;
            }
          }
        }
        return 0xffff;
      }
    }
    ppcVar1 = &param_2->_base;
    *(int *)ppcVar1 = *(int *)ppcVar1 + -2;
    if (-1 < *(int *)ppcVar1) {
      *(undefined2 *)param_2->_ptr = param_1;
      param_2->_ptr = param_2->_ptr + 2;
      return param_1;
    }
  }
  else {
    ppcVar1 = &param_2->_base;
    *(int *)ppcVar1 = *(int *)ppcVar1 + -2;
    if (-1 < *(int *)ppcVar1) {
      *(undefined2 *)param_2->_ptr = param_1;
      param_2->_ptr = param_2->_ptr + 2;
      return param_1;
    }
  }
  uVar2 = FUN_1402e081c(param_1,param_2,param_3);
  return uVar2;
}

