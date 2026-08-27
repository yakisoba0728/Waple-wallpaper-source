// Function: FUN_140084d30
// Addr: 140084d30
// Size: 148 bytes


ulonglong FUN_140084d30(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  uint3 uVar2;
  int iVar3;
  undefined4 extraout_var;
  uint uVar4;
  
  uVar1 = *(uint *)(param_2 + 1);
  uVar2 = (uint3)(uVar1 >> 8);
  if (*param_1 == 0) {
    return (ulonglong)CONCAT31(uVar2,*(uint *)(param_1 + 1) == uVar1);
  }
  uVar4 = *(uint *)(param_1 + 1) >> 2;
  if (uVar4 != uVar1 >> 2) {
    return (ulonglong)(uVar2 >> 2) << 8;
  }
  if (*param_2 == 0) {
    FID_conflict__assert
              (L"this->cstr_ && other.cstr_",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp"
               ,0x158);
  }
  iVar3 = memcmp((void *)*param_1,(void *)*param_2,(ulonglong)uVar4);
  return CONCAT71((int7)(CONCAT44(extraout_var,iVar3) >> 8),iVar3 == 0);
}

