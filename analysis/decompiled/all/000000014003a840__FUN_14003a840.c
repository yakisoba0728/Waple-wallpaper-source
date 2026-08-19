// Function: FUN_14003a840
// Addr: 14003a840
// Size: 23 bytes


undefined8 FUN_14003a840(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_1 - *param_2;
  if (lVar1 == 0) {
    lVar1 = param_1[1] - param_2[1];
  }
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),lVar1 == 0);
}

