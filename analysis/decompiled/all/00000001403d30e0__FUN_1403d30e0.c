// Function: FUN_1403d30e0
// Addr: 1403d30e0
// Size: 211 bytes


undefined8 FUN_1403d30e0(longlong param_1,longlong param_2,uint param_3,int *param_4)

{
  LPCRITICAL_SECTION lpCriticalSection;
  byte bVar1;
  ushort uVar2;
  int iVar3;
  byte *pbVar4;
  undefined8 uVar5;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_2 + 8);
  EnterCriticalSection(lpCriticalSection);
  iVar3 = FUN_1402f0060(*(undefined8 *)(param_2 + 0x30),param_3);
  if (iVar3 == 0) {
    if (*(char *)(param_2 + 4) != '\0') {
      pbVar4 = (byte *)FUN_140398100(*(longlong *)(param_1 + 0x20) + 0xa0);
      if (((uint)*pbVar4 * 0x100 + (uint)pbVar4[1] == 0) && (bVar1 = pbVar4[0x3e], bVar1 != 0)) {
        if (bVar1 == 0xb2) {
          uVar2 = FUN_14039b800(param_3);
          param_3 = (uint)uVar2;
        }
        else {
          if (bVar1 != 0xb3) goto LAB_1403d318a;
          uVar2 = FUN_14039b890(param_3);
          param_3 = (uint)uVar2;
        }
      }
      else {
        if (0xff < param_3) goto LAB_1403d318a;
        param_3 = param_3 + 0xf000;
      }
      iVar3 = FUN_1402f0060(*(undefined8 *)(param_2 + 0x30),param_3);
      if (iVar3 != 0) goto LAB_1403d318e;
    }
LAB_1403d318a:
    uVar5 = 0;
  }
  else {
LAB_1403d318e:
    *param_4 = iVar3;
    uVar5 = 1;
  }
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return uVar5;
}

