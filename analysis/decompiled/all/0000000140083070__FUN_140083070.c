// Function: FUN_140083070
// Addr: 140083070
// Size: 100 bytes


undefined8 FUN_140083070(undefined8 param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res10 [6];
  
  (*DAT_140426848)(param_1,local_res10);
  if (local_res10[0] == *param_2) {
    lVar2 = (*DAT_140426a88)(param_1,4);
    if (lVar2 == 0) {
      iVar1 = (*DAT_1404269e8)(param_1);
      if (iVar1 != 0) {
        *(undefined8 *)(param_2 + 2) = param_1;
        return 0;
      }
    }
  }
  return 1;
}

