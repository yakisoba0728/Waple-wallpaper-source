// Function: FUN_1403b3660
// Addr: 1403b3660
// Size: 194 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403b3660(int *param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  undefined4 local_48;
  undefined8 local_44;
  undefined8 uStack_3c;
  
  param_1[1] = 0;
  param_1[5] = 0;
  param_1[9] = 0;
  if (*param_1 < 1) {
    cVar2 = FUN_1403a4a30(param_1,1,0);
    if (cVar2 == '\0') {
      DAT_1404e4f20 = DAT_14045dd10;
      _DAT_1404e4f28 = DAT_14045dd18;
      _DAT_1404e4f30 = DAT_14045dd20;
      goto LAB_1403b36d7;
    }
  }
  uVar3 = (ulonglong)(uint)param_1[1];
  lVar1 = *(longlong *)(param_1 + 2);
  param_1[1] = param_1[1] + 1;
  *(undefined8 *)(lVar1 + uVar3 * 0x18) = 0x3f800000;
  *(undefined4 *)(lVar1 + 8 + uVar3 * 0x18) = 0;
  *(undefined8 *)(lVar1 + 0xc + uVar3 * 0x18) = 0x3f800000;
  *(undefined4 *)(lVar1 + 0x14 + uVar3 * 0x18) = 0;
LAB_1403b36d7:
  local_48 = 0;
  local_44 = _DAT_140471b20;
  uStack_3c = _UNK_140471b28;
  FUN_14038ae90(param_1 + 4,&local_48);
  local_48 = 2;
  local_44 = _DAT_140471b20;
  uStack_3c = _UNK_140471b28;
  FUN_14038ae90(param_1 + 8,&local_48);
  return;
}

