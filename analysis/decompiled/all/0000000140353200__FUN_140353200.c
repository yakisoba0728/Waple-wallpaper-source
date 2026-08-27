// Function: FUN_140353200
// Addr: 140353200
// Size: 161 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_140353200(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int iVar4;
  int local_res8 [2];
  
  if ((param_1 != (undefined8 *)0x0) && (param_2 != (longlong *)0x0)) {
    puVar3 = (undefined8 *)0x0;
    local_res8[0] = 0;
    if (*param_2 == 0) {
      iVar4 = 6;
    }
    else {
      puVar3 = (undefined8 *)FUN_1402f7fa0(*param_2,0x18,local_res8);
      uVar2 = DAT_140451b18;
      uVar1 = _UNK_140451b10;
      if (local_res8[0] != 0) {
        return local_res8[0];
      }
      *puVar3 = _DAT_140451b08;
      puVar3[1] = uVar1;
      puVar3[2] = uVar2;
      iVar4 = 0;
    }
    if (iVar4 == 0) {
      *puVar3 = *param_1;
      puVar3[2] = param_2[1];
      param_2[1] = (longlong)puVar3;
    }
    return iVar4;
  }
  return 6;
}

