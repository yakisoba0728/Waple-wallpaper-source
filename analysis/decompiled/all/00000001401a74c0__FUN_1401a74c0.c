// Function: FUN_1401a74c0
// Addr: 1401a74c0
// Size: 185 bytes


longlong * FUN_1401a74c0(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  byte *pbVar1;
  char *_Str;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  size_t sVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  _Str = (char *)*param_3;
  sVar5 = strlen(_Str);
  uVar8 = 0;
  uVar7 = 0xcbf29ce484222325;
  if (sVar5 != 0) {
    do {
      pbVar1 = (byte *)(_Str + uVar8);
      uVar8 = uVar8 + 1;
      uVar7 = (uVar7 ^ *pbVar1) * 0x100000001b3;
    } while (uVar8 < sVar5);
  }
  uVar7 = *(ulonglong *)(param_1 + 0x30) & uVar7;
  lVar2 = *(longlong *)(param_1 + 8);
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 8 + uVar7 * 0x10);
  if (lVar6 == lVar2) {
LAB_1401a755f:
    lVar6 = 0;
  }
  else {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x18) + uVar7 * 0x10);
    cVar4 = FUN_14000d010(lVar6 + 0x10,_Str);
    while (cVar4 == '\0') {
      if (lVar6 == lVar3) goto LAB_1401a755f;
      lVar6 = *(longlong *)(lVar6 + 8);
      cVar4 = FUN_14000d010(lVar6 + 0x10,_Str);
    }
  }
  if (lVar6 == 0) {
    lVar6 = lVar2;
  }
  *param_2 = lVar6;
  return param_2;
}

