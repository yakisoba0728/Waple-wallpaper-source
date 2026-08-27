// Function: FUN_1400897a0
// Addr: 1400897a0
// Size: 142 bytes


bool FUN_1400897a0(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = *(uint *)(param_2 + 1);
  uVar4 = *(uint *)(param_3 + 1);
  if (*param_2 != 0) {
    uVar3 = uVar3 >> 2;
    uVar4 = uVar4 >> 2;
    uVar1 = uVar3;
    if (uVar4 < uVar3) {
      uVar1 = uVar4;
    }
    if (*param_3 == 0) {
      FID_conflict__assert
                (L"this->cstr_ && other.cstr_",
                 L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x146);
    }
    iVar2 = memcmp((void *)*param_2,(void *)*param_3,(ulonglong)uVar1);
    if (iVar2 < 0) {
      return true;
    }
    if (0 < iVar2) {
      return false;
    }
  }
  return uVar3 < uVar4;
}

