// Function: FUN_1403e6b10
// Addr: 1403e6b10
// Size: 174 bytes


bool FUN_1403e6b10(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  bool bVar8;
  int local_res8 [2];
  undefined1 local_res10 [24];
  ulonglong uVar7;
  
  if (*(char *)(param_1 + 0x40) != '\0') {
    local_res8[0] = -1;
    func_0x0001403eccc0(param_1 + 0x10,local_res8);
    if (local_res8[0] == 0) {
      local_res8[0] = -1;
      FUN_1403ed1b0(param_1 + 0x10,local_res10,local_res8);
      return local_res8[0] == -2;
    }
    return false;
  }
  uVar2 = *(uint *)(param_1 + 0x34);
  uVar7 = 0;
  if (uVar2 != 0) {
    do {
      lVar4 = *(longlong *)(param_1 + 0x28);
      piVar1 = (int *)(*(longlong *)(param_1 + 0x38) +
                      (ulonglong)*(uint *)(lVar4 + 4 + uVar7 * 8) * 0x48);
      if (*piVar1 == -1) {
        if (((((*(longlong *)(piVar1 + 2) == 0) && (*(longlong *)(piVar1 + 4) == 0)) &&
             (*(longlong *)(piVar1 + 6) == 0)) &&
            ((*(longlong *)(piVar1 + 8) == 0 && (*(longlong *)(piVar1 + 10) == 0)))) &&
           ((*(longlong *)(piVar1 + 0xc) == 0 &&
            ((*(longlong *)(piVar1 + 0xe) == 0 && (*(longlong *)(piVar1 + 0x10) == 0)))))) {
          bVar8 = true;
          *piVar1 = 0;
        }
        else {
          bVar8 = false;
        }
      }
      else {
        bVar8 = *piVar1 == 0;
      }
      if (!bVar8) {
        iVar3 = *(int *)(lVar4 + uVar7 * 8);
        iVar5 = FUN_1403cc050();
        return iVar3 * 0x200 + iVar5 == -1;
      }
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
    } while (uVar6 < uVar2);
  }
  return true;
}

